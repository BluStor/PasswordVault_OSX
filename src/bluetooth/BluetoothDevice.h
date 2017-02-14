#ifndef BLUETOOTHDEVICE_H
#define BLUETOOTHDEVICE_H

#include <QObject>
#include <QString>
#include <QSerialPort>

#define DEVICE_PORT_NAME_MACRO "cu.CYBERGATE-SerialPortSer"
#define CURRENT_DATA_DIRECTORY "/apps/vault/data/"
#define DB_FILE_NAME "db.kdbx"
#define DB_FILE_DIR       "/data/"

#define  PACKET_SIZE        507
#define  COMMAND_CHANNEL    1
#define  DATA_CHANNEL       2
#define  MAX_CHANNEL_NUMBER 2


#define  MOST_SIGNIFICANT_BIT  0x00
#define  LEAST_SIGNIFICANT_BIT  0x00
#define  UPLOAD_DELAY_MILLIS    1000

#define  MKD    "MKD"
#define  LIST    "LIST"


// STATUS CODES
// LIST FILE
#define LIST_FILE_SUCCESS   226
#define PATH_NOT_FOUND      550
#define UNAUTHENTICATED     530

 class BluetoothDevice : public QObject
{
    Q_OBJECT
public:
    ~BluetoothDevice();
    static BluetoothDevice* instance();
    void connectDevice();
    void disconnectDevice();
    QByteArray sendCommand(QString cmdName , QString cmdParams);
    void readResponse();
    void writeData(QByteArray data);
    void readData(QByteArray* data);
    void createFolder(QString path);
    bool checkifFileExists(QString path, QString fileName);
    QByteArray createDataPacket(QByteArray data , int dataChannel);
    QString getErrorMessage();
    int getSerialPortError();
     void parseResponse(QByteArray response, QList<int> * statusCodes , QList<QString>* messages , int* finalStatusCode);
private Q_SLOTS:
    void reportSerialPortError();
   // void handleReadyRead();
private:
    BluetoothDevice(const QString& portName, QObject* parent);
    explicit BluetoothDevice(QObject* parent);
    static BluetoothDevice* m_instance;
    QString m_fileName ;
    Q_DISABLE_COPY(BluetoothDevice)
public:
    QSerialPort* m_serialPort;

};

inline BluetoothDevice* btDevice() {
    return BluetoothDevice::instance();
}
#endif // BLUETOOTHDEVICE_H
