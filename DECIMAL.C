#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int p=0,i,n,decimal=0,re,c=0;
clrscr();
printf("enter number");
scanf("%d",&n);
i=n;
while(i>0)
{
c=i%10;
c++;
i=i/10;
}
i=n;
while(i>0)
{
re=i%10;
decimal=decimal+re*pow(2,p);
p++;
i=i/10;
}
printf("decimal no.%d",decimal);
getch();
return 0;
}