
int bar3x[]={0,0,0,94,378,76,198,198,283,284,283,463,387,0,198,92,85,0,189,600,600,600,694,978,676,798,798,883,884,883,1063,987,600,798,692,685,600,789,495,495,495,260,300,300,300,376,498,498,583,570,880,880,880,956,1078,1078,1163,880,977,777,978,1070,1192,1192,1277,890,890,1200,1200,1200,1276,1398,1398,1000,1290,1290,1390,1522,1042,142,3,192,1155,1065,1165,1265,1365,1420,1310,1340};
int bar3Dx[]={170,bh,104,293,bh,123,bh,85,bh,bh,180,bh,104,104,94,104,bh,94,bh,170,bh,104,293,bh,123,bh,85,bh,bh,180,bh,104,104,94,104,bh,94,bh,170,bh,104,150,170,bh,104,123,bh,85,bh,bh,170,bh,104,123,bh,85,bh,bh,bh,bh,170,123,bh,85,bh,bh,85,104,bh,104,123,bh,45,294,bh,104,130,bh,480,234,50,170,272,bh,bh,bh,bh,bh,30,bh};
int bar3y[]={sh-788,sh-788,sh-603,sh-695,sh-694,sh-494,sh-610,sh-610,sh-610,sh-430,sh-317,sh-394,sh-479,sh-409,sh-409,sh-332,sh-332,sh-170,sh-332,sh-638,sh-638,sh-453,sh-545,sh-544,sh-344,sh-460,sh-460,sh-460,sh-280,sh-167,sh-244,sh-329,sh-259,sh-259,sh-182,sh-182,sh-20,sh-182,sh-730,sh-730,sh-565,sh-788,sh-228,sh-228,sh-125,sh-20,sh-137,sh-137,sh-137,sh-380,sh-788,sh-788,sh-685,sh-545,sh-697,sh-697,sh-697,sh-685,sh-685,sh-788,sh-428,sh-220,sh-337,sh-337,sh-337,sh-80,sh-80,sh-588,sh-588,sh-515,sh-420,sh-537,sh-537,sh-788,sh-788,sh-705,sh-625,sh-688,sh-8,sh-20,sh-80,sh-170,sh-130,sh-58,sh-130,sh-48,sh-130,sh-330,sh-218,sh-240};
int bar3Dy[]={bh,185,bh,bh,286,bh,124,bh,85,114,bh,85,bh,bh,bh,bh,162,bh,85,bh,185,bh,bh,286,bh,124,bh,85,114,bh,85,bh,bh,bh,bh,162,bh,85,bh,165,bh,bh,bh,105,bh,bh,124,bh,35,45,bh,105,bh,bh,160,bh,35,50,50,60,bh,bh,124,bh,35,80,bh,bh,75,bh,bh,124,bh,bh,85,bh,bh,788,bh,bh,bh,60,bh,50,40,40,40,200,bh,30};
int bar3Width=7;
void draw3bars(){
	iSetColor(0,250,0);
	iFilledRectangle(0,screenHeight-788,170,bar3Width); 
	iFilledRectangle(0,screenHeight-788,bar3Width,185); 
	iFilledRectangle(0,screenHeight-603,104,bar3Width); 
	iFilledRectangle(94,screenHeight-695,293,bar3Width); 
	iFilledRectangle(378,screenHeight-694,bar3Width,286); 
	iFilledRectangle(76,screenHeight-494,123,bar3Width); 
	iFilledRectangle(198,screenHeight-610,bar3Width,124); 
	iFilledRectangle(198,screenHeight-610,85,bar3Width); 
	iFilledRectangle(283,screenHeight-610,bar3Width,85); 
	iFilledRectangle(284,screenHeight-430,bar3Width,114); 
	iFilledRectangle(283,screenHeight-317,180,bar3Width); 
	iFilledRectangle(463,screenHeight-394,bar3Width,85); 
	iFilledRectangle(387,screenHeight-479,104,bar3Width); 
	iFilledRectangle(0,screenHeight-409,104,bar3Width); 
	iFilledRectangle(198,screenHeight-409,94,bar3Width); 
	iFilledRectangle(92,screenHeight-332,104,bar3Width); 
	iFilledRectangle(85,screenHeight-332,bar3Width,162); 
	iFilledRectangle(0,screenHeight-170,94,bar3Width); 
	iFilledRectangle(189,screenHeight-332,bar3Width,85); 
	

	iFilledRectangle(600,screenHeight-638,170,bar3Width); 
	iFilledRectangle(600,screenHeight-638,bar3Width,185); 
	iFilledRectangle(600,screenHeight-453,104,bar3Width); 
	iFilledRectangle(694,screenHeight-545,293,bar3Width); 
	iFilledRectangle(978,screenHeight-544,bar3Width,286); 
	iFilledRectangle(676,screenHeight-344,123,bar3Width); 
	iFilledRectangle(798,screenHeight-460,bar3Width,124); 
	iFilledRectangle(798,screenHeight-460,85,bar3Width); 
	iFilledRectangle(883,screenHeight-460,bar3Width,85); 
	iFilledRectangle(884,screenHeight-280,bar3Width,114); 
	iFilledRectangle(883,screenHeight-167,180,bar3Width); 
	iFilledRectangle(1063,screenHeight-244,bar3Width,85); 
	iFilledRectangle(987,screenHeight-329,104,bar3Width); 
	iFilledRectangle(600,screenHeight-259,104,bar3Width); 
	iFilledRectangle(798,screenHeight-259,94,bar3Width); 
	iFilledRectangle(692,screenHeight-182,104,bar3Width); 
	iFilledRectangle(685,screenHeight-182,bar3Width,162); 
	iFilledRectangle(600,screenHeight-20,94,bar3Width); 
	iFilledRectangle(789,screenHeight-182,bar3Width,85); 

	iFilledRectangle(495,screenHeight-730,170,bar3Width); 
	iFilledRectangle(495,screenHeight-730,bar3Width,165); 
	iFilledRectangle(495,screenHeight-565,104,bar3Width); 

	iFilledRectangle(260,screenHeight-788,150,bar3Width);

	iFilledRectangle(300,screenHeight-228,170,bar3Width); 
	iFilledRectangle(300,screenHeight-228,bar3Width,105); 
	iFilledRectangle(300,screenHeight-125,104,bar3Width); 
	iFilledRectangle(376,screenHeight-20,123,bar3Width); 
	iFilledRectangle(498,screenHeight-137,bar3Width,124); 
	iFilledRectangle(498,screenHeight-137,85,bar3Width); 
	iFilledRectangle(583,screenHeight-137,bar3Width,35); 

	iFilledRectangle(570,screenHeight-380,bar3Width,45); 

	iFilledRectangle(880,screenHeight-788,170,bar3Width); 
	iFilledRectangle(880,screenHeight-788,bar3Width,105); 
	iFilledRectangle(880,screenHeight-685,104,bar3Width); 

	iFilledRectangle(956,screenHeight-545,123,bar3Width); 
	iFilledRectangle(1078,screenHeight-697,bar3Width,160); 
	iFilledRectangle(1078,screenHeight-697,85,bar3Width); 
	iFilledRectangle(1163,screenHeight-697,bar3Width,35); 
	iFilledRectangle(880,screenHeight-685,bar3Width,50); 
	iFilledRectangle(977,screenHeight-685,bar3Width,50); 
	iFilledRectangle(777,screenHeight-788,bar3Width,60); 

	iFilledRectangle(978,screenHeight-428,170,bar3Width); 

	iFilledRectangle(1070,screenHeight-220,123,bar3Width); 
	iFilledRectangle(1192,screenHeight-337,bar3Width,124); 
	iFilledRectangle(1192,screenHeight-337,85,bar3Width); 
	iFilledRectangle(1277,screenHeight-337,bar3Width,35);

	iFilledRectangle(890,screenHeight-80,bar3Width,80); 
	iFilledRectangle(890,screenHeight-80,85,bar3Width); 

	iFilledRectangle(1200,screenHeight-588,104,bar3Width); //issue
	iFilledRectangle(1200,screenHeight-588,bar3Width,75); 
	iFilledRectangle(1200,screenHeight-515,104,bar3Width); 
	iFilledRectangle(1276,screenHeight-420,123,bar3Width); 
	iFilledRectangle(1398,screenHeight-537,bar3Width,124); 
	iFilledRectangle(1398,screenHeight-537,45,bar3Width); 


	iFilledRectangle(1000,screenHeight-788,294,bar3Width); 
	iFilledRectangle(1290,screenHeight-788,bar3Width,85); 
	iFilledRectangle(1290,screenHeight-705,104,bar3Width); 
	iFilledRectangle(1390,screenHeight-625,130,bar3Width); 

	iFilledRectangle(1522,screenHeight-688,bar3Width,788); 
	iFilledRectangle(1042,screenHeight-8,480,bar3Width); 
	iFilledRectangle(142,screenHeight-20,234,bar3Width);
	iFilledRectangle(3,screenHeight-80,50,bar3Width); 
	iFilledRectangle(192,screenHeight-170,bar3Width, 60); 

	iFilledRectangle(1155,screenHeight-130,272,bar3Width);
	iFilledRectangle(1065,screenHeight-58,bar3Width,50);
	iFilledRectangle(1165,screenHeight-130,bar3Width,40);
	iFilledRectangle(1265,screenHeight-48,bar3Width,40);
	iFilledRectangle(1365,screenHeight-130,bar3Width,40); 
	iFilledRectangle(1420,screenHeight-330,bar3Width, 200); 

	iFilledRectangle(1310,screenHeight-218,30, bar3Width);
	iFilledRectangle(1340,screenHeight-240,bar3Width,30); 
	
}

