#include <Arduino.h>
#include<Wire.h>
#include"droneaccell.h"

Drone_accell d1;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  d1._init();
}

void loop() {
  if(d1.read_data())
  {
    Serial.println(d1.accell_x(), DEC);
  }
}