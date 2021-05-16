#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
 void main()
 {
  int gd=DETECT,gm,errorcode;
  int x,y;
  clrscr();
  errorcode=graphresult();
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  if(errorcode!=grOk)
  {
   printf("errorcode:%s",grapherrormsg(errorcode));
   printf("press any key to halt:");

   }
   while(!(kbhit))
   {
   x=rand();
   y=rand();
   circle(x,y,50);
   }


   getch();
   closegraph();
   }

