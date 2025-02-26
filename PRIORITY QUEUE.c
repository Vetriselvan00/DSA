#include<stdio.h>
# define MAX 5
int f = -1, r = -1;
struct pqueue{
    int p;
    char data;
};
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
int penqueue(struct pqueue pq[],int *rear,int *front)
{
    if(isfull())
    printf("full");
    else if(isempty())
    {
    f = 0;
    r = 0;
    }
    else
    r++;
    pq[*rear].let=data;
        pq[*rear].pri=p;
        (*rear)++;
}
    










int main()
{
    int choice =0;
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
             penqueue(pqueue,&f,&r);
             break;
        }
    }
}
