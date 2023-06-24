/**************************************************************/
/************** Author : Mohammed Wael         ***********************/
/************** Date :    18/3/2022                  ***********************/
/************** version :  1.0                            ***********************/
/************** Description : Most Repeated number in array ***********************/
#include<stdio.h>
#include "../include/stdtype.h"
#include "../include/array.h"
#define SIZE 100

void main()
{
    u32 arr[SIZE]={0};
	u32 counter=0;
	u32 size=0;
	printf("Enter size of array : ");
	scanf("%d",&size);
	scan_arr(arr,size);
	u32 index = most_repeated(arr,size,&counter);
	printf("The Most Repeated Value is %d\n Repeated %d Times",arr[index],counter);
}



