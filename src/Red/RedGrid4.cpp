#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Red/RedGrid4.h"


void grid4Red(){
  // red
  // 0,1,0
  // 1,0,1
  // 0,0,0
  
  // rock 1 drop  
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
  lineFollowEncoderBack(170);
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
  delay(500);
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  // rock 2 drop 
  lineFollowUntil(1, false, true);
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
  lineFollowEncoderFront(140);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(1, true, false);
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

  // tree 2 drop
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
  lineFollowUntil(2, false, true);
  centered();
  delay(500);
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  // rock 3 drop
  lineFollowUntil(3, false, true);
  centered();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(3, true, false);
  checkPoint();
  delay(500);
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);

  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);

  // tree 3 drop
  centered();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1, true, false);
  checkPoint();
  delay(500);
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1, false, true);
  delay(500);
  checkPoint();

  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  centered();
  rightEncoder(470, 80);
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
  myservo.write(80);
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(4, true, false);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(300);
}
