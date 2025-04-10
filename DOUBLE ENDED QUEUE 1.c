#include<stdio.h>
# define MAX 50
int f = -1, r = -1;
int x;
int deque[MAX];
int isfull(int f,int r)
{
    if ((f==0 && r == MAX -1 )||(f==r+1))
     return 1;
     else
     return 0;
}
int isempty (int f,int r)
{
      if(f==-1||r==-1)
      return 1;
      else
      return 0;
}
void insert_front(int ele,int f,int r)
{
    if(f==0)
    printf("Front side queue is overflow ");
    else if(f==-1)
    f=r=0;
    else
    f--;
    deque[f] = ele;
    printf("Inserted element to front %d\n",ele);
}
void insert_rear(int ele,int f,int r)
{
    if (r == MAX - 1)
    {
    printf("Rear Overflow\n ");
    }
    else if(r==-1)
    {
        r = f = 0;
        deque[r] = ele;
    }
    else
    {
    r++;
    deque[r] = ele;
    }
    printf("Inserted element to rear %d\n",ele);
  }


void delete_front(int f,int r)
{
    if(f==-1)
    printf("front Underflow\n");
    else if(f==r)
    f=r=-1;
    else
    f++;
    deque[f] = r;
}
void delete_rear(int f,int r)
{
    if(r==-1)
    printf("Rear Underflow\n");
    else if(r==f)
    {
     x = deque[r]; 
     f = r=-1;
    }
    else
    r--;
}


int main()
{
    int choice = 0;
    int f = -1, r = -1;
    insert_front(15,f,r);
    insert_front(89,f,r);
    insert_rear(23,f,r);
    delete_front(f,r);
    delete_rear(f,r);
    
  

}
