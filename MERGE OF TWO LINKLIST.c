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
struct node *mergetwolist( )
{
     struct node *merge = NULL;
     struct node dummy;
     struct node * tail = &dummy;
     dummy.next = NULL;
     struct node*l = head;
     struct node *l1 = head1;
     while(l != NULL && l1 != NULL )
     {
          if(l -> data < l1 -> data)
          {
               tail -> next =l;
               l = l -> next;
          }
          else
          {
               tail -> next = l1;
               l1 = l1 -> next;
          }
          tail = tail -> next;
     }
          if(l != NULL)
               tail -> next = l;
          else
               tail -> next = l1;
return dummy.next;
     }

int main()
{
          insertend(23);
          insertend(25);
          insertend(27);
          display(head);
          insertend1(24);
          insertend1(26);
          display(head1);
       struct node *merged =   mergetwolist();
          display(merged);
          return 0;
}
