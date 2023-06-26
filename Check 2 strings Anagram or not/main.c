/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 26/6/2023
 * 
 * Problem Description : Two strings can be called Anagram if the same character with the same occurrence, 
 *                       present in both string.
 * 
 * Algorithm : Arrange 2 strings alphabetacly and compare them
 * 
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
int main ()
{
  char String1[100];
  char String2[100];
  char Temp = 0;
  int i = 0, j = 0;
  int AnagramFlag=0;
  printf ("Enter First String : ");
  fgets (String1,100,stdin);

  printf ("Enter Second String : ");
  fgets (String2,100,stdin);

  if (strlen (String1) == strlen (String2))
    {
      for (i = 0; i < strlen (String1) ; i++)
	    {
	    for (j = 0; j < strlen (String1) ; j++)
	        {
	        if (String1[j] < String1[j + 1])
		        {
		            Temp = String1[j];
		            String1[j] = String1[j + 1];
		            String1[j + 1] = Temp;
		        }
		        
	        if (String2[j] < String2[j + 1])
		        {
		            Temp = String2[j];
		            String2[j] = String2[j + 1];
		            String2[j + 1] = Temp;
		        }
	        }
	    }
	    i=0;
	    while (String1[i]!= NULL)
	    {
	        if(String1[i]==String2[i])
	        {
	            i++;
	        }
	        else {
	            AnagramFlag=1;
	            break;
	        }
	        
	    }
	    if (AnagramFlag==0)
	    {
	        printf ("2 Strings are ANAGRAM");
	    }
	    else {
	        printf ("2 Strings are not ANAGRAM");
	    }
    }
  else
    {
      printf ("2 Strings are not ANAGRAM");
    }

  return 0;
}
