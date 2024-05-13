#include "stepmotor.h"

void step_28byj48_control(u8 step,u8 dir)
{
	u8 temp=step;
	
	if(dir==0) temp=7-step;
	
	switch(temp)
	{
		case 0:	IN1_A=1;IN1_B=1;IN1_C=1;IN1_D=0;break;
		case 1:	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=0;break;
		case 2:	IN1_A=1;IN1_B=1;IN1_C=0;IN1_D=1;break;
		case 3:	IN1_A=1;IN1_B=0;IN1_C=0;IN1_D=1;break;
		case 4:	IN1_A=1;IN1_B=0;IN1_C=1;IN1_D=1;break;
		case 5:	IN1_A=0;IN1_B=0;IN1_C=1;IN1_D=1;break;
		case 6:	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=1;break;
		case 7:	IN1_A=0;IN1_B=1;IN1_C=1;IN1_D=0;break;	
	}
}
