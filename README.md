Matt's LSM9DS0 Library
======================

This is a fork of the Adafruit LSM9DS0 Library. It uses the FIFO buffer in the LSM9DS0 instead of a direct readout. Currently, it's in-progress and breaks compatibility with the Sensor library; you get ints back instead of floats, and there are no units. Since I don't care about units for my projects, I don't bother with them here. This is super alpha, and the API may change without notice. The source files are the source of truth. A better C++ programmer could probably do this better; pull requests welcome, but I'll also be making improvements, hopefully. 

My contributions are also © Matt Mills, released under the BSD license.

Adafruit LSM9DS0 Library
========================

This is a library for the Adafruit triple-axis accelerometer/magnetometer/gyroscope LSM9DS0 breakouts

Designed specifically to work with the Adafruit LSM9DS0 Breakout & Flora Sensor
  ----> https://www.adafruit.com/products/2020
  ----> https://www.adafruit.com/products/2021

These sensors use I2C to communicate, 2 pins are required to interface
Adafruit invests time and resources providing this open source code,
please support Adafruit and open-source hardware by purchasing
products from Adafruit!

Check out the links above for our tutorials and wiring diagrams

Written by Kevin Townsend for Adafruit Industries.  
BSD license, all text above must be included in any redistribution

To download. click the DOWNLOADS button in the top right corner, rename the uncompressed folder Adafruit_LSM9DS0. Check that the Adafruit_LSM9DS0 folder contains Adafruit_LSM9DS0.cpp and Adafruit_LSM9DS0.h

Place the Adafruit_LSM9DS0 library folder your *arduinosketchfolder*/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.
