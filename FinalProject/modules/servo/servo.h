//=====[#include guards - begin]===============================================
#ifndef _SERVO_H_
#define _SERVO_H_

#define DUTY_MIN 0.025 //Duty cycle is pulse_width/period
#define DUTY_69 0.057 //Move 67 degrees
#define DUTY_CONTINUOUS 0.075
#define PERIOD 0.02 //Units of period is seconds

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void wiperHigh();
void wiperLow();
void wiperThree();
void wiperSix();
void wiperEight();
void wiperOff();

//=====[#include guards - end]=================================================

#endif // _SERVO_H_