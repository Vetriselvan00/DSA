#include<stdio.h>
#define MAX 3
int q[MAX];
int r=-1,f=-1;
int isempty()
{
    if(r==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if((f==0 && r==MAX-1)||(r==f-1))
        return 1;
    else
        return 0;
}
void enqueue(int val)
{
    if(isfull())
    {
        printf("STACK IS FULL");
    }
    else
    {
        if(r==-1)
        r=f=0;
    else if(r==MAX-1)

        r=0;
    else
        r++;
    
     q[r]=val;
         printf("ENQUEUED=%d",val);
    }
}
int dequeue()
{
    int val;
    if(isempty())
    {
        printf("THE STACK IS EMPTY");
        return -1;
    }
    else
    {
        val=q[f];
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
void display() {
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
            printf("%d ", q[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", q[r]);
    }
}
int main()
{
    int choice=0,val;
    while(choice!=4)
    {
        printf(" \n    MAIN MENU      ");
        printf(" \n    1.ENQUEUE      ");
        printf(" \n    2.DEQUEUE      ");
        printf(" \n    3.DISPLAY      ");
        printf(" \n    4.EXIT         ");
        printf("\n");
        printf("enter ur choice=");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("ENTER THE VALUE TO ENQUEUE=");
            scanf("%d",&val);

            enqueue(val);
            break;
        case 2:
            val= dequeue();
            if(val!=-1)
                printf("DEQUEUED=%d",val);
            break;
        case 3:
           display();
            break;

        case 4:
            printf("THANKYOU.....");
            break;
        default:
            printf("INVALID CHOICE");
        }
    }
return 0;
}
