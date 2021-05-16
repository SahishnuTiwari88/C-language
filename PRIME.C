#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,p=0;
clrscr();
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)

p++;

}
if(p==2)
{
printf("number is prime");
}
else
{
printf("number is not prime");
}
getch();
}