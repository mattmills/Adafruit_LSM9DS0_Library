#include <SPI.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM9DS0.h>

Adafruit_LSM9DS0 lsm = Adafruit_LSM9DS0(1000);

void setup()
{
  while (!Serial); // flora & leonardo

  Serial.begin(9600);
  Serial.println("LSM FIFO read demo");

  // Try to initialise and warn if we couldn't detect the chip
  if (!lsm.begin())
  {
    Serial.println("Oops ... unable to initialize the LSM9DS0. Check your wiring!");
    while (1);
  }


  Serial.println("Found LSM9DS0 9DOF");
  Serial.println("Starting FIFO");
  lsm.enableFIFO();
  delay(500); // let samples build up
  Serial.println("");
}

void loop(){
  uint8_t samples;
  lsm.fifoSamples(&samples);
  Serial.print("Samples:"); Serial.print(samples);
  Serial.println("");
  for (i=0; i<samples; i++){
    lsm.read();
    Serial.print("Accel X: "); Serial.print((int)lsm.accelData.x);   Serial.print(" ");
    Serial.print("Accel Y: "); Serial.print((int)lsm.accelData.y);   Serial.print(" ");
    Serial.print("Accel Z: "); Serial.println((int)lsm.accelData.z); Serial.print(" ");
  }
  delay(200);
}
