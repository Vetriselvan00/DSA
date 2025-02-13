#include<stdio.h>
#include <stdlib.h>
int main()
{
     int n,m;
     m = 6;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == 0){
        printf("memory not allocate");
        return 0;
    }
    printf("enter the no of numbers to input :");
    scanf("%d",&n);
    printf("enter the input : ");
    for(int i = 0; i < n; ++i)
    {
        scanf("%p",ptr + i);
    }
    
    
    printf("input values \n");
    for(int i= 0; i<n;++i)
        {
            printf("%p\n",*(ptr + i));
        }
 
 
ptr = realloc(ptr,m*sizeof(int));
        for(int i = 0; i<m; ++i)
        {
            printf("%p\n",(ptr+i));
        }
free(ptr);
    return 0;
}
