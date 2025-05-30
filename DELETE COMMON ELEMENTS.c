#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head = NULL;
void insertend(int data)
{
     struct node * nn = (struct node *)malloc(sizeof(struct node));
     nn -> data =data;
     nn -> next = NULL;
     if(head == NULL)
     {
          head = nn;
          return;
     }
     struct node* temp = head;
     while(temp -> next != NULL)
     {
          temp = temp ->next;
     }
     temp -> next = nn;
}
void display(struct node *list)
{
     if(list == NULL)
          printf("EMPTY");

     struct node* temp = list;
     while(temp != NULL)
     {
          printf("%d->",temp -> data);
          temp = temp -> next;
     }
     printf("NULL\n");
}

void commondelete()
{
     struct node *current= head;
     struct node *index = NULL;
     struct node *pre = NULL;
     while(current!= NULL && current->next != NULL)
     {
          pre = current;
          index = current -> next;
          while(index != NULL)
          {
               if(current -> data == index -> data)
               {
                    pre -> next = index -> next;
                    free(index);
                    index = pre -> next;
               }
               else {
                    pre = index;
                    index = index -> next;
               }

          }
          current = current -> next;

     }
}
int main()
{
     insertend(85);
     insertend(56);
     insertend(85);
     display(head);
     commondelete();
     display(head);
}
