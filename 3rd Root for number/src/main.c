#include <stdio.h>
#include "../include/typedef.h"
#include "../include/root.h"

void main (void)
{
	u32 num = 0;
	u32 res=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	res = Get_Root_3(num);	
	if (res!=0)
	printf("THe 3'rd Root of %d = %d",num,res);
	
	
	
}
