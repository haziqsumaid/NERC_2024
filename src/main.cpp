#include <Arduino.h>
#include "MotorControl.h"
#include "EncoderControl.h"
#include "LineFollow.h"
#include "ServoControl.h"

// Blue Grid Includes
#include "Blue/BlueGrid1.h"
#include "Blue/BlueGrid2.h"
#include "Blue/BlueGrid3.h"
#include "Blue/BlueGrid4.h"
#include "Blue/BlueGrid5.h"
#include "Blue/BlueGrid6.h"
#include "Blue/BlueGrid7.h"
#include "Blue/BlueGrid8.h"
#include "Blue/BlueGrid9.h"
#include "Blue/BlueGrid10.h"



// Red Grid Includes
#include "Red/RedGrid1.h"
#include "Red/RedGrid2.h"
#include "Red/RedGrid3.h"
#include "Red/RedGrid4.h"
#include "Red/RedGrid5.h"
#include "Red/RedGrid6.h"
#include "Red/RedGrid7.h"
#include "Red/RedGrid8.h"
#include "Red/RedGrid9.h"
#include "Red/RedGrid10.h"


// encoders
int EncoderRight = 3;
int EncoderLeft = 2;

unsigned long startTime = millis();

Servo myservo;

// servo sensor
int servo_pin = 15;

// map reader
// (1,1) A4
// (1,2) A5
// (2,2) A6
// (3,1) A7

int map_reader_1_1 = A4;
int map_reader_1_2 = A5;
int map_reader_2_2 = A6;
int map_reader_3_1 = A7;

// sonar sensor
int trigger_pin = 44;
int echo_pin = 45;


// middle IR sensors
int rightIR = 22;
int leftIR = 41;

// 34,35,36,37
const int Button1 = 37;
const int Button2 = 36;
const int Button3 = 35;
const int Button4 = 34;

const int arena_selection_pin = 50; 


// testing sensors 
void sensorTest(int ML,int L,int C,int R,int MR)
{
  int leftmost = analogRead(ML);
  int left = analogRead(L);
  int middle = analogRead(C);
  int right = analogRead(R);
  int rightmost = analogRead(MR);


  Serial.print("Most Left = ");
  Serial.print(leftmost);
  Serial.print("\t\t");

  Serial.print("Left = ");
  Serial.print(left);
  Serial.print("\t");

  Serial.print("Center = ");
  Serial.print(middle);
  Serial.print("\t");

  Serial.print("Right = ");
  Serial.print(right);
  Serial.print("\t");

  Serial.print("Most Right = ");
  Serial.print(rightmost);
  Serial.print("\t");


  Serial.println();

  delay(100);
}

void MAP_READER(int map_reader_1_1,int map_reader_1_2,int map_reader_2_2,int map_reader_3_1)
{
  int _1_1 = analogRead(map_reader_1_1);
  int _1_2 = analogRead(map_reader_1_2);
  int _2_2 = analogRead(map_reader_2_2);
  int _3_1 = analogRead(map_reader_3_1);


  Serial.print("(1,1) = ");
  Serial.print(_1_1);
  Serial.print("\t\t");

  Serial.print("(1,2) = ");
  Serial.print(_1_2);
  Serial.print("\t");

  Serial.print("(2,2) = ");
  Serial.print(_2_2);
  Serial.print("\t");

  Serial.print("(3,1) = ");
  Serial.print(_3_1);
  Serial.print("\t");

  Serial.println();

  delay(100);
}

void ticksValues(){
  Serial.print("Left ticks = ");
  Serial.print(leftEncoderTicks);
  Serial.print("\t");
  Serial.print(" Right ticks = ");
  Serial.print(rightEncoderTicks);
  Serial.println();
}

void middleIR(){
  int right_ir = digitalRead(rightIR);
  int left_ir = digitalRead(leftIR);

  Serial.print("right senssor = ");
  Serial.print(right_ir);
  Serial.print("\t");
  Serial.print("left senssor = ");
  Serial.print(left_ir);
  Serial.println();
}

