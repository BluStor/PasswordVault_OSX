
#include <QDebug>
#include <QThread>
#include <QTime>
#include <QDateTime>
#include <QFile>
#include <QByteArrayMatcher>
#include <QTime>

#include "BluetoothDevice.h"
#include "gui/MessageBox.h"
#include "bluetooth/bluetoothdevicemac.h"
#include <QBluetoothUuid>
#include <QTimer>
#include <QCoreApplication>
#include <QApplication>

BluetoothDevice* BluetoothDevice::m_instance(nullptr);

BluetoothDevice::BluetoothDevice(QObject* parent)
    : QObject(parent)
{
    socket = 0 ;

}

BluetoothDevice::~BluetoothDevice()
{
    // Close port if its still open
    if(socket || socket->isOpen())
    {
        stopClient();
    }
}

// Returns instance of Bluetooth Device connected to system
BluetoothDevice* BluetoothDevice::instance()
{
    if (!m_instance) {
        m_instance = new BluetoothDevice(nullptr);
    }

    return m_instance;
}

void BluetoothDevice::cardTimeout() {
    timeout = true;
    Q_EMIT stopWaiting();
}


bool BluetoothDevice::connectDevice()
{
    bool connectionSuccessful = false ;

    if( isBluetoothOn())
    {
        if(isCardPaired())
        {
            connectionAttempts = 0;

            while ((connectionAttempts < MAX_RETRY) && (!connectionSuccessful)) {

                connectionAttempts++;

                qDebug() << "Connection attempt: " << connectionAttempts << " of " << MAX_RETRY;
                
                // Wait MAX_CONNECTION_WAIT seconds for card connection
                QTimer *timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(cardTimeout()));
                timeout = false;
                timer->start(1000 * MAX_CONNECTION_WAIT);
            
                QEventLoop loop;
                loop.connect(m_instance, SIGNAL(stopWaiting()), SLOT(quit()));
                
                startClient();
                
                loop.exec();

                
                //while (!sppConnected && !timeout) {
                //    QCoreApplication::processEvents();
                //}


                // Stop the timer
                timer->stop();

                if (sppConnected) {
                    connectionSuccessful = true;
                }

            }

            if (!connectionSuccessful) {
                // Card failed to connect
                QMessageBox::critical(NULL, "Card not found.", "Please check that your card is charged and powered on.");
                stopClient();
            }

        }
        else
        {
            // Card is not paired
            QMessageBox::critical(NULL, "Card is not paired.", "Please pair card with system and retry.");
            stopClient();
        }
    }
    else
    {
        // Bluetooth is disabled
         QMessageBox::critical(NULL, "Bluetooth is disabled.", "Please enable bluetooth and retry.");
         stopClient();
    }

    return connectionSuccessful;
}



QString BluetoothDevice::getErrorMessage()
{
    QString errorMessage = socket->errorString();
    qDebug()<< "Error:" << errorMessage ;
    return errorMessage ;
}

int BluetoothDevice::getSerialPortError()
{
    int errorNum = socket->error();
    qDebug()<< "Error:" << errorNum ;
    return errorNum ;
}


void BluetoothDevice::reportSerialPortError()
{
    if(socket->error() !=0)
    {
        qDebug()<<  socket->errorString();
        QMessageBox::critical(NULL, "Error:", socket->errorString());
    }
}

void BluetoothDevice::cardDataTimeout() {
    dataTimeout = true;
}

bool BluetoothDevice::waitForBytesWritten(int waitTime) {

    // Wait UPLOAD_DELAY_MILLIS  for card connection
    dataTimeout = false;
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(cardDataTimeout()));
    timer->start(waitTime);
    while (socket && socket->bytesToWrite() > 0 && !dataTimeout) {
        QCoreApplication::processEvents();
    }

    // Stop the timer if it's still running
    if (!dataTimeout) timer->stop();

    if (socket) {
        return socket->bytesToWrite() == 0;
    } else {
        return false;
    }
}


