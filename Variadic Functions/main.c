#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
va_list Var ;
va_start(Var, count);

int sum =0,i=0;
for (i=0 ; i<count ; i++)
{
    sum += va_arg(Var, int);
}


va_end(Var);
return sum;
}

int min(int count,...) {
va_list Var1 ;
va_start(Var1, count);

int min=MAX_ELEMENT;
int i=0;
int x=va_arg(Var1, int);
for (i=0;i<count;i++)
{
    if ( x < min)
    {min = x;
	}
	x= va_arg(Var1, int);
}

va_end(Var1);
return min;
}

int max(int count,...) {
va_list Var2 ;
va_start(Var2, count);

int max=MIN_ELEMENT;
int i=0;
int x=va_arg(Var2, int);
for (i=0;i<count;i++)
{
    if ( x >max)
	{
    max = x;
	}
	x=va_arg(Var2, int);
}

va_end(Var2);
return max;
}

void main (void)
{
	
	printf("max =%d\n",max(4,5,2,8,4));
	printf("min =%d\n",min(4,8,2,3,4));
	printf("sum =%d",sum(4,1,2,3,4));
	
}