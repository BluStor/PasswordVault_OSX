
#include <QDebug>
#include <QThread>
#include <QTime>
#include <QDateTime>
#include <QFile>
#include <QByteArrayMatcher>

#include "BluetoothDevice.h"
#include "gui/MessageBox.h"

BluetoothDevice* BluetoothDevice::m_instance(nullptr);

BluetoothDevice::BluetoothDevice(QObject* parent)
    : QObject(parent)
{
}

BluetoothDevice::~BluetoothDevice()
{
    // Close port if its still open
    if(m_serialPort->isOpen())
    {

        m_serialPort->close();
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

// Opens connection to device
void BluetoothDevice::connectDevice()
{
    // Open serial port to device
    m_serialPort = new QSerialPort( DEVICE_PORT_NAME_MACRO );

    if ((m_serialPort->isOpen() == false)&& m_serialPort->open( QSerialPort::ReadWrite ) )
    {
        // Set Parameters for device
        if ( m_serialPort->setBaudRate( QSerialPort::Baud115200 ) &&
             m_serialPort->setStopBits( QSerialPort::OneStop ) &&
             m_serialPort->setParity( QSerialPort::NoParity ) &&
             m_serialPort->setFlowControl(QSerialPort::NoFlowControl ) &&
             m_serialPort->setDataBits( QSerialPort::Data8 ) )
        {
            qDebug()<<"Parameters set successfully!";
        }
        else
        {
            qDebug()<<  m_serialPort->errorString();
            QMessageBox::critical(NULL, "Error: Set serial port parameters failed.", m_serialPort->errorString());
            m_serialPort->clearError();
        }
    }
    else
    {
        qDebug()<<  m_serialPort->errorString();
        QMessageBox::critical(NULL, "Error: Open port failed.", m_serialPort->errorString());
        m_serialPort->clearError();
    }
}

void BluetoothDevice::disconnectDevice()
{
    // Close port if its still opern
    if(m_serialPort->isOpen())
    {
        m_serialPort->close();
    }
}


QString BluetoothDevice::getErrorMessage()
{
    QString errorMessage = m_serialPort->errorString();
    qDebug()<< "Error:" << errorMessage ;
    return errorMessage ;
}

int BluetoothDevice::getSerialPortError()
{
    int errorNum = m_serialPort->error();
    qDebug()<< "Error:" << errorNum ;
    return errorNum ;
}


void BluetoothDevice::reportSerialPortError()
{
    if(m_serialPort->error() !=0)
    {
        qDebug()<<  m_serialPort->errorString();
        QMessageBox::critical(NULL, "Error:", m_serialPort->errorString());
    }
}

// Send command to card and read reposne.
// cmdParams - all parameters to command - delimeted by space
QByteArray BluetoothDevice::sendCommand(QString cmdName , QString cmdParams)
{
    QByteArray response ;
    QString cmd = QString(cmdName + " " + cmdParams + "\r\n");
    QByteArray cmdByteArray = cmd.toUtf8() ;

    if(m_serialPort->isOpen())
    {
        //create data packet for sending command to device
        QByteArray dataPacket = createDataPacket(cmdByteArray , COMMAND_CHANNEL);

        qDebug()<< cmd << "\n";
        m_serialPort->write(dataPacket, dataPacket.size());
        m_serialPort->waitForBytesWritten(UPLOAD_DELAY_MILLIS);
        while (m_serialPort->waitForReadyRead(UPLOAD_DELAY_MILLIS) )
        {
            QByteArray responseData =  m_serialPort->readAll();
            response += responseData ;
        }
         qDebug()<<"Response:" << response ;
    }
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
        int msgType = *(char*)(response.data() + oldIndex);
        int size_msb = *(char*)(response.data() + oldIndex + 1);
        int size_lsb = *(char*)(response.data() + oldIndex + 2);
        int size =(size_msb << 8 | size_lsb)-5;

        QByteArray listItem = QByteArray(response.data() + oldIndex + 3, size);
        QByteArray message ;
        int statusCode =0;
        if(msgType != 2)
        {
            int splitIndex = listItem.indexOf(" ");
            QByteArray status = QByteArray(listItem , splitIndex);
            message = QByteArray(listItem.data() + splitIndex+1 , listItem.size()-status.size()-1);
            statusCode = status.toInt();
            //index = response.indexOf(pattern, index +1);
            index = baMatcher.indexIn(response, index +1 );
            oldIndex = index + 4;
        }
        else
        {
            message = listItem;
            //index = response.indexOf(pattern, oldIndex +1);
            index = baMatcher.indexIn(response, oldIndex +1 );

            oldIndex = index + 4;
        }
        statusCodes->append(statusCode);
        messages->append(message);
        qDebug() << message ;
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
    short dataPacketSize = data.size() + HEADER_SIZE + CHECKSUM_SIZE;  // 3 bytes for header + 2 for checksum
    QByteArray dataPacket(dataPacketSize,0);

    // Header
    dataPacket[0] = (char)(dataChannel & 0xff);
    dataPacket[1] = (char) (dataPacketSize >> 8);
    dataPacket[2] = (char) (dataPacketSize & 0xff);
    // Add data
    for (int i = 0; i < data.size(); i++) {
        dataPacket[i + 3] = data[i];
    }
    // Add checksum
    dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
    dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

    return dataPacket ;
}

// Removes header and checksum from the data received from the card.
QByteArray BluetoothDevice::dePacketizeStream(QByteArray inputStream)
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
            int packetSize = (int) packetSizeMSB << 8;
            packetSize += (int) packetSizeLSB & 0xFF;

            outputStream += QByteArray( inputStream.data() + oldIndex + 3, packetSize-5) ;
            oldIndex = oldIndex + packetSize ;
        }
        else
        {
            // TODO - get final result
            break ;
        }
    }

    return outputStream ;

}

