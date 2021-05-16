#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,re,sum=0;
clrscr();
printf("enter the number");
scanf("enter the number %d",&n);
i=n;
while(i>0)
{
re=i%10;
sum=sum+(re*re*re);
i=i/10;
}
if(sum==n)
printf("armstrong no.");
else
printf("not armstrong");
getch();
}