#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,t=1;
clrscr();
printf("enter number");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
t=n*i;

printf("%d\t\n",t);}
getch();
}