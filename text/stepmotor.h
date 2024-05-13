#ifndef __stepmotor_H__
#define __stepmotor_H__
 
#include "reg51.h"
#include "public.h"
 

sbit IN1_D=P1^0;
sbit IN1_C=P1^1;
sbit IN1_B=P1^2;
sbit IN1_A=P1^3;
 
void step_28byj48_control(u8 step,u8 dir);//dir = 1 for +,dir = 0 for -
 
#endif
