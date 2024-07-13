#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid1.h"
#include "DelayControl.h"

void grid1Blue(){
  //#################################################
  // blue
  // 0,0,1
  // 0,1,0
  // 1,0,0

  // rock drop 1 (1,3)
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(5,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(100+100);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  rightEncoder(210,100);
  halt();
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // tree drop 1 (1,3)
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
  lineFollowEncoderFront(135);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
  // rock drop 2 (2,2)
  centered();
  leftEncoder(240);
  myDelay(250);
  lineFollowEncoderBack(200);
  myDelay(250);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treePic();
  checkPoint();
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  leftEncoder(235,100);
  myDelay(250);
  lineFollowEncoderBack(30);
  myDelay(250);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treeDrop();
  myDelay(250);

  //////// tree drop 2
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  myDelay(250);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3,false,true);
  centered();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  ///////////// rock drop 3 
  myDelay(250);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowEncoderBack(200);
  myDelay(250);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treePic();
  myDelay(250);
  checkPoint();
  myDelay(250);
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  myDelay(250);
  leftEncoder(235,100);
  myDelay(250);


  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treeDrop();
  myDelay(250);

  ////tree 3
  lineFollowUntil(2,false,true);
  centered();
  myDelay(250);
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(135);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  leftEncoder(470,100);
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(135);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(3,false,true);
  centered();
  myDelay(250);
  leftEncoder(235);
  myDelay(250);
  myservo.write(80);

  lineFollowUntil(5,true,false);
  // checkPoint();
  // lineFollowEncoderFront(250);
  
}