void arraysValues(){
  // MAP_READER(map_reader_1_1,map_reader_1_2,map_reader_2_2,map_reader_3_1);
  // sensorTest(array_FML,array_FL,array_FC,array_FR,array_FMR);
  sensorTest(array_BML,array_BL,array_BC,array_BR,array_BMR);
  // middleIR();
}

void printPullUps(){
  int switchValue1 = digitalRead(Button1);
  int switchValue2 = digitalRead(Button2);
  int switchValue3 = digitalRead(Button3);
  int switchValue4 = digitalRead(Button4);

  Serial.print("button1 = ");
  Serial.print(switchValue1);
  Serial.print("\t");
  Serial.print("button2 = ");
  Serial.print(switchValue2);
  Serial.print("\t");
  Serial.print("button3 = ");
  Serial.print(switchValue3);
  Serial.print("\t");
  Serial.print("button4 = ");
  Serial.print(switchValue4);
  Serial.println();
}

int getSwitchValue() {
  int switchValue1 = digitalRead(Button1);
  int switchValue2 = digitalRead(Button2);
  int switchValue3 = digitalRead(Button3);
  int switchValue4 = digitalRead(Button4);

  // 1 2 3 4
  // 1 0 0 0 = 1
  // 0 1 0 0 = 2
  // 0 0 1 0 = 3
  // 0 0 0 1 = 4

  // 1 0 0 1 = 5
  // 0 1 0 1 = 6
  // 0 0 1 1 = 7
  // 1 0 1 1 = 8
  // 0 1 1 1 = 9
  // 1 1 1 1 = 10

  if (switchValue1 == 1 && switchValue2 == 0 && switchValue3 == 0 && switchValue4 == 0) return 1;
  if (switchValue1 == 0 && switchValue2 == 1 && switchValue3 == 0 && switchValue4 == 0) return 2;
  if (switchValue1 == 0 && switchValue2 == 0 && switchValue3 == 1 && switchValue4 == 0) return 3;
  if (switchValue1 == 0 && switchValue2 == 0 && switchValue3 == 0 && switchValue4 == 1) return 4;
  if (switchValue1 == 1 && switchValue2 == 0 && switchValue3 == 0 && switchValue4 == 1) return 5;
  if (switchValue1 == 0 && switchValue2 == 1 && switchValue3 == 0 && switchValue4 == 1) return 6;
  if (switchValue1 == 0 && switchValue2 == 0 && switchValue3 == 1 && switchValue4 == 1) return 7;
  if (switchValue1 == 1 && switchValue2 == 0 && switchValue3 == 1 && switchValue4 == 1) return 8;
  if (switchValue1 == 0 && switchValue2 == 1 && switchValue3 == 1 && switchValue4 == 1) return 9;
  if (switchValue1 == 1 && switchValue2 == 1 && switchValue3 == 1 && switchValue4 == 1) return 10;
  return 0;
}

void callGridFunctionBlue(int switchValue) {
  switch (switchValue) {
    case 1:
      Serial.println("Grid 1 Blue");
      grid1Blue();  // or grid1Red() as needed
      delay(500000);
      break;
    case 2:
      Serial.println("Grid 2 Blue");
      grid2Blue();
      delay(500000);
      break;
    case 3:
      Serial.println("Grid 3 Blue");
      grid3Blue();
      delay(500000);
      break;
    case 4:
      Serial.println("Grid 4 Blue");
      grid4Blue();
      delay(500000);
      break;
    case 5:
      Serial.println("Grid 5 Blue");
      grid5Blue();
      delay(500000);
      break;
    case 6:
      Serial.println("Grid 6 Blue");
      grid6Blue();
      delay(500000);
      break;
    case 7:
      Serial.println("Grid 7 Blue");
      grid7Blue();
      delay(500000);
      break;
    case 8:
      Serial.println("Grid 8 Blue");
      grid8Blue();
      delay(500000);
      break;
    case 9:
      Serial.println("Grid 9 Blue");
      grid9Blue();
      delay(500000);
      break;
    case 10:
      Serial.println("Grid 10 Blue");
      grid10Blue();
      delay(500000);
      break;
    default:
      // Handle invalid switch values
      break;
  }
}

