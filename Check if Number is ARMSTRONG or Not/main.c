

/*	A number which have n digits can be say that  
	Armstrong number if its sum of nth powers of its digits 
	is equal to original number.
	for Example 153 is an Armstrong number because 1^3 + 5^3 + 3^3 =153 .
*/

#include <stdio.h>
#include <math.h>
void main (void)
{
	int Number=0,Temp2=0,Temp=0,NofDigits=0,Result=0;
	printf("Enter A number = ");
	scanf("%d",&Number);
	
	Temp=Number;
	
	/* Step 1 : Analyze our number is how many digits*/
	
	while (Number)
	{
		Number/=10;
		NofDigits++;
	}
	Number = Temp;
	
	/*Step 2 : Apply The Equation of Armstrong*/
	while (Number)
	{
		Temp2 = Number %10;
		Result+= pow(Temp2,NofDigits);
		Number/=10;
	}
	/*Step 3 : Check The Result*/
	if (Result==Temp)
	{
		printf("%d Is Armstrong",Temp);
	}
	else {	printf("%d Is Not Armstrong",Temp); }
}
