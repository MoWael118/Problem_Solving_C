#include<stdio.h>
#include "typedef.h"



s32 Binary_Search_Iterative (u32  *arr ,u32 size ,u32 value , u32 start , u32 end)
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
}