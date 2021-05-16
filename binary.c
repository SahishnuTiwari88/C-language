
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,binary=0,re,i=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
    re=n%2;
    binary=binary+(re*i);
    n=n/2;
    i=i*10;}
    printf("%d",binary);
    getch();
}
