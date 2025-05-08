#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*head = NULL;

void insert(int value)
{
    struct node * nn = (struct node*)malloc(sizeof(struct node));
    nn -> data = value;
    nn -> next = head;
    head = nn;
}

void display()
{
    struct node* temp = head;
     if (head == NULL) {
        printf("The list is empty!\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%d ->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

void cycle()
{
    struct node *ptr = head;
    struct node *temp = NULL;
    int found = 0;
    while(ptr != NULL && ptr-> next!= NULL )
    {
        temp = ptr -> next;
        while(temp != NULL){
        if(ptr-> data == temp-> data)
        {
        found = 1;
        }
        temp = temp -> next;
        }
    ptr = ptr -> next;
}
    if(found == 1)
        printf("THE CYCLE FORMED\n");
    else
        printf("THE CYCLE IS NOT FORMED");

}
int main()
{
    int n,value;
    printf("ENTER THE NO.OF ELEMENTS TO INSERT : ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        printf("ENTER THE ELEMENTS :");
        scanf("%d",&value);
        insert(value);
    }
    display();
    cycle();
}
