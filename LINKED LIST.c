#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void ll_transverse(struct node*head)
{
    while(head!= NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

void search(struct node*head,int target)
{
    int found = 0;
    struct node*temp = head;
    temp = head;
    while(temp != NULL)
    {
        if(temp->data == target)
        printf("THE GIVEN ELEMENT FOUND %d\n",target);
       return;
        temp = temp -> next;
    }
    printf("Element not found: %d\n", target);
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 19;
    head -> next = first;
    
    first -> data = 05;
    first -> next = second;
    
    second -> data = 20;
    second -> next = third;
    
    third -> data = 07;
    third -> next = NULL;
    
    ll_transverse(head);
    int target = 190;
    search(head,target);
    
    free(head);
    free(first);
    free(second);
    free(third);
    
    return 0;
}