bool BluetoothDevice::waitForReadReady(int waitTime) {

    // Wait UPLOAD_DELAY_MILLIS for read data to be available
    dataTimeout = false;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(cardDataTimeout()));
    timer->setSingleShot(true);
    timer->start(waitTime);
    while (socket && !(socket->bytesAvailable() > 0) && !dataTimeout) {
        QCoreApplication::processEvents();
    }

    // Stop the timer if it's still running
    if (dataTimeout) {
        qDebug() << "Timeout waiting for data packet.";
        return false;
    }

    timer->stop();
    readReady = false;
    return true;
}

// Send command to card and read reposne.
// cmdParams - all parameters to command - delimeted by space
QByteArray BluetoothDevice::sendCommand(QString cmdName , QString cmdParams)
{
    QByteArray response ;
    QString cmd = QString(cmdName + " " + cmdParams + "\r\n");
    QByteArray cmdByteArray = cmd.toUtf8() ;

    if( socket && socket->isOpen())
    {
        //create data packet for sending command to device
        QByteArray dataPacket = createDataPacket(cmdByteArray , COMMAND_CHANNEL);

        qDebug()<< QTime::currentTime() << " : " << cmd << "\n";

        if(socket->write(dataPacket, dataPacket.size()) == dataPacket.size())
        {
            if (waitForBytesWritten(UPLOAD_DELAY_MILLIS))
            {
                while (waitForReadReady(UPLOAD_DELAY_MILLIS))
                {
                    QByteArray responseData =  socket->read(socket->bytesAvailable());
                    response += responseData ;
                    qDebug()<< QTime::currentTime() << " : " << responseData ;
                }
            }
            else
            {
                qDebug() << "Error(waitForBytesWritten):" <<socket->errorString();
            }

        }
        else
        {
            qDebug() << "Error(write):" <<socket->errorString();
        }

        qDebug()<< QTime::currentTime() <<"Final Response:" << response ;
    }
    else
    {
        qDebug() << "sendCommand: Device is not open.";
    }

    stopClient();
    return response ;
}

// @Function : Parses response received from command.
// @input param:    reponse - response string received.
// @output param:   statusCodes - All status codes
//                  messages - list of messages in response string
//                  finalStatusCode - last status code
void BluetoothDevice::parseResponse(QByteArray response, QList<int> * statusCodes , QList<QByteArray>* messages , int* finalStatusCode)
{
    //QByteArray pattern("\r\n\x00\x00");
    QByteArray pattern(4, 0);
    pattern[0] = 13 ;
    pattern[1] = 10 ;
    pattern[2] = 0 ;
    pattern[3] = 0 ;
    QByteArrayMatcher baMatcher(pattern) ;

    QByteArrayList list;

    int index = -1;
    int oldIndex = 0;
    int lastIndex = response.lastIndexOf(pattern);

    do
    {
        //int msgType = *(char*)(response.data() + oldIndex);
        int msgType = *static_cast<char*>(response.data() + oldIndex);
        //int size_msb = *(char*)(response.data() + oldIndex + 1);
        int size_msb = *static_cast<char*>(response.data() + oldIndex + 1);
        //int size_lsb = *(char*)(response.data() + oldIndex + 2);
        int size_lsb = *static_cast<char*>(response.data() + oldIndex + 2);
        int size =(size_msb << 8 | size_lsb)-5;

        QByteArray listItem = QByteArray(response.data() + oldIndex + 3, size);
        QByteArray message ;
        int statusCode =0;
        if(msgType != 2)
        {
            // Example : "\x01\x00\x1D""150 Opening connection\r\n\x00\x00"

            int splitIndex = listItem.indexOf(" ");
            QByteArray status = QByteArray(listItem , splitIndex);
            message = QByteArray(listItem.data() + splitIndex+1 , listItem.size()-status.size()-1);
            statusCode = status.toInt();
            //index = response.indexOf(pattern, index +1);
           // index = baMatcher.indexIn(response, index +1 );
            index = baMatcher.indexIn(response, oldIndex);
            oldIndex = index + 4;
        }
        else
        {
            // Example : \x02\x00@-rw-rw-rw-   1 root  root       1680 Feb 23  2017 db.kdbx\r\n\x00\x00"

            message = listItem;
            //index = response.indexOf(pattern, oldIndex +1);
            index = baMatcher.indexIn(response, oldIndex  );

            oldIndex = index + 4;
        }
        statusCodes->append(statusCode);
        messages->append(message);
        qDebug() <<"message :" << message ;
        if(index == lastIndex)
        {
            *finalStatusCode = statusCode;
            break;

        }
    }while(1);
}

