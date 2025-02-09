#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int stackarr[MAX];
int first =-1;
void push (int data )
{
    int i;
    first +=1;
    for(i=first;i>0;i--)
    {
        stackarr[i] = stackarr[i-1];
    }
    stackarr[0] = data;
}
int pop()
{
  int value;
  value = stackarr[0];
  for(int i = 0; i<first;i++)
  {
      stackarr[i] = stackarr[i+1];
  }
  first -=1;
  return value;
}
void print()
{
    if(first == -1)
    {
        printf("stack overflow");
        exit(1);
    }
    for(int i = 0;i<=first;i++)
    {
        printf("%d ",stackarr[i]);
    }
     printf("\n");A
}

int main()
{
     int data;
     push(42);
     push(23);
     push(100);
     data = pop();
     print();
     return 0;
}
