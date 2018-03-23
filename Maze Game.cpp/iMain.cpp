/*
    Author: Tasnid Mahin, Dip Chowdhury, Shams-Al-Ahsan.
    Version: 2.0
*/



# include <iostream>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#include <algorithm>
#include <string>
# include "iGraphics.h"
//# include "levelone.h"
//# include "leveltwo.h"
# include "levelthree.h"
//# include "halloffame.h"
//# include "menu.h"
using namespace std;
int BackGroundImag_Load[3];
char BackGroundImage[3][50] = {

				"backlastone.jpg","backlasttwo.jpg", "backlasttwo.jpg"
};
long long callscorem()
{
	long long fnsc=callscore3();
	return fnsc;
}
long long finalscore=0;
void iDraw()
{
	//place your drawing codes here
	menu1();//call menu
	if(gamestate == level1)
	{
		iClear();
		//iShowImage(0,0,screenWidth,screenHeight,BackGroundImag_Load[0]);
		//iShowBMPAlternative (0,0, "backlevel1.bmp");
		drawbars();
		//iShowBMPAlternative (1486,0, "destinationlast.bmp");
		iShowBMP2(1486,0, "destinationlast.bmp",0);	
		//iSetTimer(150,movingEnemy);
		movingEnemy();
		keyShow();
		enemyShow();
		if(!charstand)//character render
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
	}
	if(gamestate==level2)
	{
		iClear();
		//iShowImage(0,0,screenWidth,screenHeight,BackGroundImag_Load[2]);
		puzzle();
		iShowBMP2(1486,0, "destinationlast.bmp",0);
		//iShowBMP2(dex_x,dex_y,"image_level2//dex1.bmp",0);
		//iSetTimer(150,movingEnemy_level2);
		movingEnemy_level2();
		keyShow_level2();
		enemyShow_level2();
		if(!char2stand)//character render
		{
			if(ch2forward ==true)
			{
				iShowBMP2(dex_x,dex_y,forkward2Run[index2],0);
			}
			else if(back2ward == true)
			{
				iShowBMP2(dex_x,dex_y,backward2Run[index2],0);
			}
			stand2counter++;
			if(stand2counter>30)
			{
				char2stand = true;
				ch2forward =true;
				back2ward =true;
			}
		}
		else
		{
			iShowBMP2(dex_x,dex_y,"dex1.bmp",0);
		}
	}
	if(gamestate==level3)
	{
		iClear();
		//iShowImage(0,0,screenWidth,screenHeight,BackGroundImag_Load[1]);
		//iShowBMP2(0,0, "backlevel3.bmp",0);
		draw3bars();
		//iShowBMP2(x3,y3,"dex1.bmp",0);
		//iShowBMPAlternative (1486,0, "destinationlast.bmp");
		iShowBMP2(1486,0, "destinationlast.bmp",0);
		//iSetTimer(1000,moving3Enemy);
		gem3Show();
		henemy3Show();
		moving3Enemy();
		if(!char3stand)//character render
		{
			if(ch3forward ==true)
			{
				iShowBMP2(x3,y3,forkward3Run[index3],0);
			}
			else if(back3ward == true)
			{
				iShowBMP2(x3,y3,backward3Run[index3],0);
			}
			stand3counter++;
			if(stand3counter>30)
			{
				char3stand = true;
				ch3forward =true;
				back3ward =true;
			}
		}
		else
		{
			iShowBMP2(x3,y3,"dex1.bmp",0);
		}
	}
	if(gamestate==lost)
	{
		if(finalscore==0)
		{
			finalscore=callscorem();
		}
		string s =to_string(finalscore);
		iClear();
		iShowBMPAlternative(0,0,"lostlast.bmp");
		iText(790,350,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(850,325,(char*)s.c_str(),GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	timedraw();//show time and score
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
	menubutton(button,state, mx,my);
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
	//gamestate operation & navigation
	if(gamestate == hall_of_fame || gamestate == instruction || gamestate == about || gamestate == level1 || gamestate == level2 || gamestate==level3 || gamestate==lost || gamestate==menu || gamestate==finish)
	{
		if(key == '\b')
		{
			gamestate = menu;
			PlaySound("music\\menubgm.wav", NULL, SND_ASYNC);
		}
		else if(key == '2')
		{
			gamestate=level2;
			PlaySound("music\\menuoption.wav", NULL, SND_ASYNC);
		}
		else if(key == '3')
		{
			gamestate=level3;
			PlaySound("music\\menuoption.wav", NULL, SND_ASYNC);
		}
	}
	
	if(gamestate == level2)
	{
		iKeyBordControl_Level2(key);
	}
	if(gamestate == level1)
	{
		iKeyBordControl_Level1(key);
	}
	if(gamestate == level3)
	{
		iKeyBordControl_Level3(key);
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
	if(gamestate == level1){//key control function call

		 SpecialKeyBoardControl_Level1( key);
	}
	else if(gamestate == level2){

		 SpecialKeyBoardControl_Level2( key);
	}
	else if(gamestate == level3){

		 SpecialKeyBoardControl_Level3( key);
	}
	
	//place your codes for other keys here
}

//
int main()
{

	main_halloffame();//function called from header file
	//place your own initialization codes here.
	keyposSet();
	enemyposSet();
	keypostionset();//key postion function for level2
	//iSetTimer(150,movingEnemy_level2);
	enemyposSet_LEVEL2();
	keypos3Set();
	enemypos3Set();
	//printf("%d\n",gamestate);
	if(gamestate==level1)
	{
		//printf("MHN\n");
		//iSetTimer(150,movingEnemy);
	}
	iInitialize(screenWidth, screenHeight, "Dexters' Laboratory");
	//PlaySound("music", NULL, SND_LOOP | SND_ASYNC);
	PlaySound("music\\gameopen.wav", NULL, SND_ASYNC);
	BackGroundImag_Load[0] = iLoadImage(BackGroundImage[0]);//jpg image load
	BackGroundImag_Load[1] = iLoadImage(BackGroundImage[1]);
	BackGroundImag_Load[2] = iLoadImage(BackGroundImage[2]);

	iStart();
	return 0;
}
