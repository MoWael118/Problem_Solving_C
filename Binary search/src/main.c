/**************************************************************/
/************** Author : Mohammed Wael         ***********************/
/************** Date :    18/3/2022                  ***********************/
/************** version :  1.0                            ***********************/
/************** Description : Binary Search        ***********************/
#include<stdio.h>
#include "../include/typedef.h"
#include "../include/array.h"
s32 Binary_Search_Iterative (u32  *arr ,u32 size ,u32 value , u32 start , u32 end);
s32 Binary_Search_Recursion (u32  *arr ,u32 size ,u32 value , u32 start , u32 end);

void main (void)
{
	u32 arr[100]={0}, size=0,counter=0,value=0,start=0,end=0,mid=0;
	printf("Enter Size of Array = ");
	scanf("%d",&size);
	end = size-1 ;
	scan_arr(arr,size);
	printf("Enter value to search = ");
	scanf("%d",&value);
	sort_arr(arr,size);
	s32 result1 = Binary_Search_Iterative(arr,size,value,start,end);
	if (result1 >= 0)
	{
	printf("Iterative -> Value %d found at element number %d\n",value,result1+1);
	}
	else 
	{
		printf("Iterative -> Value Not Found\n");
	}
	s32 result2 = Binary_Search_Recursion(arr,size,value,start,end);
	if (result2 >= 0)
	{
	printf("Recursion -> Value %d found at element number %d",value,result2+1);
	}
	else 
	{
		printf("Recursion -> Value Not Found");
	}
	
}
/*s32 Binary_Search_Iterative (u32  *arr ,u32 size ,u32 value , u32 start , u32 end)
{
	u32 mid=0;
	while (start <= end)
	{
		mid = (start +end)/2 ;

		if (arr[mid]>value)
		{
		    end = mid -1 ;
		}
		else if (arr[mid]<value)
		{
			start = mid+1 ;
		}
		else if (arr[mid]==value)
		{
		    return mid ;	
		}
	}
	return -1 ;
}
s32 Binary_Search_Recursion (u32  *arr ,u32 size ,u32 value , u32 start , u32 end)
{
	u32 mid = (start +end)/2 ;
		if (arr[mid]>value)
		{
		   Binary_Search_Recursion (arr ,size ,value , start ,mid-1) ;
		}
		else if (arr[mid]<value)
		{
			Binary_Search_Recursion (arr ,size , value , mid+1 ,end) ;
		}
		else if (arr[mid]==value)
		{
		     return mid ;	
		}
	return -1 ;
}*/