// Create Data Packet
QByteArray BluetoothDevice::createDataPacket(QByteArray data , int dataChannel)
{
    short dataPacketSize = data.size() + HEADER_SIZE + CHECKSUM_SIZE;  // 3 bytes for header + 2 for checksum;

    if(dataPacketSize > PACKET_SIZE)
    {
        dataPacketSize = PACKET_SIZE ;
        qDebug() << "Chopping data .... packet size should be <=512" ;
    }


    QByteArray dataPacket(dataPacketSize,0);

    // Header
    dataPacket[0] = static_cast<char>(dataChannel & 0xff);
    dataPacket[1] = static_cast<char>(dataPacketSize >> 8);
    dataPacket[2] = static_cast<char>(dataPacketSize & 0xff);

    // Add data
    int dataPayloadSize = dataPacketSize - HEADER_SIZE - CHECKSUM_SIZE ;

    for (int i = 0; i < dataPayloadSize ; i++) {
        dataPacket[i + 3] = data[i];
    }
    // Add checksum
    dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
    dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

    return dataPacket ;
}

// Removes header and checksum from the data received from the card.
QByteArray BluetoothDevice::dePacketizeStream(QByteArray inputStream,int* pFinalStatusCode)
{
    QByteArray outputStream ;
    QByteArray pattern(4, 0);
    pattern[0] = 13 ;
    pattern[1] = 10 ;
    pattern[2] = 0 ;
    pattern[3] = 0 ;
    QByteArrayMatcher baMatcher(pattern) ;
    QByteArrayList list;

    int oldIndex = 0;
    int index = baMatcher.indexIn(inputStream );

    QByteArray firstStreamPart = QByteArray(inputStream , index + pattern.size());
    QByteArray secondStreamPart = QByteArray(inputStream.data() + (index + pattern.size() +1 ) , inputStream.size());

    QList<QByteArray> packets ;

    while(oldIndex < index)
    {
        int dataChannel = inputStream[oldIndex];
        if((dataChannel) == 2)
        {
            int packetSizeMSB =  inputStream[oldIndex+1];
            int packetSizeLSB = inputStream[oldIndex+2];
            int packetSize = static_cast<int> (packetSizeMSB << 8);
            packetSize += static_cast<int> (packetSizeLSB & 0xFF);

            outputStream += QByteArray( inputStream.data() + oldIndex + 3, packetSize-5) ;
            oldIndex = oldIndex + packetSize ;
        }
        else
        {
            int packetSizeMSB =  inputStream[oldIndex+1];
            int packetSizeLSB = inputStream[oldIndex+2];
            int packetSize = static_cast<int> (packetSizeMSB << 8);
            packetSize += static_cast<int> (packetSizeLSB & 0xFF);

            QByteArray resultStream = QByteArray( inputStream.data() + oldIndex + 3, packetSize-5) ;

            int splitIndex = resultStream.indexOf(" ");

            QByteArray status = QByteArray(resultStream , splitIndex);
            //message = QByteArray(listItem.data() + splitIndex+1 , listItem.size()-status.size()-1);
            *pFinalStatusCode = status.toInt();

            oldIndex = oldIndex + packetSize ;

         }
    }

    return outputStream ;

}

