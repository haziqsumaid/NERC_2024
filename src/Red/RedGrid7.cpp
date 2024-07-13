#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid7.h"
#include "DelayControl.h"

void grid7Red(){
  // red
  // 0,1,0
  // 0,1,1
  // 0,0,0

  // rock 1 drop
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
  myDelay(250);
  treePic();
  myDelay(250);
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

  // tree drop 1
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

  // rock 2 drop
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(1, false, true);
  centered();
  leftEncoder(230);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
//   myDelay(250);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();

  leftEncoder(230,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();

  // tree 2 drop
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(230);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  rightEncoder(470, 80);
  myDelay(250);
  lineFollowUntil(1, false, true);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // rock 3 drop
  centered();
  leftEncoder(230);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  rightEncoder(230);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  rightEncoder(230,100);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderBack(160);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // tree 3 drop
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
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
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, false, true);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();
  myservo.write(75);
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  // parking
//   myDelay(250);
  leftEncoder(235);
  myDelay(250);
  
  lineFollowUntil(5, true, false);
}
