/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 25/6/2023
 * 
 * Problem Description : A Palindrome number is a number which reverse
 *                       is equal to the original number means number itself.
 * 
 * Algorithm : Save the digits of the Given number in an array and compare them reversely.
 * 
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Size=0,num=0,Iterator1=0,Flag=0;
    int *Digits = (int*) malloc(1*sizeof(int));
    printf("Enter A Number = ");
    scanf("%d",&num);
    while (num)
    {   
        realloc(Digits , (Size+1)*sizeof(int));
        Digits[Size] = num%10 ;
        num/=10;
        Size++;
    }
    for (Iterator1=0;Iterator1<=Size/2;Iterator1++)
        {
        if ( Digits[Iterator1] != Digits[Size-Iterator1-1] )
            {
            Flag=1;
            break;
            }
        }
    if (Flag==1) printf("The Number is Not Palindrome");
    else printf("The Number is Palindrome");
    return 0;
}