void BluetoothDevice::deleteFile(QString path)
{
    if((socket == 0) || socket->isOpen() == false)
    {
        connectDevice();
    }

    QByteArray response = sendCommand(DELE ,  path);

    if(response.isEmpty() == false)
    {
        QList<int>  statusCodes;
        QList<QByteArray> messages;
        int finalStatusCode;
        parseResponse(response, &statusCodes , &messages , &finalStatusCode);

        if((finalStatusCode != DELETE_ACTION_SUCCESS) || (finalStatusCode != 0))
        {
            QMessageBox::critical(NULL, "Error " , "DELE command failed. Error code: "+ QString::number(finalStatusCode ));
        }

    }
    else
    {
        if(socket->error() !=0)
        {
            qDebug()<<  socket->errorString();
        }
    }


     stopClient();


}

// this function creates a file 'fileName' having 'data' content at path 'onCardPath'
bool BluetoothDevice::storeFileOnCard(QString onCardPath, QString fileName, QByteArray data)
{
    bool returnValue = false ;
    bool deviceOpened = false ;

    if((socket == 0) || socket->isOpen() == false)
    {
        deviceOpened = connectDevice() ;
    }

    if(socket)
        deviceOpened = socket->isOpen() ;

    if(deviceOpened)
    {
        // 1. Send Store Command first
        QByteArray response ;
        QString cmd = QString("STOR " + onCardPath + fileName + "\r\n");

        qDebug()<< QTime::currentTime() << cmd << "\n";

        QByteArray cmdBytes = cmd.toUtf8() ;
        QByteArray dataPacket = QByteArray(cmdBytes.size()+ 5, 0);
        short packetSize = static_cast<short>(cmdBytes.size() +5);
        // Add header
        dataPacket[0] = static_cast<char>(COMMAND_CHANNEL & 0xff);
        dataPacket[1] = static_cast<char> (packetSize >> 8);
        dataPacket[2] = static_cast<char> (packetSize & 0xff);
        // Add data
        for (int i = 0; i < cmdBytes.size(); i++) {
            dataPacket[i + 3] = cmdBytes[i];
        }
        // Add checksum
        dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
        dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

        if(socket->write(dataPacket, dataPacket.size()) == dataPacket.size())
        {
            if (waitForBytesWritten(UPLOAD_DELAY_MILLIS))
            {
                waitForReadReady(UPLOAD_DELAY_MILLIS);
            }
            else
            {
                qDebug() << "storeFileOnCard Error(waitForBytesWritten):" <<socket->errorString();
                stopClient();
                return returnValue;
            }
        }
        else
        {
            qDebug() << "storeFileOnCard Error(write):" <<socket->errorString();
            stopClient();
            return returnValue;
        }

        QByteArray requestData = socket->read(socket->bytesAvailable());

        qDebug()<< QTime::currentTime() <<" Response:" << requestData ;

        QList<int>  statusCodes;
        QList<QByteArray> messages;
        int finalStatusCode;
        parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

        if(finalStatusCode == FILE_STATUS_OK)
        {
            finalStatusCode = 0 ;

            // 2. Write file

            qDebug() << "\n\n SIZE :" << data.size() << "\n\n" ;
            if(writeToDevice(data))
            {
                waitForReadReady(3000);
                requestData = socket->read(socket->bytesAvailable());

                qDebug()<< QTime::currentTime() << "Response 2:" << requestData ;

                statusCodes.erase(statusCodes.begin(), statusCodes.end());
                messages.erase(messages.begin(), messages.end());
                parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

                if(finalStatusCode == FILE_ACTION_SUCCESS)
                {
                    // 3. send SFRT

                    QDateTime time = QDateTime::currentDateTime();
                    QString sTime = time.toString("yyyyMMddhhmmss");

                    QByteArray srftResponseData = sendCommand("SRFT", sTime+ " " + onCardPath + fileName);

                    if(srftResponseData.isEmpty()==true)
                    {
                        qDebug() << QTime::currentTime()<<"SRFT response data is empty .... so waiting here for 30 more seconds ";
                        waitForReadReady(30000);
                        srftResponseData = socket->read(socket->bytesAvailable());
                        qDebug() << QTime::currentTime()<< "srftResponseData:" << srftResponseData ;

                    }

                    if((srftResponseData.isEmpty() == false)&&(srftResponseData.contains(QString(onCardPath + QString(fileName)).toLatin1())))
                    {
                        returnValue = true ;
                    }
                }
                else
                {
                    QString errorString = QString("STOR command failed.");
                    if(finalStatusCode == 0)
                    {
                        if(socket->error())
                        {
                            errorString += "Error :" + socket->errorString();
                        }

                    }
                    else
                    {
                        errorString += "Error :" + QString::number(finalStatusCode);
                    }

                    QMessageBox::critical(NULL, "Error " , "STOR command failed. Error code: "+ QString::number(finalStatusCode ));

                }
            }
            else
            {
                QMessageBox::critical(NULL, "Error " , "STOR command failed. Error: "+ socket->errorString());

            }

        }
        else
        {
            if(finalStatusCode)
            {
                QMessageBox::critical(NULL, "Error " , "STOR command failed. Error code: "+ QString::number(finalStatusCode ));
            }
            else
            {
                QMessageBox::critical(NULL, "Error " , "STOR command failed. ");

            }
        }

    }
    else
    {
        qDebug()<<"Error ; Device is not open ... Can not store file on card.";
    }

    stopClient();
    return returnValue;

}


