#include <stdio.h>

void main(void)
{
	char Letter=0,STR[100]={0};
	int i=0,j=0;
	
	printf("Enter A String : ");
	gets(STR);
	printf("Enter a Letter to remove : ");
	scanf("%c",&Letter);
	
	for ( i=0,j=0 ; i<100;i++)
	{
		if(STR[i] != Letter)
		{
			STR[j++]=STR[i];
		}
		
	}
	STR[j] = '\0';
	
	printf("String After Removing '%c' is : %s ",Letter,STR);
	
	
}