struct GEM
{
	int gx,gy, estate;
}gem3[7];
//for setting the gem positions of level3
void keypos3Set()
{
	srand(time(0));
	for(int i=0;i<7;i++)
	{
		gem3[i].gx=rand()%1519;//random x-axis position of keys
		gem3[i].gy=rand()%757;//random y-axis position of keys
		gem3[i].estate=1;//state 1 means key is visible
	}
}
//for showing gems

void gem3Show()
{
	for(int i=0;i<7;i++)// 7 for 7 gems
	{
		if(gem3[i].gx+32<=dextersWidth && gem3[i].gx>=0 && gem3[i].gy>=screenHeight-dextersHeigth-4 && gem3[i].gy+32<=screenHeight)//check if gem position in dexters initial position
		{
			gem3[i].gx=rand()%1519;//change the position
			gem3[i].gy=rand()%757;
		}
		if(gem3[i].gx+32<=screenWidth && gem3[i].gx>=1486 && gem3[i].gy>=0 && gem3[i].gy+32<=screenHeight-724)//check if gem position in destination's initial position
		{
			gem3[i].gx=rand()%1519;//change the position
			gem3[i].gy=rand()%757;
		}
		if(gem3[i].gx+64>screenWidth)//check that if it is in the screen
		{
			gem3[i].gx=screenWidth-64;
		}
		if(gem3[i].gy+64>screenHeight)//check that if it is in the screen
		{
			gem3[i].gx=screenHeight-64;
		}
		for(int j=0;j<90;j++)//by loop check that the keys position overlap the bars position
		{
			if(gem3[i].gx+32>bar3x[j] && gem3[i].gx<bar3x[j]+bar3Dx[j] && gem3[i].gy+32>bar3y[j] && gem3[i].gy<bar3y[j]+bar3Dy[j])
			{
				gem3[i].gx=rand()%1519;
				gem3[i].gy=rand()%757;
				j=-1;
			}
		}
		if(gem3[i].estate)//if gem's state true show the image
		{
			iShowBMP2(gem3[i].gx,gem3[i].gy,"key.bmp",0);
		}
	}
}

