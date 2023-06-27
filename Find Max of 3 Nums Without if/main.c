#include<stdio.h>
void main (void)
{
    int a,b,c,max =0 ;
    printf("Enter number 1 = ");
    scanf("%d",&a);
    printf("Enter number 2 = ");
    scanf("%d",&b);
    printf("Enter number 3 = ");
    scanf("%d",&c);
   max = (a>b)?(a>c)? a:c : (b>c)? b:c ;
   printf("max = %d",max) ;
}