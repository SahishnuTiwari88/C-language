#include<stdio.h>
void main()
{
int a[10],b[10],c[20],n,m,i,j,k=0,p=0,l;
printf("enter the number of element in first array");
scanf("\n%d",&n);
printf("enter the element of first array");
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
printf("enter the number of element in second array");
scanf("\n%d",&m);
printf("enter the element of second array");
for(j=0;j<m;j++)
scanf("\n%d",&b[j]);
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    if(a[i]==b[j])
  {
    k++;
    break;

  }

 if(n!=m)
  {
      printf("\ndifference of set is not possible");
      exit(0);
  }

else if(k==0)
  {
      c[p]=a[i];
      p++;
  }
break;
  }}
  printf("difference of set is a-b:\n");
  for(i=0;i<p;i++)
    printf("%d\n",c[i]);
}
