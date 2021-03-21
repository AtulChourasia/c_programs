#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void displayMan(int x,int y)
{
    circle(x,y,10);         //face
    line(x,y+10,x,y+30);        //neck
    line(x,y+30,x-20,y+40);    //left hand
    line(x,y+30,x+20,y+40);    //right hand
    line(x+20,y+40,x+30,y+30);
    line(x,y+30,x,y+70);        //body
    line(x+30,y+30,x+30,y-90);  //umbrella
    pieslice(x+30,y-30,0,180,55);       

}
void drawCloud(int z,int y)
{
		int r=50;

		arc(z,y,45,135,r);
		arc(z+50,y,45,135,r);
		arc(z+100,y,45,135,r);
		arc(z,y,135,225,r);
		arc(z+50,y,135+90,225+90,r);
		arc(z,y,135+90,225+90,r);
		arc(z+100,y,135+90,225+90,r);
		arc(z+100,y,315,45,r);
}


void main()
{
    int gd=DETECT, gm,i,d=0,x=50,y=340,z=50,shouldMove=1;
    int rx,ry;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    while(!kbhit())
    {
	cleardevice();
	displayMan(x,340);

	drawCloud(z,60);
	line(0,430,639,430);

for(i=0;i<500;i++)
        {
            rx=rand()%639;
            ry=rand()%439;
            if(rx>=(x-40)&&rx<=(x+110))
                if(ry>=(y-50)&&ry<=479)
                    continue;
            line(rx-10,ry+10,rx,ry);
        }
 
        //legs
        if(shouldMove)
        {
            if(d<20)
                d+=4;
            else
                shouldMove=0;
            line(x,y+70,x-d,y+90);
            line(x,y+70,x+d,y+90);
        }
        else
        {
            if(d>0)
                d-=4;
            else
                shouldMove=1;
            line(x,y+70,x-d,y+90);
            line(x,y+70,x+d,y+90);
        }
        delay(200);
        x=(x+10)%639;
    }
    getch();
}
