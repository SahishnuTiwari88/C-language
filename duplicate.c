#include<stdio.h>
void main()
{
int a[20],b[20],n,m,i,j;
printf("enter number of element in first array:");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
printf("enter number of element in second array:");

scanf("%d",&m);
printf("enter the elements:\n");

for(j=0;j<m;j++)
{
scanf("%d\n",&b[j]);
}
}