void BluetoothDevice::deleteFile(QString path)
{
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
        if(m_serialPort->error() !=0)
        {
            qDebug()<<  m_serialPort->errorString();
        }
    }
}

// this function creates a file 'fileName' having 'data' content at path 'onCardPath'
void BluetoothDevice::storeFileOnCard(QString onCardPath, QString fileName, QByteArray data)
{
    // 1. Send Store Command first
    QByteArray response ;
    QString cmd = QString("STOR " + onCardPath + fileName + "\r\n");

    qDebug()<< cmd << "\n";

    QByteArray cmdBytes = cmd.toUtf8() ;
    QByteArray dataPacket = QByteArray(cmdBytes.size()+ 5, 0);
    short packetSize = (short)cmdBytes.size() +5;
    // Add header
    dataPacket[0] = (char)(COMMAND_CHANNEL & 0xff);
    dataPacket[1] = (char) (packetSize >> 8);
    dataPacket[2] = (char) (packetSize & 0xff);
    // Add data
    for (int i = 0; i < cmdBytes.size(); i++) {
        dataPacket[i + 3] = cmdBytes[i];
    }
    // Add checksum
    dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
    dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;
    m_serialPort->write(dataPacket, dataPacket.size());

    m_serialPort->waitForBytesWritten(UPLOAD_DELAY_MILLIS);
    m_serialPort->waitForReadyRead(UPLOAD_DELAY_MILLIS) ;

    QByteArray requestData = m_serialPort->readAll();

    qDebug()<<"Response:" << requestData ;

    QList<int>  statusCodes;
    QList<QByteArray> messages;
    int finalStatusCode;
    parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

    if(finalStatusCode == FILE_STATUS_OK)
    {
        data.append("\r\n");

        // 2. Write file

        qDebug() << "\n\n SIZE :" << data.size() << "\n\n" ;
        writeToDevice(data);

        m_serialPort->waitForReadyRead(30000) ;
        requestData = m_serialPort->readAll();

        qDebug()<<"Response 2:" << requestData ;

        finalStatusCode = 0 ;
        statusCodes.erase(statusCodes.begin(), statusCodes.end());
        messages.erase(messages.begin(), messages.end());
        parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

        if(finalStatusCode == FILE_ACTION_SUCCESS)
        {
            // 3. send SFRT

            QDateTime time = QDateTime::currentDateTime();
            QString sTime = time.toString("yyyyMMddhhmmss");

            QByteArray srftResponseData = sendCommand("SRFT", sTime+ " " + "/data/" + fileName);

            if(srftResponseData.isEmpty()==false)
            {

            }
            else
            {
                m_serialPort->waitForReadyRead(30000) ;
                srftResponseData = m_serialPort->readAll();
            }
        }
        else
        {
            if(m_serialPort->error())
            {

            }
            else
            {


            }

        }
    }
    else
    {
        QMessageBox::critical(NULL, "Error " , "STOR command failed. Error code: "+ QString::number(finalStatusCode ));

    }

}


