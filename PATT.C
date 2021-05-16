#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;clrscr();
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(6-i);j++)
{
if(j<=(6-i))
{printf("*");
}
else
 printf(" ");
}
printf("\n");
}
getch();
}