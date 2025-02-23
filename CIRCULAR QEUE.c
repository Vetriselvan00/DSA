#include<stdio.h>
#include<stdbool.h>
# define MAX 5
int r = -1, f=-1;
int Q[MAX];
int (isfull())
{   
    
     if((f==0  && r==MAX -1)||(r==f-1)) 
     return 1;
     else
     return 0;
}
int (isempty())
{
    if(r=-1)
    return 1;
    else
    return 0;
}
void circular_enque(int val)
{
    if(isfull())
        printf("Full\n");
    else
    {
        if(r==-1)
        r=f=0;
    
     else if(r==MAX - 1)
    
         r=0;
     else
        r++;
    Q[r] = val;
    printf("Enquied :%d\n",val);
    }
    }
int circular_deqeue()
{    
    int val;
    if(isempty(Q))
    printf("Empty\n");
    else
    {
        val=Q[f];
        if(f==r){
           f=r=-1;
           }
         if(f==MAX-1)
         {
         f=0;
         }
        else{
            f++;
            }
             return val;
    }
   
}
void display()
{
    if (isempty())
        {
        printf("Queue is Empty\n");
        }
    else
        {
        int i = f;
        printf("Queue elements: ");
        while (i != r)
         {
            printf("%d ", Q[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", Q[r]);
    }
}
int main()
{

     int x, val;
     int choice,total;
     while(choice!=7)
     {
         choice = 0;
         printf("enter your choice      \n");
         printf("1.Enqeue               \n");
         printf("2.Deqeue               \n");
         printf("3.Check full           \n");
         printf("4.Check empty          \n");
         printf("5.Display             \n");
         printf("6.Exit                 \n");
         scanf("%d\n",&choice);
         switch(choice)
         {
              case 1:
              
              printf("Enter the element: ");
              scanf("%d",&x);
              circular_enque(x);
              break;
              
              case 2:
              
                  
                  printf("%d",circular_deqeue());
              
              case 3:
              
                  if(isfull())
                  printf("The circular Que is full\n");
                  else
                  printf("The circular Que is empty\n");
                  break;
              
              case 4:
              
                  if(isempty())
                  printf("Qeue is empty\n");
                  else
                  printf("Qeue if full\n");
                  break;
              
              case 5:
              display();
              break;
         }
     }
     return 0;
}
