Assignment =6 (INEURON A JOB READY BOOT CAMP)
Question =1
/*
#include <stdio.h>
#include <conio.h>
void main()
{
    int num, i, sum = 0; // declare local variables
    printf(" Enter a positive number: ");
    scanf("%d", &num); // take any positive number

    for (i = 0; i <= num; i++)
    {
        sum = sum + i; // at each iteration the value of i is added to the sum variable
    }

    printf("\n Sum of the first %d number is: %d", num, sum);
    getch();
}
Question =2
/*
#include <stdio.h>

void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
     sum+=2*i;
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
}
*\
Question =3
/*
#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}
*\
Question =4
/*
#include <stdio.h>
int main() {
   int n = 10;
   int sum = (n * (n + 1) * (2 * n + 1)) / 6;
   printf("The sum of squares of %d natural numbers is %d",n, sum);
   return 0;
}
*\
Question =5
/*
#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum=(n*n)*((n+1)*(n+1))/4;
    printf("sum of square of %d natural numbers=%d",n,sum);
}
*\
Question =6
/*
#include<stdio.h>
int main()
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
return 0;
}
*\
Question =7
/*
#include <stdio.h>
int main()
{
   int n;  // variable declaration
   int count=0;   // variable declaration
   printf("Enter a number");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       count++;
   }

   printf("\nThe number of digits in an integer is : %d",count);
    return 0;
}
*\
Question =8
/*
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  *\
  Question =9
  /*
  #include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
*\
Question =10
/*
#include<stdio.h>
 int main()
{
int n, reverse=0, rem;
printf("Enter a number: ");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("Reversed Number: %d",reverse);
return 0;
}
*\
