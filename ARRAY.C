#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=(n-1);i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=(n-1);i++)
{
printf("%d",a[i]);
}
getch();
}