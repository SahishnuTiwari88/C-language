#include<stdio.h>
void main()
{
int a[10],beg=0,end,mid,n,num,i,c=0;

printf("enter number of elements in array");
scanf("%d",&n);
end=n-1;
printf("enter elements in array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to be searched");
scanf("%d",&num);
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==num)
{
 printf("element found is %d at=%d\n",a[mid],mid+1);
 c++;break;
}

if(a[mid]>num)
{
 end=mid-1;
}
else
{
 beg=mid+1;
}
}
if(c==0)
printf("element not found\n");
}



