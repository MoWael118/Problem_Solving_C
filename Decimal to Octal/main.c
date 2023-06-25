/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 25/6/2023
 * 
 * Problem Description : An octal number is a number that is expressed in the base-8 numeral system.
 * 
 * Algorithm : Here we will use the division by 8 concepts to convert Decimal into an octal number.
 * 
 *****************************************************************************/
#include <stdio.h>

int main ()
{
  int Dec = 0, Oct = 0, reverse = 0;
  printf ("Enter a Decimal Number = ");
  scanf ("%d", &Dec);

  while (Dec)
    {
      Oct = Dec % 8 + Oct * 10;
      Dec /= 8;
    }
  while (Oct)
    {
      reverse = Oct % 10 + reverse * 10;
      Oct /= 10;
    }

  printf ("The Octal Number = %d", reverse);
  return 0;
}
