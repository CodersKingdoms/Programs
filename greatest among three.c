#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number to know greater among them");
scanf("%d%d%d",&a,&b,&c);
if (a>b&&a>c)
    printf("first number is the greatest number");
    else
     if(b>c)
      printf("second number  is greatest number");
      else
      printf("third number  is the greatest number ");

      }
