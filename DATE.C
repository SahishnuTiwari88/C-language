#include<stdio.h>
#include<conio.h>
struct date
{
char d1,d2;
int m1,m2;
int y1,y2;
}d;
void main()
{
clrscr();
printf("enter information related to date\n");
printf("enter day d1\nd2");
scanf("%s \n %s",&d.d1,&d.d2);
printf("enter month\n");
scanf("%d \n %d",&d.m1,&d.m2);
printf("enter year\n");
scanf("%d \n %d",&d.y1,&d.y2);
printf("display information related to dates");
printf("day\n");

printf("month %d  %d\n",d.m1,d.m2);
printf("year %d  %d\n",d.y1,d.y2);
if(d.d1==d.d2)
{
printf("dates are equal");
}
else
{
printf("dates not are equal");
}
getch();
}
