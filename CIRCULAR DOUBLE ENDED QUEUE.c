#include<stdio.h>
#define MAX 10
void insertRear(int queue[], int *front, int *rear)
{
    int num;
    printf("Enter the number to be inserted at rear: ");
    scanf("%d", &num);
    if ((*rear + 1) % MAX == *front) 
    {
        printf("Overflow\n");
    } else 
    {
        if (*front == -1 && *rear == -1) 
        {
            *front = *rear = 0;
        } else 
        {
            *rear = (*rear + 1) % MAX;
        }
        queue[*rear] = num;
        printf("The number %d is inserted at position %d\n", queue[*rear], *rear);
    }
}
void insertFront(int queue[], int *front, int *rear)
{
    int num;
    printf("Enter the number to be inserted at front: ");
    scanf("%d", &num);
    if ((*rear + 1) % MAX == *front) 
    {
        printf("Overflow\n");
    } else 
    {
        if (*front == -1 && *rear == -1) 
        {
            *front = *rear = 0;
        } else
        {
            *front = (*front - 1 + MAX) % MAX;
        }
        queue[*front] = num;
        printf("The number %d is inserted at position %d\n", queue[*front], *front);
    }
}
void deleteFront(int queue[], int *front, int *rear)
{
    if (*front == -1) 
    {
        printf("Underflow\n");
    } else 
    {
        printf("Deleted number: %d\n", queue[*front]);
        if (*front == *rear) 
        {
            *front = *rear = -1;
        } else 
        {
            *front = (*front + 1) % MAX;
        }
    }
}
void deleteRear(int queue[], int *front, int *rear)
{
    if (*rear == -1) 
    {
        printf("Underflow\n");
    } else 
    {
        printf("Deleted number: %d\n", queue[*rear]);
        if (*front == *rear) 
        {
            *front = *rear = -1;
        } else 
        {
            *rear = (*rear - 1 + MAX) % MAX;
        }
    }
}
void display(int queue[], int front, int rear)
{
    if (front == -1) 
    {
        printf("Empty queue\n");
    } else 
    {
        int i = front;
        printf("The queue is: ");       
        while (i != rear) 
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]); 
    }
}
int main()
{
    int option;
    int queue[MAX], rear = -1, front = -1;
    do {
        printf("\n............The options are given below................");
        printf("\n1. Insert at rear");
        printf("\n2. Insert at front");
        printf("\n3. Delete from front");
        printf("\n4. Delete from rear");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter your option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                insertRear(queue, &front, &rear);
                break;
            case 2:
                insertFront(queue, &front, &rear);
                break;
            case 3:
                deleteFront(queue, &front, &rear);
                break;
            case 4:
                deleteRear(queue, &front, &rear);
                break;
            case 5:
                display(queue, front, rear);
                break;
            default:
                printf("INVALID OPTION , TRY AGAIN .....\n");
        }
    } while(option != 6);  
    return 0;
}
