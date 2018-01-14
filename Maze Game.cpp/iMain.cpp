/*
    Author: Tasnid Mahin
    Version: 1.0
*/



# include <iostream>
#include <stdlib.h>
#include<time.h>

# include "iGraphics.h"
# include "bitmap_viewer.h"
# include "level1.h"
# include "level2.h"
# include "level3.h"
# include "menu.h"
void iDraw()
{
	//place your drawing codes here
	/*if(gamestate == menu)
	{
		iClear();
		iShowBMPAlternative(0,0,"MenuDemo - Copy.bmp");
	}
	if(gamestate == hall_of_fame)
	{
		iClear();
		iShowBMPAlternative(263,138,"hall of fame - Copy.bmp");
	}
	if(gamestate == instruction)
	{
		iClear();
		iShowBMPAlternative(263,138,"Instruction - Copy.bmp");
	}
	if(gamestate == about)
	{
		iClear();
		iShowBMPAlternative(263,138,"about - Copy.bmp");
	}*/
	menushow();
	if(gamestate == level1)
	{
		iClear();
		drawbars();
		iShowBMPAlternative (1486,0, "destination.bmp");
		iShowBMP2(x,y,"dex1.bmp",0);
		iSetTimer(150,movingEnemy);
		keyShow();
		enemyShow();
	}
	if(gamestate==lost)
	{
		iClear();
		iShowBMPAlternative(263,138,"Lost 1.bmp");
	}
	if(gamestate==level2)
	{
		x=screenWidth * (5.0/820.0);
		y=screenHeight * (260.0/510.0);
		iClear();
		iShowBMPAlternative2(x,y,"dex1.bmp",0);
	
	     puzzle();
	}
	if(gamestate==level3)
	{
		x=screenWidth * (5.0/820.0);
		y=screenHeight * (260.0/510.0);
		iClear();
		iShowBMPAlternative2(x,y,"dex1.bmp",0);
	
	     puzzle3();
	}
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
		if(gamestate == menu)
		{
			if(mx>=61 && mx<=182 && my>=383 && my<=423)
			{
				gamestate=level1;
			}
			if(mx>=61 && mx<=292 && my>=313 && my<=351)
			{
				gamestate=hall_of_fame;
			}
			if(mx>=61 && mx<=292 && my>=236 && my<=275)
			{
				gamestate=instruction;
			}
			if(mx>=61 && mx<=235 && my>=159 && my<=199)
			{
				gamestate=about;
			}
			if(mx>=61 && mx<=174 && my>=80 && my<=121)
			{
				exit(0);
			}
		}
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
	if(gamestate == hall_of_fame || gamestate == instruction || gamestate == about || gamestate == level1 || gamestate == level2 || gamestate==level3)
	{
		if(key == '\b')
		{
			gamestate = menu;
		}
	}
	if(gamestate==level1)
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
						if(key1[i].state==1)
						{
							key1[i].state=0;
							disCnt++;
						}
					}
				}
				if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=5)
				{
					gamestate=level2;
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
						if(key1[i].state==1)
						{
							key1[i].state=0;
							disCnt++;
						}
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
						if(key1[i].state==1)
						{
							key1[i].state=0;
							disCnt++;
						}
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
						if(key1[i].state==1)
						{
							key1[i].state=0;
							disCnt++;
						}
					}
				}
				if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=5)
				{
					gamestate=level2;
				}
			}
		}
		else if(key == '2')
		{
			gamestate=level2;
		}
		else if(key == '3')
		{
			gamestate=level3;
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

	/*if(key == GLUT_KEY_END)
	{
		exit(0);
	}*/
	if(key == GLUT_KEY_RIGHT)
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
					if(key1[i].state==1)
					{
						key1[i].state=0;
						disCnt++;
					}
				}
			}
			if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=5)
			{
				gamestate=level2;
			}
		}
	}
	else if(key == GLUT_KEY_LEFT)
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
					if(key1[i].state==1)
					{
						key1[i].state=0;
						disCnt++;
					}
				}
			}
		}
	}
	else if(key ==  GLUT_KEY_UP)
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
					if(key1[i].state==1)
					{
						key1[i].state=0;
						disCnt++;
					}
				}
			}
		}
	}
	else if(key == GLUT_KEY_DOWN)
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
					if(key1[i].state==1)
					{
						key1[i].state=0;
						disCnt++;
					}
				}
			}
			if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=5)
			{
				gamestate=level2;
			}
		}
	}
	
	//place your codes for other keys here
}
//
int main()
{
	//place your own initialization codes here.
	keyposSet();
	enemyposSet();
	//printf("%d\n",gamestate);
	if(gamestate==level1)
	{
		//printf("MHN\n");
		//iSetTimer(150,movingEnemy);
	}
	iInitialize(screenWidth, screenHeight, "Dexters' Laboratory");
	return 0;
}