void callGridFunctionRed(int switchValue) {
  switch (switchValue) {
    case 1:
      Serial.println("Grid 1 Red");
      grid1Red();
      delay(500000);
      break;
    case 2:
      Serial.println("Grid 2 Red");
      grid2Red();
      delay(500000);
      break;
    case 3:
      Serial.println("Grid 3 Red");
      grid3Red();
      delay(500000);
      break;
    case 4:
      Serial.println("Grid 4 Red");
      grid4Red();
      delay(500000);
      break;
    case 5:
      Serial.println("Grid 5 Red");
      grid5Red();
      delay(500000);
      break;
    case 6:
      Serial.println("Grid 6 Red");
      grid6Red();
      delay(500000);
      break;
    case 7:
      Serial.println("Grid 7 Red");
      grid7Red();
      delay(500000);
      break;
    case 8:
      Serial.println("Grid 8 Red");
      grid8Red();
      delay(500000);
      break;
    case 9:
      Serial.println("Grid 9 Red");
      grid9Red();
      delay(500000);
      break;
    case 10:
      Serial.println("Grid 10 Red");
      grid10Red();
      break;
    default:
      // Handle invalid switch values
      break;
  }
}


// ############################################################ red ###############################################

void setup() {
  Serial.begin(9600);

  leftEncoderTicks = 0;
  rightEncoderTicks = 0;

  attachInterrupt(digitalPinToInterrupt(EncoderLeft), LencodeFunc, RISING);
  attachInterrupt(digitalPinToInterrupt(EncoderRight), RencodeFunc, RISING);


  pinMode(moter_L_LPWM, OUTPUT); 
  pinMode(moter_L_RPWM, OUTPUT);
  pinMode(moter_R_LPWM, OUTPUT);
  pinMode(moter_R_RPWM, OUTPUT);

  pinMode(array_BC, INPUT);
  pinMode(array_BL, INPUT);
  pinMode(array_BML, INPUT);
  pinMode(array_BMR, INPUT);
  pinMode(array_BR, INPUT);

  pinMode(array_FC, INPUT);
  pinMode(array_FL, INPUT);
  pinMode(array_FML, INPUT);
  pinMode(array_FMR, INPUT);
  pinMode(array_FR, INPUT);

  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, OUTPUT);


  pinMode(rightIR, INPUT);
  pinMode(leftIR, INPUT);


  pinMode(map_reader_1_1, INPUT);
  pinMode(map_reader_1_2, INPUT);
  pinMode(map_reader_2_2, INPUT);
  pinMode(map_reader_3_1, INPUT);

  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);

  pinMode(arena_selection_pin, INPUT_PULLUP);

  myservo.attach(servo_pin);
  myservo.write(90);

  delay(10);
  int sel = digitalRead(arena_selection_pin);
  if (sel == 1){
    Serial.println("Red Arena");
    int switchValue = getSwitchValue();
    callGridFunctionRed(switchValue);
  } 
  else 
  {
    Serial.println("Blue Arena");
    int switchValue = getSwitchValue();
    callGridFunctionBlue(switchValue);
  }
  delay(100);

  // grid1Blue(); //(done) (1:25)
  // grid1Red();

  // grid2Blue();
  // grid2Red();

  // grid3Blue();
  // grid3Red();

  // grid4Blue();
  // grid4Red();

  // grid5Blue();
  // grid5Red();

  // grid6Blue();
  // grid6Red();

  // grid7Blue();
  // grid7Red();

  // grid8Blue();   //done   (1:30)
  // grid8Red();


  // grid9Blue();
  // grid9Red();

  

}

void loop(){ 
 
  int sel = digitalRead(arena_selection_pin);
  if (sel == 1){
    Serial.println("Red Arena");
    int switchValue = getSwitchValue();
    callGridFunctionRed(switchValue);
  } 
  else 
  {
    Serial.println("Blue Arena");
    int switchValue = getSwitchValue();
    callGridFunctionBlue(switchValue);
  }
  delay(3000);
}




