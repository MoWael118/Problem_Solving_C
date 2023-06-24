#include <stdio.h>

typedef union {
    struct 
    {   
    unsigned char BIT7 : 1 ;
    unsigned char BIT6 : 1 ;
    unsigned char BIT5 : 1 ;
	unsigned char BIT4 : 1 ;
    unsigned char BIT3 : 1 ;
	unsigned char BIT2 : 1 ;
	unsigned char BIT1 : 1 ;
	unsigned char BIT0 : 1 ;
    };
    unsigned char Decimal_Number; 
}Number;

Number Number1;

void Print_Binary(Number * ptr)	;
void main(void)
{
	printf("Enter a Decimal Number : ");
	scanf("%d", &(Number1.Decimal_Number));
	Print_Binary(&Number1);
}
void Print_Binary(Number * ptr)	
{
	printf("%d",ptr->BIT0);
	printf("%d",ptr->BIT1);
	printf("%d",ptr->BIT2);
	printf("%d",ptr->BIT3);
	printf("%d",ptr->BIT4);
	printf("%d",ptr->BIT5);
	printf("%d",ptr->BIT6);
	printf("%d",ptr->BIT7);
}