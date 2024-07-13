#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid2.h"
#include "DelayControl.h"

void grid2Blue(){
  //#################################################
  // blue
  // 1,0,0
  // 0,1,0
  // 0,0,1

  // tree pick 1 (3,3)
  lineFollowUntil(4,true,false);
  checkPoint();
  leftEncoder(210);
  halt();
  myDelay(250);
  lineFollowUntil(3,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  myDelay(250);
  lineFollowEncoderFront(40);
  halt();
  delay(100);
  lineFollowEncoderBack(100+100);
  bothBackward();
  delay(200);
  halt();
  treePicInit();
  checkPoint();
  lineFollowEncoderFront(160);
  halt();
  treePic();
  centered();
  rightEncoder(210,100);
  halt();
  delay(1000);
  // drop tree (3,3)
  lineFollowUntil(3,true,false);
  checkPoint();
  delay(1000);
  lineFollowEncoderFront(145);
  halt();
  myDelay(250);
  treeDrop();

  // tree drop 1 (3,3)
  myDelay(250);
  lineFollowUntil(2,false,true);
  centered();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210);
  delay(1000);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(140);
  treePic();
  myDelay(250);
  lineFollowUntil(4,false,true);
  centered();
  myDelay(250);
  lineFollowEncoderBack(200-50);
  myDelay(250);
  treeDrop();
  myDelay(250);
// rock drop 2 (2,2)
  centered();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(2,true,false);
  checkPoint();
  rightEncoder(210,100);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(210,100);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

// tree drop 2 (2,2)
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(210);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(145);
  treePic();
  myDelay(250);
  lineFollowUntil(3,false,true);
  centered();
  myDelay(250);
  lineFollowEncoderBack(200-50);
  myDelay(250);
  treeDrop();
  myDelay(250);

// rock drop 3 (1,1)
  centered();
  myDelay(250);
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treePic();
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  leftEncoder(210,100);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(145);
  myDelay(250);
  treeDrop();
  myDelay(250);

// tree drop 3 (1,1)
  lineFollowUntil(2,false,true);
  centered();
  myDelay(250);
  leftEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  rightEncoder(210);
  myDelay(250);
  lineFollowUntil(1,true,false);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(150);
  myDelay(250);
  treePic();
  myDelay(250);
  centered();
  myDelay(250);
  leftEncoder(470,100);
  myDelay(250);
  lineFollowUntil(1,false,true);
  centered();
  lineFollowUntil(1,true,false);
  // lineFollowEncoderBack(100);
  myDelay(250);
  checkPoint();
  myDelay(250);
  lineFollowEncoderFront(110+40);
  myDelay(250);
  treeDrop();
  myDelay(250);
  centered();
  // parking
  myDelay(250);
  leftEncoder(210);
  myDelay(250);
  myservo.write(80);
  lineFollowUntil(5,true,false);
  // checkPoint();
  // lineFollowEncoderFront(300);
}
