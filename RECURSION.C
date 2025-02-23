
#include<stdio.h>
  int factorial(int n)
  {
     if(n==0)
     return 1;
     else
     return n*factorial(n-1);
 }
 int fib(int n)
 {
   if(n <= 0)
   return n;
   else
   return fib(n-1) + fib(n-2);
 }
 int gcd(int a,int b)
 {
   if(b == 0)
   return a;
   else
   return (b,a%b);
  }
  int power(int base,int exp)
  {
    if( exp == 0)
    return 1;
    else
    return base*power(base,exp-1);
   }
  
   int reverse(int n,int rev)
   {
     if(n==0)
     return rev;
     int digit = n%10;
      rev = rev *10 + digit;
     return reverse (n / 10 ,rev);
   }
   int prime(int n)
   {
   {
       if(n<1)
       return 0;
       if(n%2==0)
       return 0;
       else
         for (int p = 3; p * p <= n; p += 2) {
         if (prime(p) && n % p == 0)
             return 0;
   }
   }
   return 1;
   }
 int main()
 {
   int base,expo;
   int choice,n,i,num1,num2;
   choice = 0;
   while(choice != 8)
   {
   printf("Enter the choice :\n");
   printf("1.Factorial  \n");
   printf("2.Fibnacci    \n");
   printf("3.GCD       \n");
   printf("4.Power    \n");
   printf("5.Check Prime number  \n");
   printf("6.Reverse    \n");
   printf("7.Exit   \n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
      printf("Enter the number:");
         scanf("%d",&n);
            printf("the factorial %d",factorial(n));
            break;
      case 2:
      printf("Enter the number :");
      scanf("%d",&n);
      printf("the Fibnacci of given number %d \n",fib(n));
      break;
      case 3:
      printf("Enter two number NUM 1 and NUM 2: ");
      scanf("%d %d",&num1 , &num2);
      printf("the GCD is %d\n",gcd(num1,num2));
      break;
      case 4:
        printf("Enter the BASE and EXPONENT: ");
        scanf("%d %d",&base,&expo); 
        printf("the power is %d\n",power(base,expo));
        break;
      case 5:
      printf("Enter the number :");
      scanf("%d",&n);
      if(prime(n))
          printf("the given number is prime \n");
          else
          printf("Not prime\n ");
      break;
      
      case 6:
      printf("Enter the number: ");
      scanf("%d",&n);
      printf("The reverse of given number is %d\n",reverse(n,0));
      break;
      }
      }
   return 0;
 }
     
