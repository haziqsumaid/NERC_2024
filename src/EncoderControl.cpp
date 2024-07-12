#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"

int leftEncoderTicks = 0;
int rightEncoderTicks = 0;

void LencodeFunc()
{
    leftEncoderTicks++;
}

void RencodeFunc()
{
    rightEncoderTicks++;
}

void rightEncoder(int value,int speed)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (rightEncoderTicks < value)
    {
        Serial.print(leftEncoderTicks);
        Serial.print(" ");
        sharpRightTurn(speed);
    }
    halt();
}

void leftEncoder(int value, int speed)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (rightEncoderTicks < value)
    {
        Serial.print(leftEncoderTicks);
        Serial.print(" ");
        sharpLeftTurn(speed);
 
    }
    halt();
}

void forwardEncoder(int value)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (leftEncoderTicks < value)
    {
        Serial.print(leftEncoderTicks);
        Serial.print(" ");
        bothForward(35,40);
    }
    halt();
}

void backEncoder(int value)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (leftEncoderTicks < value)
    {
        Serial.print(leftEncoderTicks);
        Serial.print(" ");
        bothBackward();
    }
    halt();

}
