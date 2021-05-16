#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i,s=0;
clrscr();

printf("enter the number");
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(i=1;i<=(n-2);i++)
{
printf("%d\n",a+b);
c=a+b;
a=b;
b=c;
}
getch();
}
