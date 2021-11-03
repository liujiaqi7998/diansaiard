#include "car.h"

#define STOP        'E'
#define FORWARD     'A'
#define BACKWARD    'B'
#define TURNLEFT    'C'
#define TURNRIGHT   'D'

void setup()
{
    intcar();
//    Serial.begin(9600);
    pinMode(P1_0, OUTPUT);
}

void loop()
{
    digitalWrite(P1_0, HIGH);
//    if (Serial.available() > 0)
//    {
//        char cmd = Serial.read();
//        if (cmd >= 0 && cmd <= 10)
//        {
//            Serial.print("SPEED"); //���״̬
//            set_speed_all(cmd * 25);
//            Serial.println(cmd * 25);
//        }
//        else
//        {
//            motorRun(cmd);
//        }
//
//    }
}

/*
 * *С���˶����ƺ���
 */
void motorRun(char cmd)
{
    switch (cmd)
    {
    case FORWARD:
        Serial.println("FORWARD"); //���״̬
        goFront();
        break;
    case BACKWARD:
        Serial.println("BACKWARD"); //���״̬
        goBack();
        break;
    case TURNLEFT:
        Serial.println("TURN  LEFT"); //���״̬
        goLeft();
        break;
    case TURNRIGHT:
        Serial.println("TURN  RIGHT"); //���״̬
        goRight();
        break;
    case STOP:
        Serial.println("STOP"); //���״̬
        goStop();
        break;
    default:
        break;
    }
}
