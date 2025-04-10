#include<stdio.h>
int main()
{
    int a,b,temp,x,y;
    a = 23; 
    b = 45;
    temp = a;
    a = b;
    b = temp;
    printf("%d\n%d\n",a,b);
    
    
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d \n %d\n",a,b);

}
