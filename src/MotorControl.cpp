#include <Arduino.h>
#include "MotorControl.h"

// moters 8,9,10,11
int moter_L_LPWM = 8;
int moter_L_RPWM = 9;

int moter_R_LPWM = 10;
int moter_R_RPWM = 11;

// moter speeds
int lspeed = 45;
int rspeed = 50;

// moter functions
void bothForward(int lspeed,int rspeed) {
  analogWrite(moter_L_LPWM, lspeed);
  analogWrite(moter_L_RPWM, 0);
  analogWrite(moter_R_LPWM, rspeed);
  analogWrite(moter_R_RPWM, 0);
}

void bothBackward() {
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, 50);
  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, 48);
}

void halt() {
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, 0);
  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, 0);
}

void rightTurn()
{
  analogWrite(moter_L_LPWM, 50);
  analogWrite(moter_L_RPWM, 0);

  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, 0);
}

void rightTurnBack()
{
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, 0);

  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, 50);
}

void sharpRightTurn(int speed)
{
  analogWrite(moter_L_LPWM, speed);
  analogWrite(moter_L_RPWM, 0);

  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, speed);
}

void leftTurn()
{
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, 0);
  analogWrite(moter_R_LPWM, rspeed);
  analogWrite(moter_R_RPWM, 0);
}

void leftTurnBack()
{
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, rspeed);
  analogWrite(moter_R_LPWM, 0);
  analogWrite(moter_R_RPWM, 0);
}

void sharpLeftTurn(int speed)
{
  analogWrite(moter_L_LPWM, 0);
  analogWrite(moter_L_RPWM, speed);

  analogWrite(moter_R_LPWM, speed);
  analogWrite(moter_R_RPWM, 0);
}
