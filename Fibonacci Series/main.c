/*

A Fibonacci series is 
a series in which next number is a sum of previous two numbers.

For example : 0, 1, 1, 2, 3, 5, 8 ……

In Fibonacci Series,
first number starts with 0 and second is with 1 and then its grow

*/
#include <stdio.h>
void main (void)
{
	int i=0;
	int Number=0;
	int Result=0;
	int First=0;
	int Second=1;
	
	printf("Enter the length of Fibonacci Series = ");
	scanf("%d",&Number);
	printf("Fibonacci Series : ");
	for (i=0;i<Number;i++)
	{
		if(i<=1)
		{
			Result = i ;
		}
		else 
		{
			Result += First;
			First=Second;
			Second=Result;
		}
		printf("\n%d",Result);
	}
	
}