struct HENEMYES
{
	int hx,hy,estate,hdir;
}henemy[3];
void enemypos3Set()//setting enemy position
{
	for(int i=0;i<3;i++)
	{
		henemy[i].hx=rand()%1487;//random settings of enemy's x-axis position
		henemy[i].hy=rand()%724;
		henemy[i].estate=1;
		henemy[i].hdir=rand()%4;//random direction setting
	}
}
void henemy3Show()//showing enemy's
{
	for(int i=0;i<3;i++)
	{
		if(henemy[i].hx+64<=dextersWidth && henemy[i].hx>=0 && henemy[i].hy>=screenHeight-dextersHeigth-4 && henemy[i].hy+64<=screenHeight)//check if the henemy's initial postion set in dexter's initial position then change the position in random place
		{
			henemy[i].hx=rand()%1487;
			henemy[i].hy=rand()%724;
		}
		if(henemy[i].hx+64<=screenWidth && henemy[i].hx>=1486 && henemy[i].hy>=0 && henemy[i].hy+64<=screenHeight-724)//check if the enemy's initial postion set in destination's initial position then change the position in random place
		{
			henemy[i].hx=rand()%1487;
			henemy[i].hy=rand()%724;
		}
		if(henemy[i].hx+64>screenWidth)//check that enemy is in the screen
		{
			henemy[i].hx=screenWidth-64;
			henemy[i].hdir=rand()%4;
		}
		if(henemy[i].hy+64>screenHeight)//check that enemy is in the screen
		{
			henemy[i].hy=screenHeight-64;
			henemy[i].hdir=rand()%4;
		}
		if(henemy[i].hx+64>=x && henemy[i].hx<=x+64 && henemy[i].hy+64>=y && henemy[i].hy<=y+64)//if enemy touch the dexter he lost
		{
			gamestate=lost;
		}
		if(enemy[i].ex<0)//check that enemy is in the screen
		{
			henemy[i].hx=0;
			henemy[i].hdir=rand()%4;
		}
		if(henemy[i].hy<0)//check that enemy is in the screen
		{
			henemy[i].hy=0;
			henemy[i].hdir=rand()%4;
		}
		/*for(int j=0;j<41;j++)
		{
			if(enemy[i].ex+64>barx[j] && enemy[i].ex<barx[j]+barDx[j] && enemy[i].ey+64>bary[j] && enemy[i].ey<bary[j]+barDy[j])
			{
				enemy[i].ex=rand()%1487;
				enemy[i].ey=rand()%724;
				j=-1;
			}
		}*/
		if(henemy[i].estate)//
		{
			iShowBMP2(henemy[i].hx,henemy[i].hy,"eenn.bmp",0);
		}
	}
}
void moving3Enemy()//for enemy moving
{
	//printf("ENEMY");
	for(int i=0;i<3;i++)//loop for 5 enemy's
	{
		if(henemy[i].hdir==0)//0 direction for right
		{
			henemy[i].hx+=enxSpeed;
		}
		else if(henemy[i].hdir==1)//1 direction for left
		{
			henemy[i].hx-=enxSpeed;
		}
		else if(henemy[i].hdir==2)//2 direction for up
		{
			henemy[i].hy+=enySpeed;
		}
		else
		{
			henemy[i].hy-=enySpeed;
		}
		/*if(enemy[i].ex+64<=screenWidth && enemy[i].ex>=1486 && enemy[i].ey>=0 && enemy[i].ey+64<=screenHeight-724)
		{
			enemy[i].ex;
			enemy[i].ey;
		}*/
		for(int j=0;j<90;j++)//for checking collision with bars
		{
			if(henemy[i].hx+64>bar3x[j] && henemy[i].hx<bar3x[j]+bar3Dx[j] && henemy[i].hy+64>bar3y[j] && henemy[i].hy<bar3y[j]+bar3Dy[j])
			{
				if(henemy[i].hdir==0)
				{
					henemy[i].hx-=enxSpeed;
					henemy[i].hdir=rand()%4;
					if(henemy[i].hdir==0)
					{
						henemy[i].hdir=rand()%4;
					}
					else if(henemy[i].hdir==1)
					{
						henemy[i].hx-=enxSpeed;
					}
					else if(henemy[i].hdir==2)
					{
						henemy[i].hy+=enySpeed;
					}
					else
					{
						henemy[i].hy-=enySpeed;
					}
				}
				else if(henemy[i].hdir==1)
				{
					henemy[i].hx+=enxSpeed;
					henemy[i].hdir=rand()%4;
					if(henemy[i].hdir==0)
					{
						henemy[i].hx+=enxSpeed;
					}
					else if(henemy[i].hdir==1)
					{
						henemy[i].hdir=rand()%4;
					}
					else if(henemy[i].hdir==2)
					{
						henemy[i].hy+=enySpeed;
					}
					else
					{
						henemy[i].hy-=enySpeed;
					}
				}
				else if(henemy[i].hdir==2)
				{
					henemy[i].hy-=enxSpeed;
					henemy[i].hdir=rand()%4;
					if(henemy[i].hdir==0)
					{
						henemy[i].hx+=enxSpeed;
					}
					else if(henemy[i].hdir==1)
					{
						henemy[i].hx-=enxSpeed;
					}
					else if(henemy[i].hdir==2)
					{
						henemy[i].hdir=rand()%4;
					}
					else
					{
						henemy[i].hy-=enySpeed;
					}
				}
				else
				{
					henemy[i].hy+=enxSpeed;
					henemy[i].hdir=rand()%4;
					if(henemy[i].hdir==0)
					{
						henemy[i].hx+=enxSpeed;
					}
					else if(henemy[i].hdir==1)
					{
						henemy[i].hx-=enxSpeed;
					}
					else if(henemy[i].hdir==2)
					{
						henemy[i].hy+=enySpeed;
					}
					else
					{
						henemy[i].hdir=rand()%4;
					}
				}
				j=-1;
			}
		}
	}
}