#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
void printstack()
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
     printf("\n");
}
bool isempty(int top)
{
    if(top == -1)
        return true;
    else
        return false;
}
bool isfull(int top,int size)
{
    if(top == size-1)
        return true;
    else
        return false;
}
int main()
{
     int a,b,c,d,data;
     int choice = 0;
    int size = (sizeof(stackarr)/sizeof(stackarr[0]));
    printf("%d",size);
      while(choice != 6)
     {
      printf("1.push\n");
      printf("2.pop\n");
      printf("3.Trasverse stack\n");
      printf("4.check Stack is empty or not\n");
      printf("5.check Stack is full or not\n");
      printf("6.Exit\n");   
      printf("enter your choice\n");
      scanf("%d",&choice);
         switch(choice)
         {
     case 1:
         printf("enter the no element push ");
         scanf("%d",&a);
         if(a > MAX)
        printf("Stack full\n");
     else
     printf("enter the number to push:");
     for(int i = 1; i<=a;i++)
     {
          scanf("%d",&b);
          push(b);
     }
     
     break;
     case 2:
            data = pop();
            break;
     case 3:
          printstack();
          break;
             case 4:
                 {
                     if(isempty(first))
                         printf("the stack is empty\n");
                     else
                         printf("the stack is not empty\n");
                     break;
                 }
             case 5:
                 {
                     if(isfull(first,size))
                         printf("full\n");
                     else
                         printf("not full\n");
                     break;
                 }  
     }
     }
     return 0;
}
