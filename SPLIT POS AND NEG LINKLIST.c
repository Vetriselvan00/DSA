#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next ;
};
 struct node * head = NULL;
struct node *head1 = NULL;
struct node *head2 = NULL;
void insertend( struct node **list,int data)
{
     struct node * nn = (struct node*)malloc(sizeof(struct node));
     nn -> data = data;
     nn -> next = NULL;
     if(*list == NULL)
     {
          *list = nn;
          return;
     }
     struct node *temp = *list;
     while(temp -> next != NULL)
     {
          temp = temp -> next;
     }
     temp -> next = nn;
}
void display(struct node *list)
{
     if(list == NULL)
          printf("empty");
     struct node* temp = list;
     while(temp != NULL)
     {
          printf("%d ->", temp -> data);
          temp = temp -> next;
     }
     printf("NULL\n");
}
void split()
{
     struct node *temp = head;
     while(temp != NULL)
     {
          if(temp -> data >= 0)
               insertend(&head1,temp -> data);
          else
               insertend(&head2,temp-> data);
     temp = temp -> next;
     }
}
int main()
{
     int n,value;
     printf("ENTER THE NO.OF ELEMENTS TO INSERT  ");
     scanf("%d",&n);
     for(int i = 0; i<n; i++)
     {
          printf("ENTER THE ELEMENTS %d\n",i+1);
          scanf("%d",&value);
          insertend(&head,value);
     }
     display(head);
     split();
     display(head1);
     display(head2);
}
