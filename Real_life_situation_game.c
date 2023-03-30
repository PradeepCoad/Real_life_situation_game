
#include<graphics.h>
#include<conio.h>

void loading_animation();
void river_of_map1();
void map1();
void story_1();
void tree(int x,int y);



void main()
{
   int gdrive = DETECT,gmode,i;
   int xmax,ymax;

   initgraph(&gdrive,&gmode,"C:\\TURBOC3\\BGI");

   //frame
   xmax = getmaxx();
   ymax = getmaxy();
   rectangle(0,0,xmax,ymax);

   setbkcolor(15);


  // loading_animation();


   rectangle(0,0,xmax,ymax);
   story_1();


   getch();

   closegraph();
}


//--------storyes--------//
void story_1()
{
setcolor(0);
  map1();

}


//------Maps------//
void map1()
{
  int xmax = getmaxx();
  int ymax = getmaxy();
  int y,x;
  setcolor(8);
  rectangle(20,20,xmax-20,ymax-60);

   //-----------River Of Map-------------//
   setcolor(9);
   ellipse(xmax-170,100,260,360,150,70);
   ellipse(xmax-160,120,260,340,150,70);

   ellipse(xmax-198,238,90,175,150,70);
   ellipse(xmax-185,240,90,175,125,50);

   ellipse(xmax-495,223,270,350,150,50);
   ellipse(xmax-440,237,300,360,130,50);
   line(xmax-460,295,xmax-375,280);

   ellipse(xmax-508,357,85,145,134,85);
   ellipse(xmax-469,376,87,152,169,81);

   //---------Railway Track--------------//

   setcolor(8);
   line(305,20,305,getmaxy()-60);
   line(315,20,315,getmaxy()-60);

    for(y = 30;y<=getmaxy()-60;y=y+10)
    {
	  line(300,y,320,y);
    }
    //bridge
    for(y = 180;y<=280;y++)
    {
       line(295,y,325,y);
    }

    //------------Gauri Farm-----------//

    setcolor(8);
    outtextxy(270,40,"MLC");
    outtextxy(72,40,"GAURI");
    setcolor(4);
    for(x = 0;x<=6;x++){
    rectangle(110+x,35+x,150-x,47-x);

    rectangle(105+x,90+x,130-x,100-x);
    rectangle(240+x,230+x,270-x,240-x);

    }

    settextstyle(0,0,0);
    setcolor(6);
    rectangle(170,100,270,220);

    for(x = 0;x<=100;x=x+40)
    {
      tree(x+175,115);
      tree(x+175,200);
    }
    for(x = 0;x<=50;x = x+50)
    {
       tree(x+185,160);
    }
    setcolor(8);
    outtextxy(180,140,"GAURI FARM");

    for(y = 0;y<=100;y += 70)
    {
     tree(280,y+90);
    }

    //-------------AirPort Road-------------//
     setcolor(8);

    for(x=0;x<=7;x++)
    {
     rectangle(70+x,50+x,getmaxx()-50-x,65-x);
     rectangle(getmaxx()-65+x,50+x,getmaxx()-50-x,getmaxy()-60-x);
     rectangle(250,getmaxy()-100-x,getmaxx()-180,getmaxy()-112+x);
     rectangle(getmaxx()-190+x,getmaxy()-100,getmaxx()-175-x,getmaxy()-150);
    }
    for(x=0;x<=12;x++)
    {
     line(56+x,20,71+x,getmaxy()-140);
     line(71,getmaxy()-140-x,250,getmaxy()-100-x);

    }
    setcolor(8);
    for(x = 0;x<=2;x++){
    rectangle(400+x,280+x,520-x,330-x);
    }
    setcolor(3);
    outtextxy(430,315,"AIR PORT");
    settextstyle(0,0,2);
    outtextxy(415,295,"RAMPUR");
    settextstyle(0,0,0);
	//--Road White bar--//
    for(x = 0;x<=getmaxx()-140;x = x+15)
    {
    bar(75+x,57,85+x,59);
    }
    for(y = 0;y<=getmaxy()-50;y=y+15)
    {
      bar(getmaxx()-58,60+y,getmaxx()-56,70+y);
    }
    for(x = 0;x<=getmaxx()-450;x = x+15)
    {
      bar(255+x,getmaxy()-105,265+x,getmaxy()-107);
    }
    for(y=0;y<=30;y = y+15)
    {
     bar(getmaxx()-184,getmaxy()-105-y,getmaxx()-182,getmaxy()-115-y);
    }
     setcolor(15);
     x=-1;
    for(y = 0;y<=150;y = y+15){
    line(61+x,27+y,61+x,35+y);
    line(62+x,27+y,62+x,35+y);
     x++;
     }
     x=-1;
     for(y = 0;y<=135;y+=15){
      line(70+x,195+y,70+x,203+y);
      line(71+x,195+y,71+x,203+y);
      x++;
     }
     y = -1;
     for(x = 0;x<=75;x+=15){
     line(82+x,336+y,89+x,338+y);
     line(82+x,335+y,89+x,337+y);
     y = y+3;
     }
     y = -1;
     for(x = 0;x<75;x+=15){
     line(170+x,357+y,177+x,359+y);
     line(170+x,356+y,177+x,358+y);
     y=y+3;
     }

     //-----------------Jungle----------------//
     setcolor(8);
     outtextxy(330,95,"GHANA JUNGLE");
     for(x = 0;x<=80;x=x+20)
    {
      tree(x+330,80);
      tree(x+340,112);
      tree(x+330,132);
    }
    //-------------side Road trees-----------//
    x=2;
    for(y = 0;y<=150;y+=60){
    tree(80+x,100+y);
    x++;
    }
    for(y = 0;y<200;y+=60)
    {
     tree(30,80+y);
    }

    for(y =0;y<199;y+=99)
    {
      tree(600,180+y);
    }
    for(y = 0;y<100;y+=90)
    {
      tree(550,250+y);
    }

    tree(455,35);
    tree(485,35);
    tree(600,40);
    //------------shanta and Rampur---------//
    setcolor(8);
    outtextxy(230,302,"SHANTA");
    outtextxy(275,325,"FS");
    outtextxy(250,359,"RAMPUR");
    setcolor(4);
    for(x=0;x<=7;x++){
    rectangle(240+x,290+x,270-x,300-x);
    rectangle(220+x,310+x,240-x,320-x);
    rectangle(270+x,310+x,290-x,320-x);
    }




    //--------------Map Info-----------//
    setcolor(8);
    outtextxy(325,40,"SITAPUR 50 K.M.");
    outtextxy(520,40,"G.T.ROAD");


}
//------------Tree---------//

void tree(int x,int y)
{



   int i;
  setcolor(GREEN);
  for(i = 0;i<=4;i++){
  arc(x,y,45,315,4-i);
  arc(x+10,y,225,135,4-i);
  arc(x+5,y-7,335,225,4-i);
  }

  for(i=0;i<=1;i++){
  setcolor(6);
  ellipse(x-5,y+10,325,45,8+i,10);
  ellipse(x+15,y+10,135,215,8+i,10);
  }

}



//----------------- Loading Animation ----------------//

void loading_animation()
{
    int xmax = getmaxx();
    int x = 0,y = 0;


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

       setcolor(3);

    for(x =20;x<=xmax-20;x++){
       delay(10);
       rectangle(20,400,x,410);

       if(x == xmax-20)
       {
	 setcolor(15);
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



