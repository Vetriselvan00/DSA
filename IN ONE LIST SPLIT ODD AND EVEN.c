#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};
struct node * head = NULL;
struct node *head1 = NULL;
struct node *head2 = NULL;
void insertend(struct node ** list,int data)
{
     struct node *nn = (struct node*)malloc(sizeof(struct node));
     nn -> data =  data;
     nn -> next = NULL;

     if(*list == NULL)
     {
          *list= nn;
          return ;
     }
     struct node *temp = *list;
     while(temp -> next != NULL)
     {
          temp = temp -> next;
     }
     temp -> next = nn;
}


void display(struct node * list)
{
     struct node *temp = list;
     while(temp != NULL)
          {
          printf("%d ->",temp -> data);
          temp = temp -> next;
     }
     printf("NULL\n");
}

 void evenorodd()
 {
        struct node *temp= head;
        while(temp != NULL)
        {
             if(temp -> data % 2 == 0)
                     insertend(&head1,temp -> data);
             else
                      insertend(&head2,temp -> data);
          temp = temp -> next;
        }
 }
int main()
{
      int n,val;
     printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
         insertend(&head,val);
}
display(head);
evenorodd();
display(head1);
display(head2);
return 0;
}