bool BluetoothDevice::writeToDevice(QByteArray data)
{
    bool writeOperationSuccessful = true ;
    int size = data.size() ;
    int startIndex = 0;
    int errC = 0 ;

    /*
    QFile file("/Users/markbennett/Downloads/test.kdbx");
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
    return true;
    */


    while(size>0)
    {
        if(size>(PACKET_SIZE))
        {
            short packetSize = PACKET_SIZE + 5;
            QByteArray dataPacket = QByteArray(packetSize , 0);
            // Create Data Packet
            dataPacket[0] = static_cast<char>(DATA_CHANNEL & 0xff);
            dataPacket[1] = static_cast<char> (packetSize >> 8);
            dataPacket[2] = static_cast<char> (packetSize & 0xff);
            // Add data
            for (int i = 0; i < (PACKET_SIZE ); i++) {
                dataPacket[i+3] = data[i+startIndex];
            }
            // Add checksum
            dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
            dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

            // Don't write to the socket if it's not valid and open
            if (socket && socket->isOpen()) {
                errC = socket->write(dataPacket , packetSize);
            } else {
                errC = -1;
            }

            if(errC != packetSize)
            {
                writeOperationSuccessful = false ;
                qDebug()<< "Error " , "Write operation failed." + socket->errorString();
                return writeOperationSuccessful ;
            }

            size= size-PACKET_SIZE  ;
            startIndex = startIndex + PACKET_SIZE ;
        }
        else
        {
            short packetSize = size + CHECKSUM_SIZE + HEADER_SIZE;
            QByteArray dataPacket = QByteArray(packetSize, 0);


            dataPacket[0] = static_cast<char>(DATA_CHANNEL & 0xff);
            dataPacket[1] = static_cast<char> (packetSize >> 8);
            dataPacket[2] = static_cast<char> (packetSize & 0xff);
            // Add data
            for (int i = 0; i <  size ; i++) {
                dataPacket[i + 3] = data[i+startIndex];
            }
            // Add checksum
            dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
            dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

            // Don't write to the socket if it's not valid and open
            if (socket && socket->isOpen()) {
                errC = socket->write(dataPacket , packetSize);
            } else {
                errC = -1;
            }

            if(errC != packetSize)
            {
                writeOperationSuccessful = false ;
                qDebug()<< "Error " , "Write operation failed." + socket->errorString();
                return writeOperationSuccessful ;
            }
            size = 0 ;
         }
        if (!waitForBytesWritten(UPLOAD_DELAY_MILLIS))
        {
            writeOperationSuccessful = false ;
            qDebug()<< "Error " , "Write operation failed." + socket->errorString();
            return writeOperationSuccessful ;
        }
        qDebug() << QTime::currentTime() << " : " << errC << " bytes of data written to card" ;
        QThread::msleep(100); // -- Sleep Copied from the Java Uitlity so we don't overrun the card's buffer
    }
    return writeOperationSuccessful ;
}

