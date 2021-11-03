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
//            Serial.print("SPEED"); //Êä³ö×´Ì¬
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
 * *Ð¡³µÔË¶¯¿ØÖÆº¯Êý
 */
void motorRun(char cmd)
{
    switch (cmd)
    {
    case FORWARD:
        Serial.println("FORWARD"); //Êä³ö×´Ì¬
        goFront();
        break;
    case BACKWARD:
        Serial.println("BACKWARD"); //Êä³ö×´Ì¬
        goBack();
        break;
    case TURNLEFT:
        Serial.println("TURN  LEFT"); //Êä³ö×´Ì¬
        goLeft();
        break;
    case TURNRIGHT:
        Serial.println("TURN  RIGHT"); //Êä³ö×´Ì¬
        goRight();
        break;
    case STOP:
        Serial.println("STOP"); //Êä³ö×´Ì¬
        goStop();
        break;
    default:
        break;
    }
}
