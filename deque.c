#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int queue[30],front=-1,rear=-1;
void insertfront();
void deletefront();
void display();
void insertrear();
void deleterear();
void main()
{
int ch;
while(1)
{
printf("\n1 TO INSERT AT FRONT END\n2 TO DELETE FROM FRONT\n3 TO DISPLAY\n4 QUIT THE PROCESS\
                \n5 TO INSERT AT REAR END \n6 TO DELETE FROM REAR END");
printf("\n ENTER YOUR CHOICE ::");
scanf("%d",&ch);
switch(ch)
{
case 1:
insertfront();
break;
case 2:
deletefront();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
case 5:
insertrear();
break;
case 6:
deleterear();
break;
default :
printf("\n INVALID INSTRUCTION\n");
break;
}
}
}
void insertfront()
{
int data;
if((front==0&&rear==MAX-1)||(rear==front-1))
  {
   printf("\n OVERFLOW");
   return ;
  }
else
{
printf("\n ENTER THE DATA ::");
scanf("%d",&data);
if(front==-1)


front=rear=0;


else if(front==0)
 front=MAX-1;
else
{
front=front-1;

}
queue[front]=data;
}
}
void deletefront()
{
if(front==-1)
 {
 printf("\n underflow");
return;
 }
else
{
printf("\n element to be deleted is %d",queue[front]);
if(front==rear)
 front=rear=-1;
else if(front==MAX-1)
front=0;
else
front=front+1;
}
}
void insertrear()
{
int n;
if((front==0&&rear==MAX-1)||(rear==front-1))
  {
   printf("\n OVERFLOW");
   return ;
  }
else
{
printf("\n ENTER THE DATA ::");
scanf("%d",&n);
if(front==-1)
{

front=rear=0;
}
else if(rear==MAX-1)
rear=0;
else
rear=rear+1;
}
queue[rear]=n;
}

void deleterear()
{
if(front==-1)
 {
 printf("\n underflow");
return;
 }
else
{
printf("\n element to be deleted is %d",queue[rear]);
if(front==rear)
 front=rear=-1;
else if(rear==0)
rear=MAX-1;
else
rear=rear-1;
}
}
void display()
{
int i;
if(front==-1)
{
printf("\n NO INITIAL ELEMENT");
return;
}
else
{
for(i=front;i!=rear;i=(i+1)%MAX)
{
printf("%d\n",queue[i]);
}
printf("%d\n",queue[i]);
}
}
