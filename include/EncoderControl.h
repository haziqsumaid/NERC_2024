#ifndef _ENCODERCONTROL_H
#define _ENCODERCONTROL_H

extern int leftEncoderTicks;
extern int rightEncoderTicks;

void LencodeFunc();
void RencodeFunc();

void rightEncoder(int value, int speed = 150);
void leftEncoder(int value, int speed = 150);

void forwardEncoder(int value);
void backEncoder(int value);


#endif // _ENCODERCONTROL_H