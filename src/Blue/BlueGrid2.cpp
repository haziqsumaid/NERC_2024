#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"
#include "Blue/BlueGrid2.h"

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
  delay(500);
  lineFollowUntil(3,true,false);
  checkPoint();
  leftEncoder(220);
  halt();
  delay(500);
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
  rightEncoder(210);
  halt();
  delay(1000);
  // drop tree (3,3)
  lineFollowUntil(3,true,false);
  checkPoint();
  delay(1000);
  lineFollowEncoderFront(145);
  halt();
  delay(500);
  treeDrop();

  // tree drop 1 (3,3)
  delay(500);
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
  delay(500);
  lineFollowUntil(4,false,true);
  centered();
  delay(500);
  lineFollowEncoderBack(200-50);
  delay(500);
  treeDrop();
  delay(500);
// rock drop 2 (2,2)
  centered();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  rightEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(2,true,false);
  checkPoint();
  rightEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);

// tree drop 2 (2,2)
  lineFollowUntil(2,false,true);
  centered();
  rightEncoder(210);
  lineFollowUntil(1,false,true);
  centered();
  leftEncoder(210);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  treePic();
  delay(500);
  lineFollowUntil(3,false,true);
  centered();
  delay(500);
  lineFollowEncoderBack(200-50);
  delay(500);
  treeDrop();
  delay(500);

// rock drop 3 (1,1)
  centered();
  delay(500);
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treePic();
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(145);
  delay(500);
  treeDrop();
  delay(500);

// tree drop 3 (1,1)
  lineFollowUntil(2,false,true);
  centered();
  delay(500);
  leftEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  rightEncoder(210);
  delay(500);
  lineFollowUntil(1,true,false);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(150);
  delay(500);
  treePic();
  delay(500);
  centered();
  delay(500);
  leftEncoder(470,100);
  delay(500);
  lineFollowUntil(1,false,true);
  centered();
  lineFollowUntil(1,true,false);
  // lineFollowEncoderBack(100);
  delay(500);
  checkPoint();
  delay(500);
  lineFollowEncoderFront(110+40);
  delay(500);
  treeDrop();
  delay(500);
  centered();
  // parking
  delay(500);
  leftEncoder(210);
  delay(500);
  lineFollowUntil(5,true,false,60,65);
  // checkPoint();
  // lineFollowEncoderFront(300);
}
