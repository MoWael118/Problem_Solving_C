#include <stdio.h>

void main(void)
{
	int arr[8]={0},Num,i;
	
	printf("Enter Decimal Number : ");
	scanf("%d",&Num);
	
	for( i=0 ; Num>0 ;i++ )
	{
		arr[i] = Num%2 ;
		Num/=2;
	}
	
	printf("Number in Binary = 0b");
	for( i=0 ; i<8 ; i++)
	{
		printf("%d",arr[7-i]);
	}
}
