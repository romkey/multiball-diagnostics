#pragma once

#include "config.h"

#include "sensor.h"

#ifdef BLE_MODULE

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEScan.h>
#include <BLEAdvertisedDevice.h>

class BLE_Sensor : public Sensor {
 public:
  BLE_Sensor(uint16_t update_frequency, uint16_t accuracy, uint16_t precision, boolean calibrated) : Sensor(update_frequency, accuracy, precision, calibrated) {};

  void begin();
  void handle();

  uint32_t count() { return _count; };
  BLEAdvertisedDevice *get(uint32_t index);

 private:
  BLEScan* _pBLEScan;
  uint32_t _count;
};

#endif
