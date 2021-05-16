#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,arm=0,re,c=0;
printf("enter no.");
scanf("%d",&n);
for(n=1;n<=100;n++)
{
while(n!=0)
{
re=n%10;
c++;
}
}
while(n!=0)
{
re=n%10;
arm=arm+pow(re,c);
n=n/10;
}
if(arm==n)
 printf("no. is armstrong");
else
 printf("not armstrong");
getch():
}