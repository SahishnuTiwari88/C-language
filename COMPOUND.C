#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float p,r,n,C;
clrscr();
printf("enter value of p,r and n");
scanf("%f %f %f",&p,&r,&n);
C=p*pow((1+r/100),n);
printf("%f",C);
getch();
return 0;
}