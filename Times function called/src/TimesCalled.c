#include <stdio.h>
#include "../include/typedef.h"
u8 Time_Called(void);
void main()
{
	Time_Called();
	Time_Called();
	Time_Called();
	Time_Called();
	Time_Called();
	//u8 counter = Time_Called();
	printf("%d",counter);

}

u8 Time_Called(void)
{
    static u8 counter=0;
    counter++;	
	return counter ;
}