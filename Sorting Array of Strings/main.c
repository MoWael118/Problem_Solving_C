#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    int i=0;
    int flag=0;
    while( (a[i] != '\0') || (b[i]!= '\0'))
    {
        if (a[i] == b[i])
        {
            //break;
        }
        else if (a[i] > b[i])
        {
            flag= 2 ;
            break;
        }
        else {
            flag = 1;
        break;}
        i++;
    }
    return flag;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
int i=0;
int flag=0;
    while( (a[i] != '\0') || (b[i]!= '\0'))
    {
        if (a[i] == b[i])
        {
            //break;
        }
        else if (a[i] > b[i])
        {
            flag= 1 ;
            break;
        }
        else {
            flag= 2;
            break;
        }
        i++;
    }
    return flag;

}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int j=0;
    char i;
    int A_DisChar=0,B_DisChar=0;
    char A;
    char B;
    for (i='a';i<'z';i++)
    {
        A=i;
        for (j=0;j<(int)strlen(a);j++)
        {
            if (A == a[j])
            {
                A_DisChar++;
                j=(int)strlen(a);
            }
        }
    }
    for (i='a';i<'z';i++)
    {
        B=i;
        for (j=0;j<(int)strlen(b);j++)
        {
            if (B == b[j])
            {
                B_DisChar++;
                j=(int)strlen(b);
            }
        }
    }
    
    if (A_DisChar > B_DisChar)
    {
        return 2;
    }
    else if (A_DisChar < B_DisChar){
    return 1;
    }
    else {
    return lexicographic_sort(a, b) ;
    }
}

int sort_by_length(const char* a, const char* b) {
int A_len=0,B_len=0;
    
    A_len = strlen(a);
    B_len = strlen(b);
    
    if(B_len > A_len)
    {
        return 1;
    }
    else if (B_len < A_len){
        return 2;
    }
    else {
    return lexicographic_sort(a, b);
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int flag=0;
    char *temp;
    for (int j=0;j<len-1;j++)
    {
        for (int i =0;  i<len-1-j ; i++ )
        {
            flag = cmp_func(arr[i],arr[i+1]);
            if (flag == 2)
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}