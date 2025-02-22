
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define MAX 5
int q[MAX];
int r = -1;
int f = -1;
int x,value;
int isfull()
 {
     if(r==MAX-1)
     return 1;
     else
     return 0;
 }
 int isempty()
 {
     if(f==-1)
     return 1;
     else
     return 0;
 }
int enqueue(int q,int r)
{
    if(isfull())
    printf("Q full\n");
    else
        r = f = 0;
        r ++;
        q[r] = x;
return x;
}
 int dequeue(int q)
 {
     if (isempty())
          printf("Q is empty\n");
     else
       {
          if(r==f)
           r=-1,f=-1;
           value = q[f];
       
     else
        f++;
       }
return value;
 }
 
int main()
{
  int choice = 0,val;
  int a,b;
  while(choice!=5)
  {
      printf("Enter the choice\n");
      printf("1.Enqueue\n");
      printf("2.Dequeue\n");
      printf("3.Check Full\n");
      printf("4.Check Empty\n");
      printf("5.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
          printf("Enter the Enqueue elements: \n");
          scanf("%d\n",&val);
          a = enqueue(val,r);
          printf("%d\n",a);
          break;
        case 2:
           b = dequeue();
           printf("%d\n",b);
        case 3:
          if(isfull())
          printf("The linear Q is full \n");
          else
          printf("The linear Q is not full \n");
          break;
        case 4:
          if(isempty())
          printf("The linear Q is empty \n");
          else
          printf("The linear Q is not empty \n");
          break;
      }
      
  }
  return 0;
}
