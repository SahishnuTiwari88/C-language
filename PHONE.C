#include<stdio.h>
#include<conio.h>
void main()
{
int p,q,r,s,sum;
clrscr();
printf("enter the value of character");
scanf("%d\n%d\n%d\n%d",&p,&q,&r,&s);
if(r&&s>0)
{
printf("r and s are positive number\n");
}
if(p%2==0)
{
printf(" p is even number\n");
}
if(q>r&&s>p)
{
printf("q and s are greater number than r and p\n");
}
if(r+s>p+q)
{
sum=r+s;
printf("%d", sum);
}
else
{
printf("%d", sum);
}
getch();
}