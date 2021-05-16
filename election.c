#include<stdio.h>

int main()
{
int a;
scanf("enter the a");
char p[40];
scanf("enter the character p");
int i=0;
int j=0;
int k=0;
int l=0;
while(p[l]!='\0')
{
if(p[l]=='A')
j++;
else if(p[l]=='B')
k++;
l++;
}
while(p[i]=='-')
{
i++;
}
if(p[i]=='A')
{
j+=i;
}
int begin=i;
for(;i<a;)
{
while(p[i]=='-'&& i<a)
{
i++;
}
if(i==a)
{
break;
}
if(p[i]=='A')
{
if(begin==i)
{
i++;
continue;
}
j=j+(i-begin-1);
begin=i;
i++;
continue;
}
begin=i;
i++;
while(p[i]=='-'&&i<a)
{
i++;
}
if(i==a)
k=k+(i-begin-1);
else
{
if(p[i]=='A')
{
j=j+(i-begin-1)/2;
k=k+(i-begin-1)/2;
begin=i;
i++;
}
else
{
k=k+(i-begin-1);
}
}
}
if(j>k)
{
printf("A");
printf("\n");
}
else if(j==k)
{
printf("Coalition government");
printf("\n");
}
else
{
printf("B");
printf("\n");
}
}
