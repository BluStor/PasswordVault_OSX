

#include <Foundation/Foundation.h>
#include <IOBluetooth/IOBluetooth.h>
#include "bluetoothdevicemac.h"

bool BluetoothDeviceMac::ifCybergateCardIsPaired()
{

    IOBluetoothDevice *device;
    NSArray *devices = [IOBluetoothDevice pairedDevices];
    NSEnumerator *e = [devices objectEnumerator];

    while (device = [e nextObject])
    {
        NSString *deviceName = [device name];
        if( deviceName &&  ([deviceName isEqualToString:@"CYBERGATE" ]))
        {
            return true ;
        }
    }
    return false ;
 }


QString BluetoothDeviceMac::cybergateMacAddress()
{

    IOBluetoothDevice *device;
    NSArray *devices = [IOBluetoothDevice pairedDevices];
    NSEnumerator *e = [devices objectEnumerator];

    while (device = [e nextObject])
    {
        NSString *deviceName = [device name];
        if( deviceName &&  ([deviceName isEqualToString:@"CYBERGATE" ]))
        {
            NSString *address = [device addressString];
            return QString::fromNSString(address).replace("-",":");
        }
    }

    return "";
 }

