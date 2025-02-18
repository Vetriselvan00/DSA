#include<stdio.h>
#include<string.h>
struct student
{
  char name[50];
  int age;
  char gendre[20];
  int mark[3];
  char grade[10];
};
char grd(int mark,char* arr,int *pass,int *fail)
{
     if(mark<=100&&mark >=90)
      {
      (*pass)++;
      strcpy(arr,"O");
      }
      else if(mark<90&&mark >=80)
         {
         (*pass)++;
       strcpy(arr,"A+");
         }
      else if(mark<80&&mark >=70)
         {
         (*pass)++;
         strcpy(arr,"A");
         }
         else if(mark<70&&mark >=60)
         {
         (*pass)++;
          strcpy(arr,"B+");
         }
      else if(mark<60&&mark >=50)
         {
         (*pass)++;
        strcpy(arr,"B");
         }
      else if(mark<50&&mark >=0)
         {
         (*fail)++;
         strcpy(arr,"F");
         }
      else
         {
        strcpy(arr,"I");
         }
   }
int delete(struct student s[],int pos,int *n)
{
   for(int i=pos;i<(*n);i++)
   {
     strcpy(s[i-1].name,s[i].name);
     s[i-1].age=s[i].age;
     strcpy(s[i-1].gendre,s[i].gendre);
     strcpy(s[i-1].grade,s[i].grade);
     for(int j=0;j<3;j++)
     {

      s[i-1].mark[j-1]=s[i].mark[j];
     }
   }
(*n)--;
}

int main()
{
int n,total,fail=0,pass=0,choice=0,pos=0;
printf("Enter the number of student:");
scanf("%d",&n);
struct student s[100];
    for(int i=0;i<n;i++)
    {
          total=0;
          printf("Enter the student %d name:",(i+1));
          scanf("%s",s[i].name);
          printf("Enter the student %d age:",(i+1));
          scanf("%d",&s[i].age);
          printf("Enter the student %d gender:",(i+1));
          scanf("%s",s[i].gendre);
          for(int j=0;j<3;j++)
          {
              printf("Enter the student %d's mark %d:",(i+1),(j+1));
              scanf("%d",&s[i].mark[j]);
              total=total+s[i].mark[j];
          }
          grd((total/3),s[i].grade,&pass,&fail);
    }


     printf("\n If you need to perform the following operation enter its number \n 1.Add student detail\n 2.Delete student detail\n 3.Display \n 4.Exit and \n CHOICE:");
     scanf("%d",&choice);
     while(choice!=4)
     {
        switch(choice)
        {
          case 1:
          int n;
          total=0;
          printf("Enter the student %d name:",(i+1));
          scanf("%s",s[i].name);
          printf("Enter the student %d age:",(i+1));
          scanf("%d",&s[i].age);
          printf("Enter the student %d gender:",(i+1));
          scanf("%s",s[i].gendre);
          for(int j=0;j<3;j++)
          {
              printf("Enter the student %d's mark %d:",(i+1),(j+1));
              scanf("%d",&s[i].mark[j]);
              total=total+s[i].mark[j];
          }
          grd((total/3),s[i].grade,&pass,&fail);

     n++;

          break;
          case 2:
          printf("Enter the position to delete:");
          scanf("%d",&pos);
          delete(s,pos,&n);

          break;
          case 3:
          for(int i=0;i<n;i++)
      {

        printf("\n Student %d name    :%s",(i+1),s[i].name);
        printf("\n Student %d age     :%d",(i+1),s[i].age);
        printf("\n Student %d gender  :%s",(i+1),s[i].gendre);
        for(int j=0;j<3;j++)
        {
           printf("\n Student %d mark%d  :%d",(i+1),(j+1),s[i].mark[j]);
        }
        printf("\n Student %d grade   :%s\n",(i+1),s[i].grade);

     }
           break;
          default:
          printf("Invalid choice ");
        }
         printf("\n If you need to perform the following operation enter its number \n 1.Add student detail\n 2.Delete student detail\n 3.Display \n 4.Exit and \n CHOICE:");
          scanf("%d",&choice);
      }

       printf("\n\n *FAILED STUDENT DATA*\n");
      for(int i=0;i<n;i++)
    {
      if(strcmp(s[i].grade,"F")==0)
       {
        printf("\n Student %d name    :%s",(i+1),s[i].name);
        printf("\n Student %d age     :%d",(i+1),s[i].age);
        printf("\n Student %d gender  :%s",(i+1),s[i].gendre);
        for(int j=0;j<3;j++)
        {
           printf("\n Student %d mark%d  :%d",(i+1),(j+1),s[i].mark[j]);
        }
        printf("\n Student %d grade   :%s\n",(i+1),s[i].grade);
    }
      }
      printf("\n\n *PASSED STUDENT DATA*\n");
       for(int i=0;i<n;i++)
    {
      if(strcmp(s[i].grade,"F"))
       {
        printf("\n Student %d name    :%s",(i+1),s[i].name);
        printf("\n Student %d age     :%d",(i+1),s[i].age);
        printf("\n Student %d gender  :%s",(i+1),s[i].gendre);
        for(int j=0;j<3;j++)
        {
           printf("\n Student %d mark%d  :%d",(i+1),(j+1),s[i].mark[j]);
        }
        printf("\n Student %d grade   :%s\n",(i+1),s[i].grade);
    }
      }
      printf("\n The total number of pass is %d",pass);
     printf("\n The total number of fail is %d",fail);
return 0;
}
