#include "i2c_scanner.h"

/*
 * This file is automatically generated by https://i2cdevices.org/
 *
 * Generated 2022-01-13 04:54:03 +0000
 *
 * It's intended to be used by the ESP diagnostic tool at
 * https://github.com/romkey/ESP-Diagnostic-Tool
 *
 * To update the known device list in the diagnostic tool,
 * generate a new version of this file, copy it to the src
 * directory and rebuild the tool.
 *
 * The MIT License (MIT)
 * Copyright © 2022 John Romkey <romkey@romkey.com>
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the “Software”), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions: The above
 * copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

i2c_device_t i2c_scanner_known_devices[] = {
 { "", "Qwiic EEPROM - 512Kbit - 64KB", (const byte *)"\x57\x55\x54\x51\x56\x52\x53\x50" },
 { "AD5243", "Dual, 256-Position, I2 C-Compatible Digital Potentiometer", (const byte *)"\x2f" },
 { "AD5248", "Dual, 256-Position, I2 C-Compatible Digital Potentiometer", (const byte *)"\x2d\x2e\x2c\x2f" },
 { "AD5251", "Dual 64-Position I2 C Nonvolatile Memory Digital Potentiometers", (const byte *)"\x2d\x2e\x2c\x2f" },
 { "AD5252", "Dual 256-Position I2C Nonvolatile Memory Digital Potentiometers", (const byte *)"\x2d\x2e\x2c\x2f" },
 { "ADS1115", "4-channel 16-bit ADC", (const byte *)"\x4b\x4a\x49\x48" },
 { "ADS7828", "12-Bit, 8-Channel Sampling ANALOG-TO-DIGITAL CONVERTER", (const byte *)"\x4b\x4a\x49\x48" },
 { "ADXL345", "3-axis accelerometer", (const byte *)"\x1d\x53" },
 { "AHT10", "ASAIR Humidity and Temperature sensor", (const byte *)"\x38" },
 { "AK8975", "3-axis magnetometer", (const byte *)"\x0f\x0e\x0c\x0d" },
 { "AM2315", "Humidity/Temp sensor", (const byte *)"\x5c" },
 { "AMG8833", "IR Thermal Camera Breakout", (const byte *)"\x69\x68" },
 { "APDS-9250", "Digital RGB, IR and Ambient Light Sensor", (const byte *)"\x52" },
 { "APDS-9960", "IR/Color/Proximity Sensor", (const byte *)"\x39" },
 { "AS7262", "6-channel visible spectral_ID device with electronic shutter and smart interface", (const byte *)"\x49" },
 { "ATECC508A", "Crypto Element", (const byte *)"\x60" },
 { "ATECC608A", "Microchip CryptoAuthentication™ Device", (const byte *)"\x60" },
 { "BMA150", "Digital triaxial acceleration sensor", (const byte *)"\x38" },
 { "BMA180", "Accelerometer", (const byte *)"\x77" },
 { "BME280", "Temp/Barometric/Humidity", (const byte *)"\x77\x76" },
 { "BME680", "Low power gas, pressure, temperature &amp; humidity sensor", (const byte *)"\x77\x76" },
 { "BME688", "Digital low power gas, pressure, temperature and humidity sensor with AI", (const byte *)"\x77\x76" },
 { "BMP085", "Temp/Barometric", (const byte *)"\x77" },
 { "BMP180", "Temp/Barometric", (const byte *)"\x77" },
 { "BMP280", "Temp/Barometric", (const byte *)"\x77\x76" },
 { "BNO055", "Absolute Orientation Sensor", (const byte *)"\x28\x29" },
 { "CAP1188", "8-channel Capacitive Touch", (const byte *)"\x2b\x2d\x2c\x28\x2a\x29" },
 { "CAT5171", "256‐position I2C Compatible Digital Potentiometer ", (const byte *)"\x2d\x2c" },
 { "CCS811", "Volatile organics (VOC) and equivalent CO2 (eCO2) sensor", (const byte *)"\x5b\x5a" },
 { "Chirp!", "Water sensor", (const byte *)"\x20" },
 { "COM-15093", "SparkFun Qwiic Single Relay", (const byte *)"\x19\x18" },
 { "DRV2605", "Haptic Motor Driver", (const byte *)"\x5a" },
 { "DS1307", "64 x 8 Serial Real-Time Clock", (const byte *)"\x68" },
 { "DS3231", "Extremely Accurate RTC/TCXO/Crystal", (const byte *)"\x68" },
 { "FT6x06", "Capacitive Touch Driver", (const byte *)"\x38" },
 { "FXAS21002", "3-axis gyroscope", (const byte *)"\x21\x20" },
 { "FXOS8700", "6-axis sensor with integrated linear accelerometer and magnetometer", (const byte *)"\x1d\x1f\x1e\x1c" },
 { "HDC1008", "Low Power, High Accuracy Digital Humidity Sensor with Temperature Sensor", (const byte *)"\x43\x42" },
 { "HIH6130", "HumidIcon", (const byte *)"\x27" },
 { "HMC5883", "3-Axis Digital Compass/Magnetometer IC", (const byte *)"\x1e" },
 { "HT16K33", "LED Matrix Driver", (const byte *)"\x73\x75\x72\x71\x77\x70\x76\x74" },
 { "HTS221", "Capacitive digital sensor for relative humidity and temperature", (const byte *)"\x5f" },
 { "HTU21D-F", "Humidity/Temp Sensor", (const byte *)"\x40" },
 { "ICM-20948", " 9-Axis Motion Tracking device", (const byte *)"\x69\x68" },
 { "INA219", "26V Bi-Directional High-Side Current/Power/Voltage Monitor", (const byte *)"\x4e\x43\x41\x46\x47\x4f\x42\x40\x4b\x45\x4d\x4a\x4c\x44\x49\x48" },
 { "INA260", "Precision Digital Current and Power Monitor With Low-Drift, Precision Integrated Shunt", (const byte *)"\x4e\x43\x41\x46\x47\x4f\x42\x40\x4b\x45\x4d\x4a\x4c\x44\x49\x48" },
 { "IS31FL3731", "144-LED Audio Modulated Matrix LED Driver (CharliePlex)", (const byte *)"\x77\x66" },
 { "ISL29125", "Digital Red, Green and Blue Color Light Sensor with IR Blocking Filter", (const byte *)"\x44" },
 { "IST-8310", "Three-axis Magnetometer", (const byte *)"\x0e" },
 { "ITG3200", "Gyro", (const byte *)"\x69\x68" },
 { "L3GD20H", "gyroscope", (const byte *)"\x6b\x6a" },
 { "LIS3DH", "3-axis accelerometer", (const byte *)"\x19\x18" },
 { "LPS22HB", "MEMS nano pressure sensor", (const byte *)"\x2e" },
 { "LSM303", "Triple-axis Accelerometer+Magnetometer (Compass)", (const byte *)"\x19\x1e" },
 { "LSM303", "Triple-axis Accelerometer+Magnetometer (Compass)", (const byte *)"\x18\x1e" },
 { "MA12070P", "Merus Multi level Class D Interated amplifier  ", (const byte *)"\x23\x22\x21\x20" },
 { "MAG3110", "3-Axis Magnetometer", (const byte *)"\x0e" },
 { "MAX30101", "High-Sensitivity Pulse Oximeter and Heart-Rate Sensor for Wearable Health", (const byte *)"\x55" },
 { "MAX3010x", "Pulse &amp; Oximetry sensor", (const byte *)"\x57" },
 { "MAX44009", "Ambient Light Sensor with ADC", (const byte *)"\x4b\x4a" },
 { "MB85RC", "Ferroelectric RAM", (const byte *)"\x57\x55\x54\x51\x56\x52\x53\x50" },
 { "MCP23008", "8-Bit I/O Expander with Serial Interface I2C GPIO expander", (const byte *)"\x24\x26\x23\x22\x27\x25\x21\x20" },
 { "MCP23017", "I2C GPIO expander", (const byte *)"\x24\x26\x23\x22\x27\x25\x21\x20" },
 { "MCP4725A0", "12-bit DAC", (const byte *)"\x61\x60" },
 { "MCP4725A1", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x65\x63\x61\x62\x67\x66\x64\x60" },
 { "MCP4725A2", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x65\x64" },
 { "MCP4725A3", "12-Bit Digital-to-Analog Converter with EEPROM Memory", (const byte *)"\x67\x66" },
 { "MCP7940N", "Battery-Backed I2C Real-Time Clock/Calendar with SRAM", (const byte *)"\x6f" },
 { "MCP9808", "±0.5°C Maximum Accuracy Digital Temperature Sensor", (const byte *)"\x1d\x1f\x1a\x1b\x19\x18\x1e\x1c" },
 { "MLX90614", "IR temperature sensor", (const byte *)"\x5a" },
 { "MLX90640", "Far infrared thermal sensor array (32x24 RES)", (const byte *)"\x33" },
 { "MMA845x", "3-axis, 14-bit/8-bit digital accelerometer", (const byte *)"\x1d\x1c" },
 { "MPL115A2", "Miniature I2C digital barometer, 50 to 115 kPa", (const byte *)"\x60" },
 { "MPL3115A2", "Barometric Pressure", (const byte *)"\x60" },
 { "MPR121", "12-point capacitive touch sensor", (const byte *)"\x5c\x5b\x5a\x5d" },
 { "MPU6050", "Six-Axis (Gyro + Accelerometer) MEMS MotionTracking™ Devices", (const byte *)"\x69\x68" },
 { "MPU-9250", "9-DoF IMU Gyroscope, Accelerometer and Magnetometer", (const byte *)"\x69\x68" },
 { "MS5607", "Barometric Pressure", (const byte *)"\x77\x76" },
 { "MS5611", "Barometric Pressure", (const byte *)"\x77\x76" },
 { "NE5751", "Audio processor for IV communication", (const byte *)"\x41\x40" },
 { "Nunchuck controller", "Nintendo", (const byte *)"\x52" },
 { "PCA1070", "Multistandard programmable analog CMOS speech transmission IC", (const byte *)"\x22" },
 { "PCA9685", "16-channel PWM driver default address", (const byte *)"\x57\x6d\x69\x6e\x55\x73\x4e\x79\x65\x5c\x5b\x75\x54\x72\x71\x63\x77\x43\x51\x56\x61\x41\x46\x47\x4f\x42\x40\x7f\x4b\x62\x45\x6b\x6f\x67\x6c\x70\x66\x64\x7d\x7c\x4d\x6a\x4a\x7b\x4c\x44\x52\x53\x78\x59\x5a\x58\x5d\x7a\x60\x68\x76\x5e\x50\x49\x74\x48\x5f\x7e" },
 { "PCD3311C", "DTMF/modem/musical tone generator", (const byte *)"\x24\x25" },
 { "PCD3312C", "DTMF/modem/musical-tone generator", (const byte *)"\x24\x25" },
 { "PCF8523", "RTC", (const byte *)"\x68" },
 { "PCF8569", "LCD column driver for dot matrix displays ", (const byte *)"\x3b\x3c" },
 { "PCF8573", "Clock/calendar with Power Fail Detector", (const byte *)"\x69\x6b\x6a\x68" },
 { "PCF8574", "Remote 8-Bit I/O Expander", (const byte *)"\x4e\x43\x41\x46\x47\x4f\x42\x40\x4b\x45\x4d\x4a\x4c\x44\x49\x48" },
 { "PCF8574AP", "I²C-bus to parallel port expander", (const byte *)"\x3b\x39\x3c\x38\x3e\x3f\x3a\x3d" },
 { "PCF8577C", "32/64-segment LCD display driver", (const byte *)"\x3a" },
 { "PCF8578", "Row/column LCD dot matrix driver/display ", (const byte *)"\x3c\x3d" },
 { "PMSA003I", "Digital universal partical concentration sensor", (const byte *)"\x12" },
 { "PN532", "NFC/RFID reader", (const byte *)"\x48" },
 { "SAA1064", "4-digit LED driver", (const byte *)"\x3b\x39\x38\x3a" },
 { "SAA2502", "MPEG audio source decoder", (const byte *)"\x30\x31" },
 { "SAA4700", "VPS Dataline Processor", (const byte *)"\x23\x21" },
 { "SAA5243P/E", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/H", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/K", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5243P/L", "Computer controlled teletext circuit ", (const byte *)"\x11" },
 { "SAA5246", "Integrated VIP and teletext", (const byte *)"\x11" },
 { "SAB3035", "Digital tuning circuit for computer-controlled TV ", (const byte *)"\x63\x61\x62\x60" },
 { "SAB3037", "Digital tuning circuit for computer-controlled TV", (const byte *)"\x63\x61\x62\x60" },
 { "SCD40", "CO2 sensor - 2000ppm", (const byte *)"\x62" },
 { "SCD40-D-R2", "Miniaturized CO2 Sensor", (const byte *)"\x62" },
 { "SCD41", "CO2 sensor", (const byte *)"\x62" },
 { "SEN-15892", "Zio Qwiic Loudness Sensor", (const byte *)"\x38" },
 { "SEN-17374", "Sparkfun EKMC4607112K PIR", (const byte *)"\x12\x13" },
 { "SGP30", "Gas Sensor", (const byte *)"\x58" },
 { "SH1106", "132 X 64 Dot Matrix OLED/PLED  Preliminary Segment/Common Driver with Controller", (const byte *)"\x3c\x3d" },
 { "SHT31", "Humidity/Temp sensor", (const byte *)"\x45\x44" },
 { "SHTC3", "Humidity &amp; Temperature Sensor", (const byte *)"\x70" },
 { "SI1132", "UV Index and Ambient Light Sensor", (const byte *)"\x60" },
 { "SI1133", "UV Index and Ambient Light Sensor", (const byte *)"\x55\x52" },
 { "Si1145", "Proximity/UV/Ambient Light Sensor IC With I2C Interface", (const byte *)"\x60" },
 { "Si4713", "FM Radio Transmitter with Receive Power Scan", (const byte *)"\x63\x11" },
 { "Si5351A", "Clock Generator", (const byte *)"\x61\x60" },
 { "Si7021", "Humidity/Temp sensor", (const byte *)"\x40" },
 { "SPS30", "Particulate Matter Sensor for Air Quality Monitoring and Control", (const byte *)"\x69" },
 { "SSD1305", "132 x 64 Dot Matrix OLED/PLED Segment/Common Driver with Controller", (const byte *)"\x3c\x3d" },
 { "SSD1306", "128 x 64 Dot Matrix Monochrome OLED/PLED Segment/Common Driver with Controller ", (const byte *)"\x3c\x3d" },
 { "STMPE610", "Resistive Touch controller", (const byte *)"\x41\x44" },
 { "STMPE811", "Resistive touchscreen controller", (const byte *)"\x41\x44" },
 { "TCA9548", "1-to-8 I2C Multiplexer", (const byte *)"\x73\x75\x72\x71\x77\x70\x76\x74" },
 { "TCA9554", "4 Low Voltage 8-Bit I 2C and SMBus Low-Power I/O Expander With Interrupt Output and Configuration Registers", (const byte *)"\x24\x26\x23\x22\x27\x25\x21\x20" },
 { "TCS34725", "color sensor", (const byte *)"\x29" },
 { "TDA4670", "Picture signal improvement circuit", (const byte *)"\x44" },
 { "TDA4671", "Picture signal improvement circuit", (const byte *)"\x44" },
 { "TDA4672", "Picture signal improvement (PSI) circuit", (const byte *)"\x44" },
 { "TDA4680", "Video processor", (const byte *)"\x44" },
 { "TDA4687", "Video processor", (const byte *)"\x44" },
 { "TDA4688", "Video processor", (const byte *)"\x44" },
 { "TDA4780", "Video control with gamma control", (const byte *)"\x44" },
 { "TDA7433", "Basic function audio processor", (const byte *)"\x45" },
 { "TDA8370", "High/medium perf. sync. processor", (const byte *)"\x46" },
 { "TDA8376", "One-chip multistandard video", (const byte *)"\x45" },
 { "TDA8415", "TVNCR stereo/dual sound processor", (const byte *)"\x42" },
 { "TDA8417", "TVNCR stereo/dual sound processor", (const byte *)"\x42" },
 { "TDA8421", "Audio processor with loudspeaker and headphone channel ", (const byte *)"\x41\x40" },
 { "TDA8424", "Audio processor with loudspeaker channel", (const byte *)"\x41" },
 { "TDA8425", "Audio processor with loudspeaker channel", (const byte *)"\x41" },
 { "TDA8426", "Hi-fi stereo audio processor", (const byte *)"\x41" },
 { "TDA8442", "Interface for colour decoder", (const byte *)"\x44" },
 { "TDA9150", "Deflection processor", (const byte *)"\x46" },
 { "TDA9860", "Hi-fi audio processor", (const byte *)"\x41\x40" },
 { "TEA5767", "Radio receiver", (const byte *)"\x60" },
 { "TEA6100", "FM/IF for computer-controlled radio", (const byte *)"\x61" },
 { "TEA6300", "Sound fader control and preamplifier/source selector", (const byte *)"\x40" },
 { "TEA6320", "4-input tone/volume controller with fader control", (const byte *)"\x40" },
 { "TEA6330", "Sound fader control circuit for car radios", (const byte *)"\x40" },
 { "TMP006", "Infrared Thermopile Sensor in Chip-Scale Package", (const byte *)"\x43\x41\x46\x47\x42\x40\x45\x44" },
 { "TMP007", "IR Temperature sensor", (const byte *)"\x43\x41\x46\x47\x42\x40\x45\x44" },
 { "TMP102", "Temperature sensor", (const byte *)"\x4b\x4a\x49\x48" },
 { "TPA2016", "2.8-W/Ch Stereo Class-D Audio Amplifier With Dynamic Range Compression and Automatic Gain Control", (const byte *)"\x58" },
 { "TSA5511", "1.3 GHz PLL frequency synthesizer for TV", (const byte *)"\x63\x61\x62\x60" },
 { "TSL2561", "light sensor", (const byte *)"\x39\x49" },
 { "TSL2591", "light sensor", (const byte *)"\x29" },
 { "UMA1014T", "Low-power frequency synthesizer for mobile radio communications", (const byte *)"\x63\x62" },
 { "VCNL40x0", "proximity sensor", (const byte *)"\x13" },
 { "VCNL4200", "High Sensitivity Long Distance Proximity and Ambient Light Sensor With I2C Interface", (const byte *)"\x51" },
 { "VEML6070", "UVA Light Sensor with I2C Interface", (const byte *)"\x39\x38" },
 { "VEML6075", "UVA and UVB Light Sensor", (const byte *)"\x10" },
 { "VEML7700", "High Accuracy Ambient Light Sensor ", (const byte *)"\x10" },
 { "VL53L0x", "Time Of Flight distance sensor", (const byte *)"\x29" },
 { "VL6180X", "Time Of Flight distance sensor", (const byte *)"\x29" },
 { "VML6075", "UVA and UVB Light Sensor with I2C Interface", (const byte *)"\x10" },
};

int i2c_scanner_known_devices_length = sizeof(i2c_scanner_known_devices)/sizeof(i2c_device_t);
