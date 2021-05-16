
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    while(1)
    {

int p=0,i,n,decimal=0,re,c=0,choice;
 printf("\n press `1`to exit otherwise press any key for further execution of program");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
      exit(0);
      break;
 }
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
printf("decimal no.%d\n",decimal);}
getch();
return 0;
}
