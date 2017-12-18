/*
    Author: Tasnid Mahin
    Version: 1.0
*/



# include <iostream>;
using namespace std;
# include "iGraphics.h"
# include "bitmap_viewer.h"
#define screenWidth 1550
#define screenHeight 788
#define dextersWidth 64
#define dextersHeigth 64
#define barWidth 4
#define xSpeed 10
#define ySpeed 10
int gamestate=1,disCnt=0;
int sh=screenHeight,bh=barWidth;
int barx[]={72,314,0,148,556,72,462,556,0,999,1200,1200,724,999,999,1076,76,148,420,894,1300,1230,550,72,386,242,658,923,1338,1124,1465,999,1359,72,321,1235,1086,790,890,1010,470};
int barDx[]={170,170,314,238,290,590,120,140,400,320,280,280,400,360,288,180,165,224,200,120,250,225,220,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh};
int bary[]={sh-72,sh-72,sh-386,sh-304,sh-72,sh-464,sh-304,sh-148,sh-536,sh-72,sh-722,sh-648,sh-722,sh-386,sh-216,sh-298,sh-722,sh-648,sh-722,sh-612,sh-570,sh-480,sh-642,sh-304,sh-386,sh-228,sh-384,sh-295,sh-718,sh-722,sh-400,sh-384,sh-386,0,0,sh-212,sh-212,sh-525,sh-718,sh-612,sh-652};
int barDy[]={bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,bh,160,232,160,240,295,72,255,400,170,225,170,65,50,50,380,205,105,105};
int mposx,  mposy,x=0,y=screenHeight-dextersHeigth-4;
/*
	function iDraw() is called again and again by the system.
*/
void drawbars()
{
	iSetColor(0,250,0);
	iFilledRectangle(72,screenHeight-72,170,barWidth);
	iFilledRectangle(314,screenHeight-72,170,barWidth);
	iFilledRectangle(0,screenHeight-386,314,barWidth);
	iFilledRectangle(148,screenHeight-304,238,barWidth);
	iFilledRectangle(556,screenHeight-72,290,barWidth);
	iFilledRectangle(72,screenHeight-464,590,barWidth);
	iFilledRectangle(462,screenHeight-304,120,barWidth);
	iFilledRectangle(556,screenHeight-148,140,barWidth);
	iFilledRectangle(0,screenHeight-536,400,barWidth);
	iFilledRectangle(999,screenHeight-72,320,barWidth);
	iFilledRectangle(1200,screenHeight-722,280,barWidth);
	iFilledRectangle(1200,screenHeight-648,280,barWidth);
	iFilledRectangle(724,screenHeight-722,400,barWidth);
	iFilledRectangle(999,screenHeight-386,360,barWidth);
	iFilledRectangle(999,screenHeight-216,288,barWidth);
	iFilledRectangle(1076,screenHeight-298,180,barWidth);
	iFilledRectangle(76,screenHeight-722,165,barWidth);
	iFilledRectangle(148,screenHeight-648,224,barWidth);
	iFilledRectangle(420,screenHeight-722,200,barWidth);
	iFilledRectangle(894,screenHeight-612,120,barWidth);
	iFilledRectangle(1300,screenHeight-570,250,barWidth);
	iFilledRectangle(1230,screenHeight-480,225,barWidth);
	iFilledRectangle(550,screenHeight-642,220,barWidth);//23


	iFilledRectangle(72,screenHeight-304,barWidth,160);
	iFilledRectangle(386,screenHeight-386,barWidth,232);
	iFilledRectangle(242,screenHeight-228,barWidth,160);
	iFilledRectangle(658,screenHeight-384,barWidth,240);
	iFilledRectangle(923,screenHeight-295,barWidth,295);
	iFilledRectangle(1338,screenHeight-718,barWidth,72);
	iFilledRectangle(1124,screenHeight-722,barWidth,255);
	iFilledRectangle(1465,screenHeight-400,barWidth,400);
	iFilledRectangle(999,screenHeight-384,barWidth,170);
	iFilledRectangle(1359,screenHeight-386,barWidth,225);
	iFilledRectangle(72,0,barWidth,170);
	iFilledRectangle(321,0,barWidth,65);
	iFilledRectangle(1235,screenHeight-212,barWidth,50);
	iFilledRectangle(1086,screenHeight-212,barWidth,50);
	iFilledRectangle(790,screenHeight-525,barWidth,380);
	iFilledRectangle(890,screenHeight-718,barWidth,205);
	iFilledRectangle(1010,screenHeight-612,barWidth,105);
	iFilledRectangle(470,screenHeight-652,barWidth,105);//18
}
struct KEYS
{
	int kx,ky,state;
}key1[5];
void keyposSet()
{
	for(int i=0;i<5;i++)
	{
		key1[i].kx=rand()%1519;
		key1[i].ky=rand()%757;
		key1[i].state=1;
	}
}
void keyShow()
{
	for(int i=0;i<5;i++)
	{
		if(key1[i].kx+32<=dextersWidth && key1[i].kx>=0 && key1[i].ky>=screenHeight-dextersHeigth-4 && key1[i].ky+32<=screenHeight)
		{
			key1[i].kx=rand()%1519;
			key1[i].ky=rand()%757;
		}
		if(key1[i].kx+32<=screenWidth && key1[i].kx>=1486 && key1[i].ky>=0 && key1[i].ky+32<=screenHeight-724)
		{
			key1[i].kx=rand()%1519;
			key1[i].ky=rand()%757;
		}
		for(int j=0;j<41;j++)
		{
			if(x+dextersWidth>barx[j] && x<barx[j]+barDx[j] && y+dextersHeigth>bary[j] && y<bary[j]+barDy[j])
			{
				key1[i].kx=rand()%1519;
				key1[i].ky=rand()%757;
				j=-1;
			}
		}
		if(key1[i].state)
		{
			iShowBMP2(key1[i].kx,key1[i].ky,"key.bmp",0);
		}
	}
}
void iDraw()
{
	//place your drawing codes here
	iClear();
	iShowBMPAlternative (1486,0, "destination.bmp");
	iShowBMP2(x,y,"dex1.bmp",0);
	keyShow();
	drawbars();
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here

 mposx = mx;
 mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'd')
	{
		x+=xSpeed;
		if(x>=screenWidth-dextersWidth)
		{
			x=screenWidth-dextersWidth;
		}
		else
		{
			for(int i=0;i<41;i++)
			{
				if(x+dextersWidth>barx[i] && x<barx[i]+barDx[i] && y+dextersHeigth>bary[i] && y<bary[i]+barDy[i])
				{
					x-=xSpeed;
					break;
				}
			}
			for(int i=0;i<5;i++)
			{
				if(x+dextersWidth>key1[i].kx && x<key1[i].kx+32 && y+dextersHeigth>key1[i].ky && y<key1[i].ky+32)
				{
					key1[i].state=0;
					disCnt++;
					break;
				}
			}
		}
	}
	else if(key == 'a')
	{
		x-=xSpeed;
		if(x<=0)
		{
			x=0;
		}
		else
		{
			for(int i=0;i<41;i++)
			{
				if(x+dextersWidth>barx[i] && x<barx[i]+barDx[i] && y+dextersHeigth>bary[i] && y<bary[i]+barDy[i])
				{
					x+=xSpeed;
					break;
				}
			}
			for(int i=0;i<5;i++)
			{
				if(x+dextersWidth>key1[i].kx && x<key1[i].kx+32 && y+dextersHeigth>key1[i].ky && y<key1[i].ky+32)
				{
					key1[i].state=0;
					disCnt++;
					break;
				}
			}
		}
	}
	else if(key == 'w')
	{
		y+=ySpeed ;
		if(y>=screenHeight-dextersHeigth)
		{
			y=screenHeight-dextersHeigth;
		}
		else
		{
			for(int i=0;i<41;i++)
			{
				if(x+dextersWidth>barx[i] && x<barx[i]+barDx[i] && y+dextersHeigth>bary[i] && y<bary[i]+barDy[i])
				{
					y-=ySpeed;
					break;
				}
			}
			for(int i=0;i<5;i++)
			{
				if(x+dextersWidth>key1[i].kx && x<key1[i].kx+32 && y+dextersHeigth>key1[i].ky && y<key1[i].ky+32)
				{
					key1[i].state=0;
					disCnt++;
					break;
				}
			}
		}
	}
	else if(key == 's')
	{
		y-=ySpeed ;
		if(y<=0)
		{
			y=0;
		}
		else
		{
			for(int i=0;i<41;i++)
			{
				if(x+dextersWidth>barx[i] && x<barx[i]+barDx[i] && y+dextersHeigth>bary[i] && y<bary[i]+barDy[i])
				{
					y+=ySpeed;
					break;
				}
			}
			for(int i=0;i<5;i++)
			{
				if(x+dextersWidth>key1[i].kx && x<key1[i].kx+32 && y+dextersHeigth>key1[i].ky && y<key1[i].ky+32)
				{
					key1[i].state=0;
					disCnt++;
					break;
				}
			}
		}
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
//
int main()
{
	//place your own initialization codes here.
	keyposSet();
	iInitialize(screenWidth, screenHeight, "Dexters' Laboratory");
	return 0;
}
