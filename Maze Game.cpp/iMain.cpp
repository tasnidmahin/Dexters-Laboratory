/*
    Author: Tasnid Mahin
    Version: 1.0
*/


# include <iostream>
#include <stdlib.h>
#include<time.h>
#include<string>
# include "iGraphics.h"
# include "bitmap_viewer.h"


# include "level1.h"
# include "level2.h"
# include "level3.h"

using namespace std;
string s; 
 
void iDraw()
{
	//place your drawing codes here
	if(gamestate == intro)
	{
		iClear();
		iShowBMPAlternative(0,0,"introone.bmp");
	}
	if(gamestate == menu)
	{
		iClear();
		iShowBMPAlternative(0,0,"menulast.bmp");
	}
	if(gamestate == hall_of_fame)
	{
		iClear();
		iShowBMPAlternative(0,0,"halloffamelast.bmp");
	}
	if(gamestate == instruction)
	{
		iClear();
		iShowBMPAlternative(0,0,"instructionslast.bmp");
	}
	if(gamestate == about)
	{
		iClear();
		iShowBMPAlternative(0,0,"aboutlast.bmp");
	}
	if(gamestate == level1)
	{
		iClear();
		//iShowBMPAlternative (0,0, "backlevel1.bmp");
		drawbars();
		
		iShowBMPAlternative (1486,0, "destinationlast.bmp");
		//iShowBMP2(x,y,"dex1.bmp",0);
		iSetTimer(150,movingEnemy);
		iSetTimer(1000,time);
		keyShow();
		enemyShow();
		if(!charstand)
		{
			if(chforward ==true)
			{
				iShowBMP2(x,y,forkwardRun[index],0);
			}
			else if(backward == true)
			{
				iShowBMP2(x,y,backwardRun[index],0);
			}
			standcounter++;
			if(standcounter>30)
			{
				charstand = true;
				chforward =true;
				backward =true;
			}
		}
		else
		{
			iShowBMP2(x,y,"dex1.bmp",0);
		}
		s=to_string(timeremaining);
		//string s = lexical_cast<string>(timeremaining);		
		//iText2(600,screenHeight+5,s,GLUT_BITMAP_HELVETICA_18);
	}
	if(gamestate==lost)
	{
		iClear();
		iShowBMPAlternative(0,0,"lostlast.bmp");
	}
	if(gamestate==level2)
	{
		iClear();
		iShowBMP2(dex_x,dex_y,"image_level2//dex1.bmp",0);
		iShowBMPAlternative (1486,0, "destinationlast.bmp");
	     puzzle();
	}
	if(gamestate==level3)
	{
		iClear();
		iShowBMPAlternative (0,0, "backlevel3.bmp");
		draw3bars();
		iShowBMP2(x,y,"dex1.bmp",0);
		iShowBMPAlternative (1486,0, "destinationlast.bmp");
		
		iSetTimer(150,moving3Enemy);
		gem3Show();
		henemy3Show();
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
		if(gamestate == intro)
		{
			if(mx>=684 && mx<=873 && my>=190 && my<=280)
			{
				gamestate=menu;
			}
			
		}
		else if(gamestate == menu)
		{
			if(mx>=128 && mx<=458 && my>=527 && my<=627)
			{
				gamestate=level1;
			}
			if(mx>=128 && mx<=458 && my>=417 && my<=517)
			{
				gamestate=hall_of_fame;
			}
			if(mx>=128 && mx<=458 && my>=301 && my<=401)
			{
				gamestate=instruction;
			}
			if(mx>=128 && mx<=458 && my>=185 && my<=285)
			{
				gamestate=about;
			}
			if(mx>=128 && mx<=458 && my>=64 && my<=164)
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
	
	if(gamestate == hall_of_fame || gamestate == instruction || gamestate == about || gamestate == level1 || gamestate == level2 || gamestate==level3 || gamestate==lost)
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
	if(gamestate==level3)
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
				for(int i=0;i<90;i++)
				{
					if(x+dextersWidth>bar3x[i] && x<bar3x[i]+bar3Dx[i] && y+dextersHeigth>bar3y[i] && y<bar3y[i]+bar3Dy[i])
					{
						x-=xSpeed;
						break;
					}
				}
				for(int i=0;i<7;i++)
				{
					if(x+dextersWidth>gem3[i].gx && x<gem3[i].gx+32 && y+dextersHeigth>gem3[i].gy && y<gem3[i].gy+32)
					{
						if(gem3[i].estate==1)
						{
							gem3[i].estate=0;
							disCnt++;
						}
					}
				}
				if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=7)
				{
					gamestate=about;
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
				for(int i=0;i<90;i++)
				{
					if(x+dextersWidth>bar3x[i] && x<bar3x[i]+bar3Dx[i] && y+dextersHeigth>bar3y[i] && y<bar3y[i]+bar3Dy[i])
					{
						x+=xSpeed;
						break;
					}
				}
				for(int i=0;i<7;i++)
				{
					if(x+dextersWidth>gem3[i].gx && x<gem3[i].gx+32 && y+dextersHeigth>gem3[i].gy && y<gem3[i].gy+32)
					{
						if(gem3[i].estate==1)
						{
							gem3[i].estate=0;
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
				for(int i=0;i<90;i++)
				{
					if(x+dextersWidth>bar3x[i] && x<bar3x[i]+bar3Dx[i] && y+dextersHeigth>bar3y[i] && y<bar3y[i]+bar3Dy[i])
					{
						y-=ySpeed;
						break;
					}
				}
				for(int i=0;i<7;i++)
				{
					if(x+dextersWidth>gem3[i].gx && x<gem3[i].gx+32 && y+dextersHeigth>gem3[i].gy && y<gem3[i].gy+32)
					{
						if(gem3[i].estate==1)
						{
							gem3[i].estate=0;
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
				for(int i=0;i<90;i++)
				{
					if(x+dextersWidth>bar3x[i] && x<bar3x[i]+bar3Dx[i] && y+dextersHeigth>bar3y[i] && y<bar3y[i]+bar3Dy[i])
					{
						y+=ySpeed;
						break;
					}
				}
				for(int i=0;i<7;i++)
				{
					if(x+dextersWidth>gem3[i].gx && x<gem3[i].gx+32 && y+dextersHeigth>gem3[i].gy && y<gem3[i].gy+32)
					{
						if(gem3[i].estate==1)
						{
							gem3[i].estate=0;
							disCnt++;
						}
					}
				}
				if(x+64>screenWidth-64 && x<=screenWidth && y+64>=0 && y<=screenHeight-724 && disCnt>=7)
				{
					gamestate=about;
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
/*void iSpecialKeyboard(unsigned char key)
{

	/*if(key == GLUT_KEY_END)
	{
		exit(0);
	}*/
	/*if(gamestate == level2){

		 SpectialKeyBordControl_Level2( key);
	}*/
	
	//place your codes for other keys here
//}
void iSpecialKeyboard(unsigned char key)
{

	/*if(key == GLUT_KEY_END)
	{
		exit(0);
	}*/
	if(key == GLUT_KEY_RIGHT)
	{
		x+=xSpeed;
		standcounter=0;
		index++;
		chforward =true;
		charstand=false;
		backward =false;
		if(index>3)
		{
			index=0;
		}
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
		index++;
		standcounter=0;
		chforward = false;
		charstand=false;
		backward =true;
		if(index>5)
		{
			index=0;
		}
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
		charstand =true;
		chforward =false;
		backward =false;
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
		charstand =true;
		chforward =false;
		backward =false;
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
	if(gamestate == level2){

		 SpectialKeyBordControl_Level2( key);
	}
	
	//place your codes for other keys here
}

//
int main()
{
	//place your own initialization codes here.
	keyposSet();
	enemyposSet();
	keypos3Set();
	enemypos3Set();
	//printf("%d\n",gamestate);
	if(gamestate==level1)
	{
		//printf("MHN\n");
		//iSetTimer(150,movingEnemy);
	}
	iInitialize(screenWidth, screenHeight+48, "Dexters' Laboratory");
	return 0;
}
