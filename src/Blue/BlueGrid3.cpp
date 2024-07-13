#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid3.h"
#include "DelayControl.h"

void grid3Blue()
{
  //#################################################
  // blue
  // 1,1,1
  // 0,0,0
  // 0,0,0

  // Step 1: Drop rock (1,1)
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
  // myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // step 5: tree drop (1,3)
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

  //
  lineFollowUntil(2,false,true);
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
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  rightEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  lineFollowEncoderFront(145);

  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();

  //
  rightEncoder(235);
  centered();
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  myDelay(250);
  centered();
  lineFollowUntil(1,false,true);
  lineFollowUntil(1,true,false);
  checkPoint();

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
//
  lineFollowUntil(2,false,true);
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
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,true,false);
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
  lineFollowUntil(1,false,true);
  centered();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();

  //
  rightEncoder(235);
  centered();
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  myDelay(250);
  centered();
  lineFollowUntil(1,false,true);
  lineFollowUntil(1,true,false);
  checkPoint();

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(3,true,false);
  checkPoint();
  rightEncoder(210);
  myservo.write(80);
  myDelay(250);
  checkPoint();


  lineFollowUntil(6,true,false);

}
