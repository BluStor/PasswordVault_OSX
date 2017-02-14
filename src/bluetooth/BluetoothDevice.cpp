
#include <QDebug>
#include <QThread>
#include <QTime>
#include <QDateTime>
#include <QFile>

#include "BluetoothDevice.h"
#include "gui/MessageBox.h"

BluetoothDevice* BluetoothDevice::m_instance(nullptr);

BluetoothDevice::BluetoothDevice(QObject* parent)
    : QObject(parent)
{
}

BluetoothDevice::~BluetoothDevice()
{
    // Close port if its still opern
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

void BluetoothDevice::connectDevice()
{

    m_serialPort = new QSerialPort( DEVICE_PORT_NAME_MACRO );
    m_serialPort->clearError();

    if ( m_serialPort->open( QSerialPort::ReadWrite ) )
    {
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
            QMessageBox::critical(NULL, "Error", m_serialPort->errorString());
            m_serialPort->clearError();
        }
    }
    else
    {
        qDebug()<<  m_serialPort->errorString();
        QMessageBox::critical(NULL, "Error", m_serialPort->errorString());
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
    }
}

bool BluetoothDevice::checkifFileExists(QString path, QString fileName)
{
    bool fileExists = false ;
    QByteArray response = sendCommand(QString(LIST) , path);

    if(response.isEmpty() == false)
    {
        QList<int>  statusCodes;
        QList<QString> messages;
        int finalStatusCode;
        parseResponse(response, &statusCodes , &messages , &finalStatusCode);

        if(finalStatusCode == LIST_FILE_SUCCESS)
        {
            QString responseString(response);
            if(responseString.contains(fileName) == true)
            {
                fileExists = true ;
            }
        }
        else
        {
            QMessageBox::critical(NULL, "Error " , "LIST command failed. Error code: "+ QString::number(finalStatusCode ));
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

void BluetoothDevice::parseResponse(QByteArray response, QList<int> * statusCodes , QList<QString>* messages , int* finalStatusCode)
{
    QByteArray pattern("\r\n\x00\x00");
    QByteArrayList list;
    //qDebug()<< "Index : " << response.size()<< response.indexOf(pattern)<< endl;
    int index = -1;
    int oldIndex = 0;
    int lastIndex = response.lastIndexOf(pattern);
    do
    {
        index = response.indexOf(pattern, index +1);


        int msgType = *(char*)(response.data() + oldIndex);
        int size_msb = *(char*)(response.data() + oldIndex + 1);
        int size_lsb = *(char*)(response.data() + oldIndex + 2);
        int size =(size_msb << 8 | size_lsb)-7;

        QByteArray listItem = QByteArray(response.data() + oldIndex + 3, size);
        QByteArray message ;
        int statusCode =0;
        if(msgType != 2)
        {
            int splitIndex = listItem.indexOf(" ");
            QByteArray status = QByteArray(listItem , splitIndex);
            message = QByteArray(listItem.data() + splitIndex+1 , listItem.size()-status.size()-1);
            statusCode = status.toInt();

        }
        else
        {
            message = listItem;

        }
        statusCodes->append(statusCode);
        messages->append(message);
        if(index == lastIndex)
        {
            *finalStatusCode = statusCode;
            break;

        }
        oldIndex = index + 4;

    }while(1);
}

QByteArray BluetoothDevice::createDataPacket(QByteArray data , int dataChannel)
{
    short dataPacketSize = data.size() + 5;  // 3 bytes for header + 2 for checksum
    QByteArray dataPacket(dataPacketSize,0);

    // First byte : Command channel
    // Second and third bbytes : Size
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

QByteArray BluetoothDevice::sendCommand(QString cmdName , QString cmdParams)
{

    QByteArray response ;
    QString cmd = QString(cmdName + " " + cmdParams + "\r\n");
    QByteArray cmdByteArray = cmd.toUtf8() ;
    QByteArray dataPacket = createDataPacket(cmdByteArray , COMMAND_CHANNEL);

    if(m_serialPort->isOpen())
    {
        m_serialPort->write(dataPacket, dataPacket.size());
        m_serialPort->waitForBytesWritten(UPLOAD_DELAY_MILLIS);

        // QThread::sleep(5);
        qDebug()<< cmd << "\n";

        while (m_serialPort->waitForReadyRead(UPLOAD_DELAY_MILLIS) )
        {
            QByteArray responseData =  m_serialPort->readAll();
            response += responseData ;
            if(response.isEmpty() == false)
                qDebug()<<"Response:" << responseData ;
        }
    }
    return response ;
}



