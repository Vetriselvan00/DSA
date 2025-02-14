#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define MAX 5
int que[MAX];
int rear = -1;
int front = -1;
int x,value;
int enqueue(int q,int rear)
{
    if(rear == -1)
        rear = front = 0;
    else
        rear ++;
    q[rear] = x;
}
 int dequeue(int q)
 {
    // value = q[front];
     front++;
     return value;
 }
int main()
{
    int q;
    int rear = -1;
    q = 12,33,45,66;
    printf("the push %d\n",enqueue(q),rear);
    printf("the pop %d\n",dequeue(q));
}
