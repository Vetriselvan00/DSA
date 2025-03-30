#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void insert_beg(struct node **head,int x)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=(*head);
    (*head)=ptr;

}

void insert_mid(struct node **head,int x,int pos)

{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    struct node *temp=(*head);
    int i=0;
    while(i<pos)
    {
        temp=temp->next;
    i++;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}


void insert_end(struct node**head,int a)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = a;
    ptr->next = NULL;
    if((*head ) == NULL)
        (*head) = ptr;
    else
    {
      struct node *temp = (*head);
      while((temp -> next) != NULL)
          temp = temp -> next;
      temp -> next = ptr;
      } 

}

void del_mid(struct node *head,int pos)
  {
    if(head==NULL)
        printf("The linked list is not created");
    else
    {
        int i=1;
        struct node *temp=head;
        struct node *ptr;

    while(i<pos)
        {
            ptr=temp;
            temp=temp->next;
   i++;
        }
    ptr -> next=temp -> next;
    }
}

void del_beg(struct node**head)
{
    if(head == NULL)
    printf("the linkedlist is not creategd\n");
    else
    {
      struct node*temp = (*head);
      (*head) = temp -> next;
    }
}
void del_end(struct node*head)
{
    if((head)==NULL)
    printf("the linked list is not created\n");
    else
    {
        struct node*temp = head;
        struct node *ptr;
          while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        if(temp->next==NULL)
            ptr->next=NULL;

        }

    ptr->next=NULL;
    }
}

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
     int a,one,n,loc,pos,target,choice=0;
   struct node* head=NULL;
   printf("Enter the number of node :");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {

     printf("Enter the data:");
     scanf("%d",&one);
     insert_end(&head,one);
   }
   
   while(choice!=9)
   {
         printf("\n MAIN MENU\n");
         printf("1.INSERT AT BEGINNING\n");
         printf("2.INSERT AT MID\n");
         printf("3.INSERT AT END\n");
         printf("4.DELETE AT BEGINING\n");
         printf("5.DELETE AT MID\n");
         printf("6.DELETE AT END\n");
         printf("7.SEARCHING\n");
         printf("8.DISPLAY\n");
         printf("9.EXIT\n");
         
      printf("Enter the option: ");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("Enter the data:");
     scanf("%d",&a);
        insert_beg(&head,a);
        break;

    case 3:
     printf("Enter the data:");
     scanf("%d",&a);
        insert_end(&head,a);
        break;
    case 2:
        pos=0;
     printf("Enter the location to insert:");
     scanf("%d",&pos);
     printf("Enter the data:");
     scanf("%d",&a);
        insert_mid(&head,a,pos);
        break;
    case 4:
        del_beg(&head);
        break;
    case 6:
        del_end(head);
        break;
    case 5:
        loc=0;
     printf("Enter the location to delete:");
     scanf("%d",&loc);

        del_mid(head,loc);
        break;
    case 8:
      ll_transverse(head);
      break;
    case 7:
    printf("Enter the target:" );
     scanf("%d\n",&target);
        search(head,target);
        break;
    default:
        printf("Invalid choice");
  }
    }
    return 0;
}
