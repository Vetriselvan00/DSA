#include<stdio.h>
# define MAX 50

int deque[MAX];
int isfull(int *f,int *r)
{
    if ((f==0 && r ==MAX -1 )|| (f==r+1))
     return 1;
     else
     return 0;
}
int isempty (int *f,int *r)
{
      if(f==-1||r==-1)
      return 1;
      else
      return 0;
}
void insertfront(int *r,int ele,int *f)
{
    if(isfull)
    printf("REAR OVERFLOW");
    return ;
    if(f == -1)
    {
        f = 0;
        r = 0;
    }
    else if (f == 0){
        f = MAX -1;
    } else {
        f = f +1;
    }
     deque[f] = ele;
    printf("Inserted element %d",ele);
}



int main()
{
    int choice = 0;
     int f = -1, r = -1;
    insertfront(&r,15,&f);
  

}
