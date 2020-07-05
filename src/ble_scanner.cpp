#include "config.h"

#ifdef BLE_MODULE

#include "ble_scanner.h"

class MyAdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
    void onResult(BLEAdvertisedDevice advertisedDevice) {
      Serial.printf("Advertised Device: %s \n", advertisedDevice.toString().c_str());
    }
};

void BLE_Sensor::begin() {
  BLEDevice::init("");

  _pBLEScan = BLEDevice::getScan(); //create new scan
  _pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks());
  _pBLEScan->setActiveScan(true); //active scan uses more power, but get results faster
  _pBLEScan->setInterval(100);
  _pBLEScan->setWindow(99);
}

void BLE_Sensor::handle() {
  BLEScanResults foundDevices = _pBLEScan->start(5, false);
  
  Serial.println(foundDevices.getCount());
  Serial.println("Scan done!");
  _pBLEScan->clearResults();
}

#endif
