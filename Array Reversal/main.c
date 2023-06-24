#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int *temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    temp = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int end=num-1;
	
    for (i=0;i<num;i++)
    {
        temp[i] = arr[num-i-1];
    }
	
	for (i=0;i<num;i++)
    {
        arr[i] = temp[i];
    }
	
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}
