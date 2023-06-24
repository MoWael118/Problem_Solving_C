

/* ******** Functions For Array ***************
max_arr => Maximum Number in array                                                 |  All These Functions Taking 2 Arguments (array name , array size) 
min_arr => Minimum Number in array                                                   | Function search_arr takes 3 Arguments (array name , array size,value to search)
scan_arr => scanning Array Elements
display_arr => Printing Array Elements
sort_arr => Sorting Array Elements from lowest to highest
search_arr => Search for element in An Array
*/
#include<stdio.h>
#include "std.h"
void max_arr (u32 *arr1 , u32 size_arr1)
{
	u32 i =0 , max=0 ;
	for (i=0;i<size_arr1;i++)
	{
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
	}
	printf("Maximum Number in Array = %d\n",max);
}
void min_arr (u32 *arr1 , u32 size_arr1)
{
	u32 i =0 ;
	u32 min= 1000000 ;
	for (i=0;i<size_arr1;i++)
	{
		if (arr1[i] < min)
		{
			min = arr1[i];
		}
	}
	printf("Minimum Number in Array = %d\n",min);
}
void scan_arr (u32 *arr1 , u32 size_arr1)
{
	u32 i=0 ;
	for (i=0 ; i<size_arr1;i++)
	{
		printf("Enter Number %d = ",i+1);
		scanf("%d",&arr1[i]);
	}
}
void sort_arr(u32 *arr1 , u32 size_arr1)
{
	u32 i =0 ,j=0, temp=0 ;
	for (i=0 ; i<size_arr1-1;i++)
	{
		for (j=0 ; j<size_arr1-1-i ; j++)
		{
			if (arr1[j]>arr1[j+1])
			{
			temp = arr1[j];
			arr1[j]= arr1[j+1];
			arr1[j+1]=temp;
			}
		}
	}
}
void search_arr(u32 *arr1 , u32 size_arr1,u32 value)
{
	u32 i=0,j=0,arr2[100]={0} ,flag=0,repeated=0,index=0;
	for (i=0 ; i<size_arr1 ; i++)
	{
		if (arr1[i] == value)
		{
			flag = 1 ;			
            index = i ;			
			break ;
		}
		
	}
	if (flag==1)
	{
		
		printf("Number Found at element number %d\n ",index+1);
	}
     else 
	 {
		 printf("Number Not Found\n ");
	 }
}
void display_arr (u32 *arr1 , u32 size_arr1)
{
	u32 i=0 ;
	for (i=0 ; i<size_arr1;i++)
	{
		printf("Number %d = %d\n",i+1,arr1[i]);
	}
}
u32 most_repeated (u32 *arr , u32 size,u32 *repeat)
{
	u32 i=0,j=0,counter=0,index=0,max=0 ;
	for (i=0 ; i<size ;i++)
	{
		counter=0;
		for (j=0 ;j<size;j++)
		{
			if (arr[j]==arr[i])
			{
				counter++;
			}
		}
		if (counter >max)
		{
			max = counter ;
			
		      index = i ;
		}
	}
	*repeat = max ;
	return index ;
	
}