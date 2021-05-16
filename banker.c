#include<stdio.h>
void main()
{
int max[5][5],all[5][5],avl[5],need[5][5],finish[5];
int p,r,i,j,n=0,mark;
printf("enter no. of processes and resources:\n");
scanf("%d%d",&p,&r);
for(i=0;i<p;i++)
{
 finish[i]=0;
 for(j=0;j<r;j++)
 {
  printf("maximum:");
  scanf("%d",&max[i][j]);
  printf("allocated:");
  scanf("%d",&all[i][j]);
  need[i][j]=max[i][j]-all[i][j];
 }
}
printf("Enter available resources:");
for(i=0;i<r;i++)
 scanf("%d",&avl[i]);

printf("NEED Matrix:\n");
for(i=0;i<p;i++)
{
 for(j=0;j<r;j++)
  printf("%d ",need[i][j]);
 printf("\n");
}
printf("\n");

while(n<5)
{
  for(i=0;i<p;i++)
   {
     if(finish[i]==0)
      {
        mark=1;
        for(j=0;j<r;j++)
        {
             if(need[i][j]>avl[j])
             {
              mark=0;
              break;
             }
        }

        if(mark!=0)
          {
            finish[i]=1;

            printf("P%d--->",i);
            for(j=0;j<r;j++)
            avl[j]+=all[i][j];
          break;

          }
      }
   }
n++;
}
}

