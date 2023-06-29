/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 29/6/2023
 * 
 * Problem Description : Find the most repeated character in a string.
 * 
 * Algorithm : Count the occurance of characters and display the most repeated one.
 * 
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int MaxOccurance=0,CharOccurance=0,Iterator1=0,Iterator2=0;
    char String[100];
    char Character=0;
    
    printf("Enter A String : ");
    fgets(String,100,stdin);
    for (Iterator1=0;Iterator1<strlen(String);Iterator1++)
    {
        for (Iterator2=0;Iterator2<strlen(String);Iterator2++)
        {
            if( String[Iterator1]    ==  String[Iterator2]  )
            {
                CharOccurance++;
                if (CharOccurance>MaxOccurance)
                {
                    MaxOccurance=CharOccurance;
                    Character = String[Iterator1];
                }
            }
        }
        CharOccurance=0;
    }
    
    printf("The Most repeated character in the string '%s' is '%c'\n",String,Character);
    printf("The Character %c repeated %d Times",Character,MaxOccurance);
    return 0;
}
