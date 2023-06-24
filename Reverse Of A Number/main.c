#include <stdio.h>

/*
	Input  : 123
	Output : 321	
*/

void main (void)
{
	int Number  = 0;
	int Reverse = 0;
	printf("Enter A Number : ");
	scanf("%d",&Number);
	
	while(Number)
	{
		Reverse = (Number%10) + (Reverse*10) ;
		Number/=10;
	}
	printf("Number After Reverse = %d",Reverse);
}