void BluetoothDevice::writeToDevice(QByteArray data)
{
    int size = data.size() ;
    int startIndex = 0;
    while(size>0)
    {
        if(size>(PACKET_SIZE))
        {
             short packetSize = PACKET_SIZE + 5;
             QByteArray dataPacket = QByteArray(packetSize , 0);
             // Create Data Packet
             dataPacket[0] = (char)(DATA_CHANNEL & 0xff);
             dataPacket[1] = (char) (packetSize >> 8);
             dataPacket[2] = (char) (packetSize & 0xff);
             // Add data
             for (int i = 0; i < (PACKET_SIZE ); i++) {
                 dataPacket[i+3] = data[i+startIndex];
             }
             // Add checksum
             dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
             dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;

             int errC = m_serialPort->write(dataPacket , packetSize);

             size= size-PACKET_SIZE  ;
             startIndex = startIndex + PACKET_SIZE ;
        }
        else
        {
            QByteArray dataPacket = QByteArray(size + 5, 0);
            short packetSize = size +5;

            dataPacket[0] = (char)(DATA_CHANNEL & 0xff);
            dataPacket[1] = (char) (packetSize >> 8);
            dataPacket[2] = (char) (packetSize & 0xff);
            // Add data
            for (int i = 0; i <  size ; i++) {
                dataPacket[i + 3] = data[i+startIndex];
            }
            // Add checksum
            dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
            dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;
            int errC = m_serialPort->write(dataPacket , size+5);
             size = 0 ;
         }
        m_serialPort->waitForBytesWritten(33000);
        QThread::msleep(100);
    }
}

QByteArray BluetoothDevice::readFileFromCard( QString fileFullPathOnCard)
{

    QByteArray fileData;
    QByteArray filteredFileData ;
    // 1. Send Store Command first

    QByteArray response ;
    QString cmd = QString(QString(RETR) +" " +fileFullPathOnCard + "\r\n");

    qDebug()<< cmd << "\n";

    QByteArray cmdBytes = cmd.toUtf8() ;
    QByteArray dataPacket = QByteArray(cmdBytes.size()+ 5, 0);

    short packetSize = (short)cmdBytes.size() +5;

    dataPacket[0] = (char)(COMMAND_CHANNEL & 0xff);
    dataPacket[1] = (char) (packetSize >> 8);
    dataPacket[2] = (char) (packetSize & 0xff);
    // Add data
    for (int i = 0; i < cmdBytes.size(); i++) {
        dataPacket[i + 3] = cmdBytes[i];
    }
    // Add checksum
    dataPacket[dataPacket.size() - 2] = MOST_SIGNIFICANT_BIT;
    dataPacket[dataPacket.size() - 1] = LEAST_SIGNIFICANT_BIT;
    m_serialPort->write(dataPacket, dataPacket.size());
    m_serialPort->waitForBytesWritten(UPLOAD_DELAY_MILLIS);

    m_serialPort->waitForReadyRead(UPLOAD_DELAY_MILLIS) ;

    QByteArray requestData = m_serialPort->readAll();

    qDebug()<<"Response:" << requestData ;

    QList<int>  statusCodes;
    QList<QByteArray> messages;
    int finalStatusCode;
    parseResponse(requestData, &statusCodes , &messages , &finalStatusCode);

    if(finalStatusCode == FILE_STATUS_OK)
    {

    // 2. Write file

       while(m_serialPort->waitForReadyRead(UPLOAD_DELAY_MILLIS))
       {
           QByteArray reqDataFromFile =  m_serialPort->readAll();
           fileData += reqDataFromFile;
       }

           filteredFileData = dePacketizeStream(fileData);
    }
    else
    {
        QMessageBox::critical(NULL, "Error " , "RETR command failed. Error code: "+ QString::number(finalStatusCode ));

    }

    return filteredFileData ;
}

void BluetoothDevice::listMemoryInfo(QString path)
{
    QByteArray response = sendCommand(MLST ,  path);

    if(response.isEmpty() == false)
    {
        QList<int>  statusCodes;
        QList<QByteArray> messages;
        int finalStatusCode;
        parseResponse(response, &statusCodes , &messages , &finalStatusCode);

        if((finalStatusCode != FILE_ACTION_SUCCESS)||(finalStatusCode != 0))
        {
            QMessageBox::critical(NULL, "Error " , "MLIST command failed. Error code: "+ QString::number(finalStatusCode ));

        }
    }
    else
    {
        if(m_serialPort->error() !=0)
        {
            qDebug()<<  m_serialPort->errorString();
        }
    }

}



// This function checks if  file exists on  specified path on card.
// It returns true - if it exists. Otherwise it returns false.

bool BluetoothDevice::checkIfFileExists(QString path, QString fileName)
{
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
            QString responseString(response);
            if(responseString.contains(fileName) == true)
            {
                fileExists = true ;
            }
        }
        else
        {
            if(finalStatusCode)
            {
                QMessageBox::critical(NULL, "Error " , "LIST command failed. Error code: "+ QString::number(finalStatusCode ));

            }
         }

    }
    else
    {
        if(m_serialPort->error() !=0)
        {
            qDebug()<<  m_serialPort->errorString();
        }
    }

    return fileExists;
}

