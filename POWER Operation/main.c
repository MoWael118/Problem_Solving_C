/******************************************************************************
 * Author : Mohamed Wael
 * 
 * Date   : 25/6/2023
 * 
 * Problem Description : Find a result of POWER operation.
 * 
 * Algorithm : Multiply the BASE by itself for POWER times.
 * 
 *****************************************************************************/
#include <stdio.h>

int main()
{
    int POW=0,BASE=0;
    long Result=1;
    printf("Enter The BASE = ");
    scanf("%d",&BASE);
    printf("Enter The POWER = ");
    scanf("%d",&POW);
    
    for (int i=0;i<POW;i++)
    {
        Result *= BASE;
    }
    printf("The Result of %d^%d = %ld",BASE,POW,Result);
    
    return 0;
}
