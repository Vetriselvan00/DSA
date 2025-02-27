#include<stdio.h>
struct pqueue
{
    char let;
    char pri;
};
int enqueue(struct pqueue pq[],int *front,int *rear,int max)
{
    char data;
    int p;
    printf("enter the data: ");
    scanf(" %c",&data);
    printf("\n enter the priority: ");
    scanf("%d",&p);

    if(*front==-1||*rear==-1)
    {
            *front=0;
            *rear=0;
    }
    if(*rear==(max-1))
        printf("queue full");
    else
    {
        pq[*rear].let=data;
        pq[*rear].pri=p;
        (*rear)++;
    }
}

int dequeue(struct pqueue pq[],int *front,int *rear)
{
    int temp;
    int pos;
    if(*front==-1||*rear==-1)
    {
        printf("queue empty");
        return 0;
    }
    if(*front==0&&*rear==0)
    {
        temp=pq[*rear].let;
        *front=-1;
        *rear=-1;
    }
    else
    {
        int min=pq[0].pri;
        pos=0;
        for (int i=1;i<*rear;i++)
        {
            if(pq[i].pri<min)
            {
                min=pq[i].pri;
                pos=i;
            }
        }
        temp=pq[pos].let;
        for (int i=pos;i<*rear;i++)
        {
            pq[i].let=pq[i+1].let;
            pq[i].pri=pq[i+1].pri;
        }
        (*rear)--;
    }
    printf("the deleted element is %c",temp);
return 0;
}
void display(struct pqueue pq[],int front,int rear)
{
    if(front==-1||rear==-1)
        printf("queue empty");
    else
    {
    for (int i=front;i<=rear;i++)
        printf("%c",pq[i].let);
    }
}
int main()
{
    int front=-1,rear=-1;
    struct pqueue pq[5];
    int choice,max=5;
    while(choice!=4)
       {
    printf("\n----enter the choice-----\n---enqueue - 1---\n---dequeue - 2---\n---display - 3---\n---exit - 4---\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        enqueue(pq,&front,&rear,max);
        break;
    case 2:
        dequeue(pq,&front,&rear);
        break;
    case 3:
        display(pq,front,rear);
        break;
    default:
        break;
    }
        }
}