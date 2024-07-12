#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid1.h"

void grid1Blue(){
  //#################################################
  // blue
  // 0,0,1
  // 0,1,0
  // 1,0,0

  // rock drop 1 (1,3)
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  delay(500);
  lineFollowUntil(5,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  delay(500);
  lineFollowEncoderFront(40);
  halt();
  lineFollowEncoderBack(100+100);
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  rightEncoder(210);
  halt();
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  halt();
  delay(500);
  treeDrop();

  // tree drop 1 (1,3)
  delay(500);
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  delay(500);
  centered();
  leftEncoder(230);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(135);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2,false,true);
  centered();
  delay(500);
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  delay(500);
  // rock drop 2 (2,2)
  centered();
  leftEncoder(240);
  delay(500);
  lineFollowEncoderBack(200);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treePic();
  checkPoint();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  leftEncoder(245);
  delay(500);
  lineFollowEncoderBack(30);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treeDrop();
  delay(500);

  //////// tree drop 2
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,false,true);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(3,false,true);
  centered();
  lineFollowEncoderBack(160);
  delay(500);
  treeDrop();
  ///////////// rock drop 3 
  delay(500);
  centered();
  leftEncoder(235);
  delay(500);
  lineFollowEncoderBack(200);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treePic();
  delay(500);
  checkPoint();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  delay(500);
  leftEncoder(235);
  delay(500);


  lineFollowUntil(1,false,true);
  centered();
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treeDrop();
  delay(500);

  ////tree 3
  lineFollowUntil(2,false,true);
  centered();
  delay(500);
  leftEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  rightEncoder(235);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(135);
  delay(500);
  treePic();
  delay(500);
  centered();
  leftEncoder(470,100);
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  lineFollowEncoderFront(135);
  delay(500);
  treeDrop();
  delay(500);
  lineFollowUntil(3,false,true);
  centered();
  delay(500);
  leftEncoder(235);
  delay(500);
  myservo.write(80);

  lineFollowUntil(4,true,false);
  checkPoint();
  lineFollowEncoderFront(250);
  
}
