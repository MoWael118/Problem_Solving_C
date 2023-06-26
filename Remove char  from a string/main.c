/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 26/6/2023
 * 
 * Problem Description : Remove a given character from a string
 * 
 * Algorithm : Copy the given string into another string without the given character
 * 
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
int main ()
{
  char String[100] = { 0 };
  char temp[100] = { 0 };
  char Character = 0;
  int i = 0, j = 0;
  printf ("Enter a String : ");
  scanf ("%[^\n]s", String);

  printf ("\nEnter a Character to remove : ");
  scanf (" %c", &Character);

  while (String[i] != NULL)
    {
      if (String[i] != Character)
	{
	  temp[j] = String[i];
	  j++;
	}
      i++;
    }

  printf ("\nThe string after removing %c is : %s", Character, temp);


  return 0;
}
