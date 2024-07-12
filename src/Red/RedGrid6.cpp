#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid6.h"



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
  delay(500);
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(220);
  halt();
  delay(500);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(100 + 100);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  leftEncoder(210);
  halt();
  delay(500);
  lineFollowUntil(2, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  halt();
  delay(500);
  treeDrop();

  // Step 5: tree drop (1,3)
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1, false, true);
  delay(500);
  centered();
  rightEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(3, false, true);
  centered();
  delay(500);
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  //
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();

  delay(500);
  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);

  lineFollowUntil(2, false, true);
  centered();
  delay(500);

  rightEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(3, false, true);
  centered();
  delay(500);
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  //
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);

  lineFollowUntil(2, true, false);
  checkPoint();
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  delay(500);

  rightEncoder(230);
  delay(500);

  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);

  leftEncoder(235);
  delay(500);

  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);

  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  centered();
  rightEncoder(470, 100);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(2, false, true);
  myservo.write(80);
  centered();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(4, true, false);
  checkPoint();
  lineFollowEncoderFront(300);
  halt();
}
