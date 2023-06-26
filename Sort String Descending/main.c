/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 26/6/2023
 * 
 * Problem Description : sort characters of string in Descending Order
 * 
 * Algorithm : Arrange a string alphabetacly
 * 
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
int main ()
{
  char String1[100];
  char Temp = 0;
  int i = 0, j = 0;
  printf ("Enter The String : ");
  scanf("%[^\n]",String1);


  for (i = 0; i < strlen (String1)-1; i++)
    {
      for (j = 0; j < strlen (String1); j++)
    	{
	        if (String1[j] < String1[j + 1])
	          {
	           Temp = String1[j];
	           String1[j] = String1[j + 1];
	           String1[j + 1] = Temp;
	          }
	    }
    }
    
    printf("String after sorting Characters is : %s",String1);

  return 0;
}
