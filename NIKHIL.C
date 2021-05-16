#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
 void main()
 {
  int gd=DETECT,gm,errorcode;
  int i;
  errorcode=graphresult();
  initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  if(errorcode!=grOk)
  {
   printf("errorcode:%s",grapherrormsg(errorcode));
   printf("press any key to halt:");

   }
  for(i=0;i<200;i++)
  {
  setcolor(i/10) ;
   arc(250,250,0,180,i);
   delay(50);
   }
   getch();
   closegraph();
   }