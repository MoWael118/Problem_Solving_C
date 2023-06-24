#include <stdio.h>
#include "../include/typedef.h"


/*Endianness is a way to arrange bytes in memory
	Big Endian : if we store 1 in a 8 bit register this 1 will be stored in MSB -> Reg=1; -> Reg = 0b 1000 0000;
	Little Endian if we store 1 in a 8 bit register this 1 will be stored in LSB (As Usual) -> Reg=1; -> Reg = 0b 0000 0001; */
void main ()
{
	u32 x=1 ;
	u8 *ptr = (u8*)&x ;
	if (*ptr)
	{
		printf("Little Endian");
	}
	else 
	printf("Big Endian");

	
}