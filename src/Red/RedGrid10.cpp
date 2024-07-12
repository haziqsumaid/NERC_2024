#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid10.h"

// void grid10Red(){
// }


void grid10Red() {
  // red
  // 0,1,0
  // 1,1,0
  // 0,0,0

  // rock 1 drop
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(210);
  delay(500);
  lineFollowUntil(4, true, false);
  checkPoint();
  rightEncoder(220);
  delay(500);
  treePicInit();
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(210);
  halt();
  delay(500);
  lineFollowUntil(2, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();

  // tree drop 1
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
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(3, false, true);
  centered();
  rightEncoder(230);
  delay(500);
  lineFollowUntil(1, false, true);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);

  // rock 2 drop
  lineFollowUntil(2, false, true);
  centered();
  rightEncoder(230);
  delay(500);
  lineFollowUntil(1, false, true);
  centered();
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  centered();
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();

  // tree drop 2
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, false, true);
  centered();
  rightEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  centered();
  rightEncoder(470, 80);
  delay(500);
  lineFollowUntil(1, false, true);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);

  // rock 3 drop
  centered();
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  rightEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  delay(500);
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, false, true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  // tree drop 3
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1, false, true);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  centered();
  rightEncoder(470, 80);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(2, false, true);
  centered();
  myservo.write(75);

  // parking
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(4, true, false);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(300);
}
