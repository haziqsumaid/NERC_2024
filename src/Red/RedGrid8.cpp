#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid8.h"
#include "DelayControl.h"

void grid8Red() {
  // red
  // 1,0,1
  // 0,0,0
  // 0,1,0

  // Step 1: Rock 1 drop  
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(3, true, false);
  checkPoint();
  rightEncoder(220);
  halt();
  myDelay(250);
  lineFollowUntil(1, true, false);
  myDelay(250);
  treePicInit();
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(250,100);
  myDelay(250);
  lineFollowUntil(5, false, true);
  centered();
  // myDelay(250);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 2: Tree Drop 1
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, false, true);
  centered();
  lineFollowEncoderFront(40);
  myDelay(250);
  leftEncoder(240);
  myDelay(250);
  lineFollowEncoderBack(200);
  halt();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  myDelay(250);

  lineFollowUntil(2, true, false);
  checkPoint();
  rightEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(235,100);
  myDelay(250);
  centered();
  lineFollowUntil(4, false, true);
  centered();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 3: Rock 2 Drop
  lineFollowUntil(1, false, true);
  centered();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 4: Tree Drop 2
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(235,100);     // <=======================
  myDelay(250);
  lineFollowUntil(1, true, false);
  centered();
  // myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 5: Rock 3 Drop
  centered();
  myservo.write(80);
  leftEncoder(470,70);
  myDelay(250);
  lineFollowEncoderBack(110);
  myservo.write(12);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  leftEncoder(235,100);
  myDelay(250);
  lineFollowUntil(1,true, false );
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 6: Tree Drop 3
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(235);
  myDelay(250);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  leftEncoder(470,70);
  myDelay(250);
  lineFollowUntil(1, false, true);
  myDelay(250);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

  // Step 7: Parking
  centered();
  rightEncoder(235);
  myDelay(250);
    myservo.write(80);
  lineFollowUntil(5, true, false);
}
