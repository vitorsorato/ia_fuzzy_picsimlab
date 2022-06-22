#include <Arduino.h>
#include <Wire.h>
#include "SHTSensor.h"

SHT3xAnalogSensor sht3xAnalog(A0, A1);

void setup() {

  Wire.begin();
  Serial.begin(9600);

  delay(1000);
}

void loop() {
  String t = String(sht3xAnalog.readTemperature(), 2);
  String h = String(sht3xAnalog.readHumidity(), 2);
  Serial.println("T: " + t + " H: " + h);
  delay(1000);
}
