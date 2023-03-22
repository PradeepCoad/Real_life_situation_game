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

   rectangle(0,0,xmax,ymax);

   story_1();



   getch();

   closegraph();
}

//River for Map 1

void river_of_map1()
{  int xmax,ymax;

   xmax = getmaxx();
  // ymax = getmaxy();

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

//Map 1


void map1()
{
  int xmax = getmaxx();
  int ymax = getmaxy();

  rectangle(20,20,xmax-20,ymax-60);
  river_of_map1();

}

//Story 1

void story_1()
{
  map1();

}


//Loadin Animation


void loading_animation()
{   int xmax = getmaxx();
    int x = 0,y = 0;
    int hexagonPoints[] = {260,150,360,150,410,210,410,290,360,350,260,350,210,290,210,210,260,150};

    delay(100);
    setcolor(3);
    for(x=260;x<=360;x++){
    delay(5);
    line(260,150,x,150);
    }

    delay(100);

    for(x=360,y=160;x<=410, y<=210;x++ ,y++){
    delay(5);
    line(360,150,x,y);
    }

    delay(100);
     setcolor(5);
    for(y = 210;y<=290;y++){
    delay(5);
    line(410,210,410,y);
    }

    delay(100);

    for(x=410,y=300;x>=360,y<=350;x--,y++){
    delay(5);
    line(410,290,x,y);
    }

    delay(100);
     setcolor(9);
    for(x=360;x>=260;x--){
    delay(5);
    line(360,350,x,350);
    }

    delay(100);

    for(x=260,y=340;x>=210,y>290;x--,y--){
    delay(5);
    line(260,350,x,y);
    }

    delay(100);
    setcolor(12);
    for(y=290;y>=210;y--){
    delay(5);
    line(210,290,210,y);
    }

    delay(100);

    for(x=210,y=200;x<=260,y>=150;x++,y--){
    delay(5);
    line(210,210,x,y);
    }

    setcolor(10);
    settextstyle(0,0,2);
    delay(100);

    outtextxy(240,240,"LOADING...");

    setcolor(15);

    for(x =20;x<=xmax-20;x++){
       delay(10);
       bar(20,400,x,410);

       if(x == xmax-20)
       {
	 delay(2000);
	 cleardevice();
	 rectangle(0,0,getmaxx(),getmaxy());
	 setcolor(14);
	 outtextxy(140,240,"Press Enter to START -->");
	 setcolor(15);
       }
    }
     getch();
     cleardevice();

}

