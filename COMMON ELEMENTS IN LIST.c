#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next ;
};

struct node *head = NULL;
struct node * head1 = NULL;
 void insertend(int data)
 {
      struct node * nn = (struct node *)malloc(sizeof(struct node));
      nn -> data = data;
      nn -> next = NULL;

      if(head == NULL)
      {
           head = nn;
           return;
      }
      struct node *temp = head;
      while(temp ->next!= NULL)
      {
           temp = temp -> next;
      }
      temp -> next = nn;
            }
void display(struct node *list)
{
     if(list== NULL)
     {
          printf("EMPTY");
     }
     struct node *temp = list;
     while(temp!=NULL)
     {
          printf("%d->",temp -> data);
          temp = temp -> next;
}
printf("NULL\n");
}

 void insertend1(int data)
 {
      struct node * nn = (struct node *)malloc(sizeof(struct node));
      nn -> data = data;
      nn -> next = NULL;

      if(head1 == NULL)
      {
           head1= nn;
           return;
      }
      struct node *temp = head1;
      while(temp ->next!= NULL)
      {
           temp = temp -> next;
      }
      temp -> next = nn;
            }
void printcommon()
{
struct node *temp = head;
struct node *temp1 = head1;
while(temp!=NULL )
{
     temp1 = head1;
     while(temp1!= NULL)
     {
          if(temp ->data == temp1 -> data)
          {
               printf("%d ->",temp -> data);
               free(temp-> data);
               printf("%d ->",temp-> data);
               break;
          }
          temp1 = temp1-> next;
     }
     temp = temp -> next;
}
printf("NULL");
}

int main()
{
          insertend(23);
          insertend(25);
          insertend(27);
          display(head);
          insertend1(25);
          insertend1(23);
          display(head1);
          printf("common elements");
          printcommon();

          }
