#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid8.h"
#include "DelayControl.h"

void grid8Blue(){
  // blue
  // 1,0,1
  // 0,0,0
  // 0,1,0
//   treePicInit();
  
 //rock 1 drop  
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(3,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  myDelay(250);
  lineFollowUntil(1,true,false);
  myDelay(250);
  treePicInit();
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(250,100);
  myDelay(250);
  lineFollowUntil(5,false,true);
  centered();
  // myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();
  myDelay(250);

  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  lineFollowEncoderFront(40);
  halt();
  delay(100);
  rightEncoder(240);
  myDelay(250);
  lineFollowEncoderBack(100+100);
  halt();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  myDelay(250);

  lineFollowUntil(2,true,false);
  checkPoint();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235,100);
  myDelay(250);
  centered();
  lineFollowUntil(4,false,true);
  centered();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();


  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  lineFollowUntil(1,false,true);
  centered();
  // myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1,false,true);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(3,false,true);
  centered();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235);
  myDelay(250);
  lineFollowEncoderBack(100+100);
  halt();
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  myservo.write(80);
  myDelay(250);
  lineFollowUntil(5, true, false);

}
