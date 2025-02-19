#include<stdio.h>
#include<stdbool.h>
# define MAX 5
int r = -1, f=-1;
int Q[MAX];
int (isfull())
{   
    
     if((f=0  && r==MAX -1)||(r=f=-1)) 
     return 1;
     else
     return 0;
}
int (isempty())
{
    if(r=f=-1)
    return 1;
    else
    return 2;
}
void circular_enque(int *Q,int x)
{
    if(isfull())
        printf("Full\n");
    else
    {
        if(r==-1)
        r=f=0;
    }
     if(r==MAX - 1)
    {
         r=0;
         r++;
         Q[f] = x;
    }
    }
int circular_deqeue()
{
    if(isempty(Q))
    printf("Empty\n");
    else
    {
        if(f==r)
             f=r=-1;
        else if(f == MAX -1)
             f = 0;
        else
             f++;
        return Q[f];
    }
}
int main()
{

     int x, val;
     int choice,total;
     while(choice!=6)
     {
         choice = 0;
         printf("enter your choice      \n");
         printf("1.Enqeue               \n");
         printf("2.Deqeue               \n");
         printf("3.Check full           \n");
         printf("4.Check empty          \n");
         printf("5.Peek top             \n");
         printf("6.Exit                 \n");
         scanf("%d\n",&choice);
         switch(choice)
         {
              case 1:
              {
              printf("Enter the element: \n");
              scanf("%d\n",&x);
              circular_enque(Q,x);
              break;
              }
              case 2:
              {
                  
                  printf("%d",circular_deqeue());
              }
              case 3:
              {
                  if(isfull(Q))
                  printf("The circular Que is full\n");
                  else
                  printf("The circular Que is empty\n");
                  break;
              }
              case 4:
              {
                  if(isempty(Q))
                  printf("Qeue is empty\n");
                  else
                  printf("Qeue if full\n");
                  break;
              }
         }
     }
     return 0;
}
