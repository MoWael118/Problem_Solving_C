/* 
   A prime number is a number which can be divided by 
   only 1 and number itself.
*/
#include <stdio.h>
void main (void)
{
	int i=0,Number=0,PrimeFlag=1;
	printf("Enter a number = ");
	scanf("%d",&Number);
	
	if((Number%2==0) && (Number!=2))
	{
		printf("%d is not prime",Number);
	}
	else
	{
		for (i=3 ; i<10 ;i++)
		{
			if (i==Number){continue;}
			
			if (	(Number%i == 0)		)
			{
			PrimeFlag=0;
			}
			i++;	
		}
		if (PrimeFlag==0)
		{
			printf("%d is not prime",Number);
		}
		else
		{
			printf("%d is prime",Number);
		} 		
	}
	
	
}