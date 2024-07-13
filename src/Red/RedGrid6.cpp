#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid6.h"
#include "DelayControl.h"



void grid6Red(){
  //#################################################
  // red
  // 0,0,0
  // 1,1,1
  // 0,0,0

  // Step 1: Drop rock (2,3)
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(220);
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(230);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  leftEncoder(210,100);
  halt();
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // Step 5: tree drop (1,3)
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1, false, true);
  myDelay(250);
  centered();
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3, false, true);
  centered();
  // myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);

  //
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();

  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  lineFollowUntil(2, false, true);
  centered();
  // myDelay(250);

  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3, false, true);
  centered();
  // myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);

  //
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);

  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  // myDelay(250);

  rightEncoder(230);
  myDelay(250);

  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);

  leftEncoder(235);
  myDelay(250);

  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  rightEncoder(470, 100);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2, false, true);
  myservo.write(80);
  centered();
  // myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(5, true, false);
}
