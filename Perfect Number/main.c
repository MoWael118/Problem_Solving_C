/*	
	A perfect number is a positive integer that is equal to 
	the sum of its positive divisors,
	excluding the number itself.
*/
#include <stdio.h>
void main (void)
{
	int number=0,sum=0,i=0;
	
	printf("Enter A Number : ");
	scanf("%d",&number);
	
	for (i=1;i<=number/2;i++)
	{
		if (	(number % i ==0)	&&	(number!=i))
		{
			sum+=i;
		}
		
	}
	if (sum == number)
	{
		printf("Perfect Number");
	}
	else {	printf("Not Perfect Number");}
	
	
}