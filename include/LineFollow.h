#ifndef _LINEFOLLOW_H
#define _LINEFOLLOW_H

//front array
extern int array_FML;
extern int array_FL ;
extern int array_FC ;
extern int array_FR ;
extern int array_FMR;

extern int array_BML;
extern int array_BL ;
extern int array_BC ;
extern int array_BR ;
extern int array_BMR;

extern const int threshold;

extern int rightIR;
extern int leftIR ;

void justLineFollowFront();
void justLineFollowBack();
void lineFollowEncoderFront(int value);
void lineFollowEncoderBack(int value);
void lineFollowFront(int &currentCounter, int targetCounter,int leftmost, int left,int  middle,int right,int rightmost,int lspeed,int rspeed);
void lineFollowBack(int &currentCounter, int targetCounter, int leftmost, int left, int middle, int right, int rightmost);
void lineFollowUntil(int untilCount,bool frontArray = false, bool backArray = false, int lspeed = 45, int rspeed = 50);
void checkPoint();
void centered();

#endif // _LINEFOLLOW_H