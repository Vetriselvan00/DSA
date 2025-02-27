#include<stdio.h>
# define MAX 5
int front = -1,rear = -1;
struct pqueue{
   
    char data;
     int p;
};
int isfull()
 {
     if(rear==MAX-1)
     return 1;
     else
     return 0;
 }
 int isempty()
 {
     if(front==-1||rear == -1)
     return 1;
     else
     return 0;
 }
int penqueue(struct pqueue pq[],char *rear,
int *front)
{
    int num;
    char alpha; 
    if(isfull())
    printf("full");
    else if(isempty())
    {
    front = 0;
    rear = 0;
    }
    else
    {
     pq[*rear].p=alpha;
        pq[*rear].data=num;
        (*rear)++;
    }
}
void pdequeue( struct pqueue pq[],int *front,int *rear)
{
    int temp;
    int pos;
    if(isempty())
    printf("Empty\n");
    else
    {
        int min = pq[0].p;
        for (int i;i<*rear;i++)
        {
        pq[i].p = pq[i+1].p;
        pq[i].data = pq[i+1].data;
        }
        (*rear)--;
    }
    printf("the deleted element %c\n",temp);

}
void display(struct pqueue pq[],int front,int rear )
{
    if(isempty())
    printf("queue is empty\n");
    else
    {for(int i = front;i<=rear;i++)
    printf("hii  %c",pq[i].data);
}
}










int main()
{
    int choice =0;
    struct pqueue pq[MAX];
    while(choice != 5)
    {
        printf(".......Enter your choice.....\n");
        printf("1.priority enqueue.....\n");
        printf("2.priority Dequeue.....\n");
        printf("3.Check priority queue is full......\n");
        printf("4.Display.....\n");
        printf("5.Exit...\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
             char data;
             int p;
             printf("enter the data: ");
             scanf(" %c",&data);
             printf("\n enter the priority: ");
             scanf("%d",&p);
             penqueue(pq,&data,&p);
             break;
             
             case 2:
             pdequeue(pq,&front,&rear);
             break;
             
             case 3:
             if(isfull())
             printf("the pq is full\n");
             else
             printf(" The pq is empty\n");
             break;
             
             case 4:
              display(pq,front,rear);
             break;
             
             
        }
    }
    return 0;
}
