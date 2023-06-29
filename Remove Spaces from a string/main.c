/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 29/6/2023
 * 
 * Problem Description : Remove Spaces from a string.
 * 
 * Algorithm : Check on spaces and if found shift the string to the left .
 * 
 *****************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
   int i=0,j=0;
   char String[100];
   
   printf("Enter A string : ");
   fgets(String,100,stdin);
   
   for (i=0;i<strlen(String);i++)
   {
       if (String[i]==' ')
       {
           for (j=i ; j<strlen(String);j++)
           {
               String[j]=String[j+1];
           }
       }
   }
   i=0;
   while (String[i] != '\0')
   {
       if (String[i]== ' ')
       {
           String[i] = 0;
       }
       i++;
   }
   printf("String Without spaces is : %s",String);
    return 0;
}
