#include<stdio.h>
 main()
{
int a,b,choice;
printf("\n1.for addition ");
printf("\n2.for subtraction");
printf("\n3.for multiplication ");
printf("\n4.for division ");
printf("\n5.for even or odd ");
printf("\n\n enter your choice");

scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter any two number ");
scanf("%d%d",&a,&b);
printf("the sum of two number is = %d",a+b);
break ;
case 2:
printf("enter two number number ");
scanf("%d%d",&a,&b);
printf("the subtraction of two number is =%d",a-b);
break;
case 3:
printf("enter two number ");
scanf("%d%d",&a,&b);
printf("the multiplication of two number is =%d",a*b);
break ;
case 4:
printf("enter any two number ");
scanf("%d%d",&a,&b);
printf("the division of two number is =%d",a/b);
break ;
case 5:
printf("enter a  number ");
scanf("%d",&a);
{
if(a%2==0)
printf("the given number is even");
else
printf("the given number is odd");
}
break ;
default:
    printf("invalid choice");

}
return 0;
}
