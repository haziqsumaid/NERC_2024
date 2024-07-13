#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid1.h"
#include "DelayControl.h"

void grid1Red() {
  //#################################################
  // red
  // 1,0,0
  // 0,1,0
  // 0,0,1

  // rock drop 1 (1,3)
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
  lineFollowEncoderBack(100 + 100+30);
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
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // tree drop 1 (1,3)
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

  // rock drop 2 (2,2)
  centered();
  rightEncoder(230);
  myDelay(250);
  lineFollowEncoderBack(200+30);
  myDelay(250);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  checkPoint();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  rightEncoder(245,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // tree drop 2
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1, false, true);
  myDelay(250);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(3, false, true);
  centered();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();

  // rock drop 3
  myDelay(250);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowEncoderBack(200);
  myDelay(250);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  checkPoint();
//   myDelay(250);
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
//   myDelay(250);
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, false, true);
  centered();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // tree 3
  lineFollowUntil(2, false, true);
  centered();
//   myDelay(250);
  rightEncoder(235);
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
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  lineFollowUntil(3, false, true);
  centered();
//   myDelay(250);
  rightEncoder(235);
  myDelay(250);
  myservo.write(80);

  lineFollowUntil(5, true, false);
  halt();
}
