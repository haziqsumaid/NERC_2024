#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid2.h"
#include "DelayControl.h"


void grid2Red() {
  //#################################################
  // red
  // 1,0,0
  // 0,1,0
  // 0,0,1

  // tree pick 1 (3,3)
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(210);  // Changed from leftEncoder
  halt();
  myDelay(250);
  lineFollowUntil(3, true, false);
  checkPoint();
  rightEncoder(220);  // Changed from leftEncoder
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  delay(100);
  lineFollowEncoderBack(200);  // Adjusted value
  bothBackward();
  delay(200);
  halt();
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  leftEncoder(210,100);  // Changed from rightEncoder
  halt();
  myDelay(250);
  // drop tree (3,3)
  lineFollowUntil(3, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // tree drop 1 (3,3)
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);  // Changed from leftEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);  // Changed from rightEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(140);
  treePic();
  myDelay(250);
  lineFollowUntil(4, false, true);
  centered();
//   myDelay(250);
  lineFollowEncoderBack(150);  // Adjusted value
  myDelay(250);
  treeDrop();
  myDelay(250);

  // rock drop 2 (2,2)
  centered();
  rightEncoder(210);  // Changed from leftEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);  // Changed from rightEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(210,100);  // Changed from rightEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(210,100);  // Changed from leftEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // tree drop 2 (2,2)
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(210);  // Changed from rightEncoder
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(210);  // Changed from leftEncoder
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  treePic();
  myDelay(250);
  lineFollowUntil(3, false, true);
  centered();
//   myDelay(250);
  lineFollowEncoderBack(150);  // Adjusted value
  myDelay(250);
  treeDrop();
  myDelay(250);

  // rock drop 3 (1,1)
  centered();
//   myDelay(250);
  rightEncoder(210);  // Changed from leftEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(210);  // Changed from rightEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(210,100);  // Changed from rightEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  rightEncoder(210,100);  // Changed from leftEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // tree drop 3 (1,1)
  lineFollowUntil(2, false, true);
  centered();
//   myDelay(250);
  rightEncoder(210);  // Changed from leftEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  leftEncoder(210);  // Changed from rightEncoder
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(150);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
//   myDelay(250);
  rightEncoder(470, 100);  // Changed from leftEncoder
  myDelay(250);
  lineFollowUntil(1, false, true);
  centered();
  lineFollowUntil(1, true, false);
  myDelay(250);
  checkPoint();
//   myDelay(250);
  lineFollowEncoderFront(150);  // Adjusted value
  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();
//   myDelay(250);
  rightEncoder(210);  // Changed from leftEncoder
  myDelay(250);
  myservo.write(80);
  lineFollowUntil(5, true, false);

}
