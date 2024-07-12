#include <Arduino.h>
#include <Servo.h>
#include "ServoControl.h"
#include "MotorControl.h"

int pos = 0;

void treePicInit(){

    for (pos = 80; pos >= 12; pos -= 1) {
      myservo.write(pos);          
      delay(15);                      
  }
}

void treePic(){
    for (pos = 12; pos <= 50; pos += 1) {
      myservo.write(pos);          
      delay(15);                      
  }
  
}

void treeDrop(){

    for (pos = 50; pos >= 12; pos -= 1) {
      myservo.write(pos);          
      delay(15);                     
  }

  halt();

}