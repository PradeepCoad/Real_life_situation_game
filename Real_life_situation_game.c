#include<graphics.h>
#include<conio.h>

void loading_animation();
void river_of_map1();
void map1();
void story_1();

void main()
{
   int gdrive = DETECT,gmode,i;
   int xmax,ymax;
   initgraph(&gdrive,&gmode,"C:\\TURBOC3\\BGI");

   //frame
   xmax = getmaxx();
   ymax = getmaxy();
   rectangle(0,0,xmax,ymax);

   loading_animation();

   story_1();



   getch();

   closegraph();
}

void river_of_map1()
{  int xmax,ymax;

   xmax = getmaxx();
   ymax = getmaxy();
   ellipse(xmax-170,100,260,360,150,70);
   ellipse(xmax-160,120,260,340,150,70);

   ellipse(xmax-198,238,90,175,150,70);
   ellipse(xmax-185,240,90,175,125,50);

   ellipse(xmax-495,223,270,350,150,50);
   ellipse(xmax-440,237,300,360,130,50);
   line(xmax-460,295,xmax-375,280);

   ellipse(xmax-508,357,85,145,134,85);
   ellipse(xmax-469,376,87,152,169,81);

}


void map1()
{
  int xmax = getmaxx();
  int ymax = getmaxy();

  rectangle(20,20,xmax-20,ymax-60);
  river_of_map1();

}
void story_1()
{
  map1();

}
void loading_animation()
{


}

