#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid8.h"

void grid8Blue(){
  // blue
  // 1,0,1
  // 0,0,0
  // 0,1,0
//   treePicInit();
  
 //rock 1 drop  
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  delay(500);
  lineFollowUntil(3,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  delay(500);
  lineFollowUntil(1,true,false);
  delay(500);
  treePicInit();
  delay(500);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(250);
  delay(500);
  lineFollowUntil(5,false,true);
  centered();
  delay(500);
  lineFollowEncoderFront(145);
  halt();
  delay(500);
  treeDrop();
  delay(500);

  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  lineFollowEncoderFront(40);
  halt();
  delay(100);
  rightEncoder(240);
  delay(500);
  lineFollowEncoderBack(100+100);
  halt();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  delay(500);

  lineFollowUntil(2,true,false);
  checkPoint();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  centered();
  lineFollowUntil(4,false,true);
  centered();
  lineFollowEncoderFront(160);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();


  delay(500);
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  lineFollowUntil(1,false,true);
  centered();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(3,false,true);
  centered();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(235);
  delay(500);
  lineFollowEncoderBack(100+100);
  halt();
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(4, true, false);
  delay(500);
  checkPoint();
  lineFollowEncoderFront(300);

}
