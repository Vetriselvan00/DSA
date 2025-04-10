#include<stdio.h>
#define MAX 10
void display(int stack[],int *top)
{
	if(*top==-1)
	 printf("STACK IS EMPTY");
		
	else
	{
		for(int i=0;i<=*top;i++)
		{
			printf("%d ",stack[i]);
		}
	}
}


void push(int stack[],int *top)
{ 
  int value=0;
  printf("ENTER THE VALUE TO PUSH :");
  scanf("%d",&value);
  if(*top==MAX-1)
  	printf("stack is full \n");
  else
  { 	
  	stack[++(*top)]=value;
  	printf("%d IS PUSHED",value); 	
  }
  printf("\n");
  printf("In stack :");
  display(stack,&(*top));
  
}


void pop(int stack[],int *top)
{
	if(*top==-1)
		printf("STACK IS EMPTY");
	else
	{
		printf("element removed %d",stack[*top]);
		(*top)--;
	}
	printf("\n");
	printf("In stack :");
	display(stack,&(*top));
}


void peak(int stack[],int *top)
{
	if(*top==-1)
		printf("STACK IS EMPTY");
	else
		printf("TOP IS %d",stack[*top]);
}


int main()
{
	int stack[MAX];
	int choice=0,top=-1;
	while(1)
	{
		printf("\n|-------------------------------------|\n");
		printf("|        MAIN MENU                    |\n");
		printf("|         1.PUSH                      |\n");
		printf("|         2.POP                       |\n");
		printf("|         3.PEAK                      |\n");
		printf("|         4.DISPLAY                   |\n");
		printf("|         5.EXIT                      |\n");
		printf("|-------------------------------------|\n");
		printf(" ENTER YOUR CHOICE=");
		scanf("%d",&choice);		
		
		switch(choice)
		{
			 case 1:
			  push(stack,&top);
			  break;
	 		 case 2:
			  pop(stack,&top);
			  break;
			 case 3:
			 peak(stack,&top);
			 break;
	 		 case 4:
			  display(stack,&top);
			  break;
			 case 5:
			  printf("THANK YOU.....");
			  return 0;
	 		default: 
			printf("INVALID CHOICE");
		}
	}
return 0;
}
