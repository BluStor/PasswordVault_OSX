#ifndef BLUETOOTHDEVICE_H
#define BLUETOOTHDEVICE_H

#include <QObject>
#include <QString>
#include <QSerialPort>

#include <qbluetoothlocaldevice.h>

#define DEVICE_PORT_NAME_MACRO "cu.CYBERGATE-SerialPortSer"
#define CURRENT_DATA_DIRECTORY "/passwordvault/"
#define DB_FILE_NAME "db.kdbx"
#define DB_FILE_DIR       "/passwordvault/"

#define  PACKET_SIZE        512
#define  HEADER_SIZE        3
#define  CHECKSUM_SIZE      2
#define  COMMAND_CHANNEL    1
#define  DATA_CHANNEL       2



#define  MOST_SIGNIFICANT_BIT  0x00
#define  LEAST_SIGNIFICANT_BIT  0x00
#define  UPLOAD_DELAY_MILLIS    1000

#define  MKD    "MKD"
#define  LIST   "LIST"
#define  RETR   "RETR"
#define  MLST   "MLST"
#define  DELE   "DELE"


// STATUS CODES
// LIST FILE
#define FILE_ACTION_SUCCESS   226
#define PATH_NOT_FOUND      550
#define UNAUTHENTICATED     530
#define DELETE_ACTION_SUCCESS   250
#define FILE_STATUS_OK      150

 class BluetoothDevice : public QObject
{
    Q_OBJECT
public:
    ~BluetoothDevice();
    static BluetoothDevice* instance();
    bool connectDevice();
    void disconnectDevice();
    QByteArray sendCommand(QString cmdName , QString cmdParams);
    void readResponse();
    void writeData(QByteArray data);
    void readData(QByteArray* data);
    void createFolder(QString path);
    bool checkIfFileExists(QString path, QString fileName);
    QByteArray createDataPacket(QByteArray data , int dataChannel);
    QString getErrorMessage();
    int getSerialPortError();
     void parseResponse(QByteArray response, QList<int> * statusCodes , QList<QByteArray>* messages , int* finalStatusCode);
     QByteArray dePacketizeStream(QByteArray inputStream , int* pFinalStatusCode);
     bool storeFileOnCard(QString onCardPath, QString fileName, QByteArray data);
     QByteArray readFileFromCard(QString fileName);
     void listMemoryInfo(QString path);
     void deleteFile(QString path);
     bool writeToDevice(QByteArray data) ;
     bool isBluetoothOn();
     bool isCardPaired();
private Q_SLOTS:
    void reportSerialPortError();
   // void handleReadyRead();
private:
    Q_DISABLE_COPY(BluetoothDevice)
    BluetoothDevice(const QString& portName, QObject* parent);
    explicit BluetoothDevice(QObject* parent);
    static BluetoothDevice* m_instance;
    QString m_fileName ;
    QSerialPort* m_serialPort;

};

inline BluetoothDevice* btDevice() {
    return BluetoothDevice::instance();
}
#endif // BLUETOOTHDEVICE_H
