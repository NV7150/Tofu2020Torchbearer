//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(115200);
//  setupESPMaster();
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  uint8_t a[] = {1, 2, 3, 4};
//  sendData(a);
//  delay(1000);
//}

#include "Pins.h"
using namespace Pins;

void recieve_data(const uint8_t *mac_addr, const uint8_t *data, int data_len){
  analogWrite(METROPOLITAN_GOVERNMENT, 100);

}

void setup(){
  Serial.begin(115200);
  setupESPSlave();
  registerReceiveFunc(recieve_data);
  pinMode(METROPOLITAN_GOVERNMENT, INPUT)

}



void loop(){
  digitalWrite(METROPOLITAN_GOVERNMENT,  HIGH)
}


//date: 2020, 28, Dec.
//Author: Shinnosuke Fukai
//Purpose: To go to SUKIYA to eat gyudon
//