QByteArray BluetoothDevice::readFileFromCard( QString fileFullPathOnCard)
{
    if((socket == 0) || socket->isOpen() == false)
    {
        connectDevice();
    }

    QByteArray fileData;
    QByteArray filteredFileData ;

    // 1. Send RETR Command first

    QByteArray response ;
    QString cmd = QString(QString(RETR) +" " +fileFullPathOnCard + "\r\n");

    qDebug()<< QTime::currentTime() << " : " <<  cmd << "\n";

    QByteArray cmdBytes = cmd.toUtf8() ;
    QByteArray dataPacket = QByteArray(cmdBytes.size()+ HEADER_SIZE + CHECKSUM_SIZE, 0);

    short packetSize = static_cast<short>(cmdBytes.size() +HEADER_SIZE + CHECKSUM_SIZE);

    dataPacket[0] = static_cast<char>(COMMAND_CHANNEL & 0xff);
    dataPacket[1] = static_cast<char>(packetSize >> 8);
    dataPacket[2] = static_cast<char>(packetSize & 0xff);
    // Add data
    for (int i = 0; i < cmdBytes.size(); i++) {
        dataPacket[i + 3] = cmdBytes[i];
    }
    // Add checksum
    dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
    dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

    socket->write(dataPacket, dataPacket.size());
    waitForBytesWritten(UPLOAD_DELAY_MILLIS);
    waitForReadReady(UPLOAD_DELAY_MILLIS);

    QByteArray requestData = socket->read(socket->bytesAvailable());

    qDebug()<< QTime::currentTime() << " : "<< "Response:" << requestData ;

    // Check if response is more than one line

    QList<int>  statusCodes;
    QList<QByteArray> messages;
    int finalStatusCode;
    parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

    if(finalStatusCode == FILE_STATUS_OK)
    {


    // 2. Write file
       waitForReadReady(UPLOAD_DELAY_MILLIS*10);

       while(waitForReadReady(UPLOAD_DELAY_MILLIS))
       {
           QByteArray reqDataFromFile = socket->read(socket->bytesAvailable());
           fileData += reqDataFromFile;
       }


       qDebug() << fileData ;

       finalStatusCode = 0 ;
       filteredFileData = dePacketizeStream(fileData , &finalStatusCode);
       // TODO : chweck for macros
      /* if((finalStatusCode != FILE_ACTION_SUCCESS)||(finalStatusCode != 0))
       {
           QMessageBox::critical(NULL, "Error " , "RETR command failed. Error code: "+ QString::number(finalStatusCode ));

       }*/
    }
    else
    {
        QMessageBox::critical(NULL, "Error " , "RETR command failed. Error code: "+ QString::number(finalStatusCode ));

    }


    stopClient();
    return filteredFileData ;
}

void BluetoothDevice::listMemoryInfo(QString path)
{
    if((socket == 0) || socket->isOpen() == false)
    {
        connectDevice();
    }

    QByteArray response = sendCommand(MLST ,  path);

    if(response.isEmpty() == false)
    {
        QList<int>  statusCodes;
        QList<QByteArray> messages;
        int finalStatusCode;
        parseResponse(response, &statusCodes , &messages , &finalStatusCode);

        if((finalStatusCode != FILE_ACTION_SUCCESS)&&(finalStatusCode != 0))
        {
            QMessageBox::critical(NULL, "Error " , "MLIST command failed. Error code: "+ QString::number(finalStatusCode ));

        }
    }
    else
    {
        if(socket->error() !=0)
        {
            qDebug()<<  socket->errorString();
        }
    }


     stopClient();
}

