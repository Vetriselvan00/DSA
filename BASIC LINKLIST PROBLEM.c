#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node * next;
 };

 struct node *head = NULL;
 void insertbeg(int data)
 {
      struct node *ptr = (struct node*)malloc(sizeof(struct node));
      ptr -> data = data;
      ptr -> next = head;
      head = ptr;
 }
 void insertend(int data)
 {
      struct node*ptr = (struct node*)malloc(sizeof(struct node));
      ptr -> data = data;
      ptr -> next = NULL;

      if(head == NULL)
      {
           head = ptr;
           return;
      }
      struct node *temp = head;
      while(temp -> next != NULL)
      {
          temp = temp -> next;
      }
      temp -> next =  ptr;
 }

 void display()
 {
      struct node *temp = head;
      while(temp!= NULL )
      {
           printf("%d ->",temp -> data);
           temp = temp -> next;
      }
      printf("NULL\n");
 }
 void search(int target)
 {
      struct node *temp = head;
      int pos = 1;
      int found = 0;
      if(temp == NULL)
          printf("EMPTY");
      while(temp != NULL)
      {
           int m = temp -> data;
           if(target == m)
           {
           printf("TARGET FOUND %d IN POSITION OF %d ",target,pos);
           found = 1;
           break;
      }
      temp = temp ->next;
      pos++;
      }
      if(found != 1)
          printf("TARGET NOT FOUND");
 }
 int main()
 {
      insertbeg(56);
      insertbeg(88);
      insertbeg(80);
      insertend(50);
      insertend(100);
      display();
      search(0);

 }
