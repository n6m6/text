#include "reg51.h"
#include "public.h"
#include "stepmotor.h"
#include "key.h"
 
 
#define SPEEDMAX 1//max speed
#define SPEEDMIN 5//min speed
 
 
//**********************def of sign
int stepmove=0;//0 for stop,1 for begin
void main()
{	
	u8 key=0;
	u8 dir=0;
	u8 step=0;
	u8 speed=SPEEDMAX;	
 
	while(1)
	{		
			key=key_scan();	//get key_state

			if(key==KEY1_PRESS)//start or stop
			{
				stepmove=!stepmove;
			}				
		
			if(stepmove==1)	//start
			{
				step_28byj48_control(step++,dir);
				if(step==8)	step=0;
				Delay(speed);
			}
			
			if(key==KEY4_PRESS)//turn + to -
			{
				dir=!dir;			
			}	
			else if (key==KEY2_PRESS)//speed up
			{
				if(speed>SPEEDMAX)
					speed-=1;
				
			}
			else if (key==KEY3_PRESS)//speed down
			{
				if(speed<SPEEDMIN) 
					speed+=1;	
			}
			Delay(SPEEDMAX);	
	}	//while
}//main
