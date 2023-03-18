#include<graphics.h>
#include<conio.h>

void river()
{  int xmax,ymax;

   xmax = getmaxx();
   ymax = getmaxy();
   ellipse(xmax-170,100,260,360,150,70);
   ellipse(xmax-160,120,260,360,140,70);

   ellipse(xmax-198,238,90,175,150,70);
   ellipse(xmax-185,240,90,175,125,50);

   ellipse(xmax-495,223,270,350,150,50);
   ellipse(xmax-440,237,300,360,130,50);
   line(264,281,160,305);
   ellipse(110,339,70,170,91,70);
   ellipse(130,374,75,170,110,70);

}


void map()
{
  int xmax = getmaxx();
  int ymax = getmaxy();

  rectangle(20,20,xmax-20,ymax-60);
  river();

}

void main()
{
   int gdrive = DETECT,gmode,i;
   int xmax,ymax;
   initgraph(&gdrive,&gmode,"C:\\TURBOC3\\BGI");

   //frame
   xmax = getmaxx();
   ymax = getmaxy();
   rectangle(0,0,xmax,ymax);


   map();


   getch();
   closegraph();
}
