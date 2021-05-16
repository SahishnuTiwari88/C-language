#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float d;
clrscr();
printf("enter two operands");
scanf("%d %d",&a,&b);
printf("enter 1 for addition\n"
      "enter 2 for substraction\n"
      "enter 3 for multiplication\n"
      "enter 4 for division\n");
scanf("%d",&c);
switch(c)
{
case 1:
       d=a+b;
       printf("sum of number %f",d);
       break;
case 2:
       d=a-b;
       printf("minus of number %f",d);
       break;
case 3:
       d=a*b;
       printf("product of number %f",d);
       break;
case 4:
       d=a/b;
       printf("division of number %f",d);
       break;
default:
       printf("code does not execute");
       break;
}
getch();
}