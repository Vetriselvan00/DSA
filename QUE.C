#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define MAX 5
int q[MAX];
int r = -1,f = -1;
int isfull()
 {
     if(r==MAX-1)
     return 1;
     else
     return 0;
 }
 int isempty()
 {
     if(f==-1 && r == -1)
     return 1;
     else
     return 0;
 }
void enqueue(int val)
{
    if(isfull())
    printf("Q full\n");
    else if (isempty())
        r = f = 0;
    else
        r = r +1;
     q[r] = val ;
printf("Enquied : %d\n",val);
}
 void dequeue()
 {
     int value;
     value = q[f];
     if (isempty())
          printf("Q is empty\n");
     else if(r==f)
           r=-1,f=-1;
     else
        f++;
    
    printf("Dequeue %d\n",value);
 }
 void display() {
    if (isempty())
        printf("Queue is Empty\n");
    else
        {
        int i = f;
        printf("Queue elements: ");
        while (i != r)
         {
            printf("%d ", q[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", q[r]);
    }
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
      printf("3.Check the queue Full or empty\n");
      printf("4.Display \n");
      printf("5.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1:
          printf("Enter the Enqueue elements: ");
          scanf("%d",&val);
           enqueue(val);
         
          break;
        case 2:
           dequeue();
           break;
        case 3:
          if(isfull())
          printf("The linear Q is full \n");
          else
          printf("The linear Q is Empty \n");
          break;
        case 4:
         display();
          break;
      }
      
  }
  return 0;
}
