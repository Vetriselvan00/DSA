#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node* getnode(){
      return (struct node*)malloc(sizeof(struct node));
};
void push(struct node**top,int ele)
{
    struct node*ptr = getnode();
    ptr->data = ele;
    ptr -> next = *top;
    *top = ptr;
}
void pop(struct node**top)
{
    if(*top == NULL)
    printf("Stack is empty\n");
    else
    {
          struct node *temp = *top;
          *top = (*top) -> next;
          free (temp);
    }
}
void display(struct node*top)
{
    struct node *temp = top;
    if(top == NULL){
    printf("Stack is empty\n");
    return;
    }
    else
    { 
        while(temp != NULL)
        {
            printf("%d\n",temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}
void peek_top(struct node*top)
{
    if(top == NULL){
    printf("Stack is empty\n");
    return;
    }
    else
    {
        printf("Top of the element = %d\n",top-> data);
        
    }
    
}
int main()
{
    struct node*top = NULL;
    int choice ,data, element,n;
    printf("Enter the number of node = ");
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        printf("Enter the data in stack = ");
        scanf("%d",&data);
        push(&top,data);
    }
    while(choice!= 5)
    {
        printf("MAIN MENU \n");
        printf("1.PUSH\n ");
        printf("2.POP\n");
        printf("3.PEEK TOP\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                 printf("Enter the element to push = ");
                  scanf("%d", &element);
                push(&top, element);
                 break;
            case 2:
                pop(&top);
                break;
            case 3:
                peek_top(top);
                break;
            case 4:
                display(top);
                break;
            case 5:
                printf("Exiting...\n");
                break;
                default:
                printf("invalid choice");
        }
    }
    return 0;
}
