#include <stdio.h>
#include "../include/typedef.h"
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