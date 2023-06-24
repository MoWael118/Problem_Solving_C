#include<stdio.h>
#include "../include/typedef.h"

u32 Get_Root_3(u32 x)
{
	u32 counter=1 ;
	u32 value = 0 ;
    if (x==0)
	{
	return x ;
	}
else 
{
	while (counter<10000)
	{
		value = counter * counter * counter ;
		if (value==x)
		{
		return counter ;	
		}
		else {counter++;}
	}
	printf("Number %d has no 3rd ROOT",x);
	return 0 ;
}

}