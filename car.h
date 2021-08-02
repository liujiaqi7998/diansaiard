#ifndef CAR_H_
#define CAR_H_
#include "Arduino.h"

#define leftPWM P1_5
#define rightPWM P1_4

#define leftMotor1  P2_0
#define leftMotor2  P2_2
#define rightMotor1  P2_4
#define rightMotor2  P2_5

void goFront();
void goBack();
void goLeft();
void goRight();
void goStop();
void intcar();
void set_speed_left(uint16_t value);
void set_speed_right(uint16_t value);
void set_speed_all(uint16_t value);
#endif
