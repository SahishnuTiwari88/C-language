#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int queue[30],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
 int ch;
   while(1)
   {
    printf("\n1 TO ENQUEUE:\n2 TO DEQUEUE:\n3 TO DISPLAY \n4 TO EXIT");
    printf("\nWHAT DO YOU WANT TO PERFORM ?\t");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      enqueue();
      break;
      case 2:
      dequeue();
      break;
      case 3:
      display();
      break;
      case 4:
      exit(0);
    }
   }
}
void enqueue()
{
    int data;
    if((rear==MAX-1&&front==0)||(front==rear+1))
    {
        printf("\nOVERFLOW or NO FURTHER ELEMENT CAN BE INSERTED");
        return;
    }
    else
    {
        printf("INSERT THE DATA ::");
            scanf("%d",&data);
        if(rear==-1)
        {

           front=rear=0;


                queue[rear]=data;


        }
        else
        {
            if(rear==MAX-1)
                rear=0;
            else

                rear=rear+1;

        }
        queue[rear]=data;

    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("\nQUEUE IS EMPTY\n");
        return;
    }
    else
    {
        printf("\n ELEMENT TO BE DELETED IS %d",queue[front]);
        if(rear==front)
        {
            rear=front=-1;
        }
        else
        {
            if(front==MAX-1)
                front=0;
            else
                front=front+1;
        }
    }
}
void display()
{
    int i;
    if(front==-1)
    {

        printf("\n THERE IS NO DATA IN QUEUE\n");
        return;
    }

    else
    {
        for(i=front;i!=rear;i=(i+1)%MAX)
        {
            printf("TRAVERSED DATA IS %d\n",queue[i]);
        }
    }

      printf("TRAVERSED DATA IS LIE AT LAST IS %d",queue[i]);


}

