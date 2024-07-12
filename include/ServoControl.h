#ifndef _SERVOCONTROL_H
#define _SERVOCONTROL_H

#include <Servo.h>

extern Servo myservo;

extern int pos;

void treePicInit();
void treePic();
void treeDrop();

#endif // _SERVOCONTROL_H