// This function checks if  file exists on  specified path on card.
// It returns true - if it exists. Otherwise it returns false.

bool BluetoothDevice::checkIfFileExists(QString path, QString fileName)
{
    if((socket == 0) || socket->isOpen() == false)
    {
        connectDevice();
    }

    bool fileExists = false ;
    QByteArray response = sendCommand(QString(LIST) , path);

    if(response.isEmpty() == false)
    {
        QList<int>  statusCodes;
        QList<QByteArray> messages;
        int finalStatusCode;

        parseResponse(response, &statusCodes , &messages , &finalStatusCode);

        if(finalStatusCode == FILE_ACTION_SUCCESS)
        {
            for(int i = 0 ; i < messages.length() ; i ++)
            {
                QString responseString(messages[i]);
                if(responseString.contains(fileName) == true)
                {
                    fileExists = true ;
                }
            }
        }
        else
        {
            if(finalStatusCode != PATH_NOT_FOUND)
            {
                QMessageBox::critical(NULL, "Error " , "LIST command failed. Error code: "+ QString::number(finalStatusCode ));

            }
         }

    }
    else
    {
        if(socket && (socket->error() !=0))
        {
            qDebug()<<  socket->errorString();
        }
    }


    stopClient();
    return fileExists;
}

bool BluetoothDevice::isBluetoothOn()
{
    QBluetoothLocalDevice localDevice ;

    if(localDevice.isValid() && ( localDevice.hostMode() != QBluetoothLocalDevice::HostPoweredOff))
    {
        return true ;
    }

    return false ;
}

bool BluetoothDevice::isCardPaired()
{
    BluetoothDeviceMac btDeviceMac ;

    if(btDeviceMac.ifCybergateCardIsPaired())
        return true ;

    return false ;
}

void BluetoothDevice::startClient()
{
    BluetoothDeviceMac btDeviceMac ;

    // Kill the connection if we're already connected for some reason (shouldn't happen)
    if (socket) {
        qDebug() << "startClient: killing stale socket!";
        stopClient();
    }

    // Connect to service
    sppConnected = false;
    timeout = false;
    dataTimeout = false;
    readReady = false;

    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);

    if (socket) {

        connect(socket, SIGNAL(readyRead()), this, SLOT(readSocket()));
        connect(socket, SIGNAL(connected()), this, SLOT(connected()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

        qDebug() << "Create socket";
        qDebug() <<  "  Mac address: " + btDeviceMac.cybergateMacAddress();
        qDebug() <<  "  SPP_UUID: " + QString(SPP_UUID);
        socket->connectToService(QBluetoothAddress(btDeviceMac.cybergateMacAddress()), QBluetoothUuid(QString(SPP_UUID)));
        qDebug() << "ConnectToService request initiated";

    } else {
        qDebug() << "Failed to create socket";
    }

}

void BluetoothDevice::stopClient()
{

    if (socket) {
        
        socket->close();
        disconnect(socket, SIGNAL(readyRead()), this, SLOT(readSocket()));
        disconnect(socket, SIGNAL(connected()), this, SLOT(connected()));
        disconnect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
        delete socket;
        socket = 0;
    }

    sppConnected = false;
    timeout = false;
    dataTimeout = false;
    readReady = false;

}

void BluetoothDevice::connected()
{
    qDebug() << "Connection established!";
    sppConnected = true;
    Q_EMIT stopWaiting();
}

void BluetoothDevice::disconnected()
{
    qDebug() << "Disconnected!";

    sppConnected = false;
}

void BluetoothDevice::readSocket()
{
    if (!socket)
        return;

    readReady = true;
}
