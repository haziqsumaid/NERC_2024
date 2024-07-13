#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid3.h"
#include "DelayControl.h"
void grid3Red() {
  //#################################################
  // red
  // 1,1,1
  // 0,0,0
  // 0,0,0

  // Step 1: Drop rock (1,1)
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(5, true, false);
  checkPoint();
  rightEncoder(220);
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(100 + 100);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  leftEncoder(210,100);
  halt();
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // Step 5: Tree drop (1,3)
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
  lineFollowUntil(2, false, true);
  centered();
//   myDelay(250);
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
  lineFollowUntil(1, false, true);
  centered();
  lineFollowEncoderFront(145);

  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();

  //
  leftEncoder(235);
  centered();
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(235);
  myDelay(250);
  centered();
  lineFollowUntil(1, false, true);
  lineFollowUntil(1, true, false);
  checkPoint();

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
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
  lineFollowUntil(1, false, true);
  centered();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();

  //
  leftEncoder(235);
  centered();
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(235);
  myDelay(250);
  centered();
  lineFollowUntil(1, false, true);
  lineFollowUntil(1, true, false);
  checkPoint();

  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(3, true, false);
  checkPoint();
  leftEncoder(210);
  myDelay(250);
  checkPoint();
  myservo.write(80);
  lineFollowUntil(6, true, false, 100, 105);
}