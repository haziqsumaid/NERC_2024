#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"

//front array
int array_FML = A0;
int array_FL = A15;
int array_FC = A14;
int array_FR = A13;
int array_FMR = A12;

//back array
int array_BML = A8;
int array_BL = A9;
int array_BC = A10;
int array_BR = A11;
int array_BMR = A2;

// threshold values for line detection
const int threshold = 800;

void justLineFollowFront()
{
    int  leftmost = analogRead(array_FML);
    int  left = analogRead(array_FL);
    int  middle = analogRead(array_FC);
    int  right = analogRead(array_FR);
    int  rightmost = analogRead(array_FMR);

  if(left >= threshold && middle <= threshold && right >=threshold)
  {
    bothForward(lspeed-20+5,rspeed-20);
  }
  else if(left <= threshold  && right >=threshold)
  {
    leftTurn();
  }
  else if(left >= threshold && right <=threshold)
  {
    rightTurn();
  }
   else if(leftmost <= threshold && rightmost >=threshold)
  {
    leftTurn();
  }
  else if(leftmost >= threshold && rightmost <=threshold)
  {
    rightTurn();
  }
  else{
    bothForward(lspeed-15,rspeed);
  }
}

void justLineFollowBack()
{

  int  leftmost = analogRead(array_BML);
  int  left = analogRead(array_BL);
  int  middle = analogRead(array_BC);
  int  right = analogRead(array_BR);
  int  rightmost = analogRead(array_BMR);

  if(left >= threshold && middle <= threshold && right >=threshold)
  {
    bothBackward();
  }
  else if(left <= threshold  && right >=threshold)
  {
    rightTurnBack();
  }

  else if(leftmost <= threshold  && rightmost >=threshold)
  {
    rightTurnBack();
  }
  else if(left >= threshold && right <=threshold)
  {
    leftTurnBack();
  }

  else if(leftmost >= threshold && rightmost <=threshold)
  {
    leftTurnBack();
  }
  else{
    bothBackward();
  }
}

void lineFollowEncoderFront(int value)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (rightEncoderTicks < value)
    {
        Serial.print(rightEncoderTicks);
        Serial.print(" ");
        justLineFollowFront();
    }
    halt();
}

void lineFollowEncoderBack(int value)
{
    leftEncoderTicks = 0;
    rightEncoderTicks = 0;
    while (rightEncoderTicks < value)
    {
        Serial.print(rightEncoderTicks);
        Serial.print(" ");
        justLineFollowBack();
    }
    halt();
}

void lineFollowFront(int &currentCounter, int targetCounter,int leftmost, int left,int  middle,int right,int rightmost,int lspeed,int rspeed)
{
  if(left >= threshold && middle <= threshold && right >=threshold)
  {
    bothForward(lspeed,rspeed);
  }
  else if(left <= threshold  && right >=threshold)
  {
    leftTurn();
  }
  else if(left >= threshold && right <=threshold)
  {
    rightTurn();
  }
   else if(leftmost <= threshold && rightmost >=threshold)
  {
    leftTurn();
  }
  else if(leftmost >= threshold && rightmost <=threshold)
  {
    rightTurn();
  }
  else if (leftmost < threshold  && rightmost < threshold)
  {
    currentCounter++;
    if (currentCounter != targetCounter)
    {
      bothForward(lspeed,rspeed);
      lineFollowEncoderFront(60);
    }
  }
  else{
    bothForward(lspeed,rspeed);
  }
}

void lineFollowBack(int &currentCounter, int targetCounter, int leftmost, int left, int middle, int right, int rightmost)
{
  if(left >= threshold && middle <= threshold && right >=threshold)
  {
    bothBackward();
  }
  else if(left <= threshold  && right >=threshold)
  {
    rightTurnBack();
  }
  else if(left >= threshold && right <=threshold)
  {
    leftTurnBack();
  }
    else if(leftmost <= threshold  && rightmost >=threshold)
  {
    rightTurnBack();
  }
  else if(leftmost >= threshold && rightmost <=threshold)
  {
    leftTurnBack();
  }
  else if (leftmost < threshold &&  rightmost < threshold)
  {
    currentCounter++;
    if (currentCounter != targetCounter)
    {
      bothBackward();
      lineFollowEncoderBack(120);
    }
  }
  else{
    bothBackward();
  }
}

void lineFollowUntil(int untilCount,bool frontArray,bool backArray,int lspeed,int rspeed)
{
  int counter = 0;

  while (counter < untilCount)
  {
    int leftmost;
    int left;
    int middle;
    int right;
    int rightmost;

    if(frontArray){
      leftmost = analogRead(array_FML);
      left = analogRead(array_FL);
      middle = analogRead(array_FC);
      right = analogRead(array_FR);
      rightmost = analogRead(array_FMR);
      lineFollowFront(
        counter,
        untilCount,
        leftmost, left, middle, right, rightmost,lspeed,rspeed);
    }
    else if(backArray){
      leftmost = analogRead(array_BML);
      left = analogRead(array_BL);
      middle = analogRead(array_BC);
      right = analogRead(array_BR);
      rightmost = analogRead(array_BMR);
      lineFollowBack(
        counter,
        untilCount,
        leftmost, left, middle, right, rightmost);
    }

    if (counter >= untilCount)
    {
      halt();
      break;
    }
  }
}

void checkPoint(){
  while (true){
    int right_ir = digitalRead(rightIR);
    int left_ir = digitalRead(leftIR);

    if(right_ir == 0 && left_ir == 0){
      bothForward(45,50);
    }
    else{
      halt();
      delay(500);
      break;
     
    }
  }
}

void centered(){
  while (true){
    int right_ir = digitalRead(rightIR);
    int left_ir = digitalRead(leftIR);

    if(right_ir == 0 && left_ir == 0){
      bothBackward();
    }
    else{
      halt();
      delay(500);
      break;
    }
  }
}
