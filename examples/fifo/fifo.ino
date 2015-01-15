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
  uint8_t samples = lsm.fifoSamples();

  Serial.print("Samples:"); Serial.print(samples);
  Serial.println("");

  for (uint8_t i=0; i<samples && i<32 ; i++){
    sensors_event_t accel, mag, gyro, temp;

    lsm.getEvent(&accel, &mag, &gyro, &temp);
    // lsm.read();

  }
  delay(200);
}
