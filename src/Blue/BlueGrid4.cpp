#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid4.h"
#include "DelayControl.h"

void grid4Blue(){
  // blue
  // 0,1,0
  // 1,0,1
  // 0,0,0
  
  //rock 1 drop  
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(170);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  rightEncoder(210,100);
  halt();
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  //  tree drop 1

  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  myDelay(250);
  centered();
  leftEncoder(230);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3,false,true);
  centered();
  // myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // rock 2 drop 
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(140);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(145);

  myDelay(250);
  treeDrop();
  myDelay(250);
  // tree 2 drop
  lineFollowUntil(2,false,true);
  centered();
  // myDelay(250);
  leftEncoder(230);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  // myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
  // rock 3 drop
  lineFollowUntil(3,false,true);
  centered();
  // myDelay(250);
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3,true,false);
  checkPoint();
  // myDelay(250);
  rightEncoder(230,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);

  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
  // tree 3 drop
  centered();
  // myDelay(250);
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  // myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  myDelay(250);
  checkPoint();

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  leftEncoder(470,80);
  myDelay(250);

  lineFollowUntil(1,true,false);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  myservo.write(80);
  myDelay(250);
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(5,true,false);

}