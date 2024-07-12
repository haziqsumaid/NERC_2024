#ifndef _MOTORCONTROL_H
#define _MOTORCONTROL_H

extern int moter_L_LPWM;
extern int moter_L_RPWM;

extern int moter_R_LPWM;
extern int moter_R_RPWM;

extern int lspeed;
extern int rspeed;

void bothForward(int lspeed, int rspeed);
void bothBackward();
void halt();
void rightTurn();
void rightTurnBack();
void sharpRightTurn(int speed = 150);

void leftTurn();
void leftTurnBack();
void sharpLeftTurn(int speed = 150);

#endif