#ifndef BLUETOOTHDEVICEMAC_H
#define BLUETOOTHDEVICEMAC_H
#include <QString>


class BluetoothDeviceMac
{
public:
    bool ifCybergateCardIsPaired();
    QString cybergateMacAddress();
};

#endif // BLUETOOTHDEVICEMAC_H
