
//# include "leveltwo.h"
//# include "levelthree.h"
//#include <bits/stdc++.h>


int sec=0;//hs variable
int min=0;//hs
char seconds[10];//hs
char minute[10];//hs
int min_stor;//hs
int sec_stor;//hs
int check=0;//hs
int sortArray[10];
char ScoreShow[10][50];//
int totalscore=0;
char totalscore_char[10];
int score=0;




void timecontol(){//time show+ data sorrt
	
	if(gamestate==level1 || gamestate==level2 || gamestate==level3){
		if(sec<60){
			sec++;
		}
		if(sec==60){
			min++;
			sec=0;
		}
		if(min==10){
			gamestate=lost;
		}
	}

	if(gamestate == lost || gamestate==finish)
	{
		//file operation
		iSetColor(0,250,0);
		int totalsecond=sec+(min*60);
		score=totalscore-totalsecond;
		//score
		if(score>0){
			counter = 0;
			FILE *file3 = fopen("File//Score.txt","r");
			while(!feof(file3))
			{
				fscanf(file3," %d", &sortArray[counter]);
				if(sortArray[counter] != 0)
				counter++;
			} //high score sort
			fclose(file3);
			if(sortArray[counter-1] <= score)//high score sort
			{
				sortArray[counter -1] = score;
			}
			std::sort(sortArray , sortArray + counter );
			file3 = fopen("File/Score.txt","w");
			for(int i = counter - 1;i >= 0  ; i--)
			{
				fprintf(file3,"%d ",sortArray[i]);
			}
			fclose(file3);
		}
		min=0;
		sec=0;
		totalscore=0;
	}
}

void timedraw()
{//print time
	if(gamestate==level1 || gamestate==level2 || gamestate==level3)
	{
	    itoa(sec,seconds,10);
		itoa(min,minute,10);
		iSetColor(255,255,255);
		iText(1280,750,minute,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1310,750,":",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1330,750,seconds,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(totalscore,totalscore_char,10);
		iText(1400,750,totalscore_char,GLUT_BITMAP_TIMES_ROMAN_24);
}
}

void main_halloffame()
{	//main function only use
	
	counter = 0;//file operation
	FILE *file1 = fopen("File//Score.txt","r");
	while(!feof(file1))
	{
		fscanf(file1," %d", &sortArray[counter]);
		if(sortArray[counter] != 0)
		counter++;
	}
	fclose(file1);
	std::sort(sortArray , sortArray + counter );//sort score
	file1 = fopen("File/Score.txt","w");
	for(int i = counter - 1;i >= 0  ; i--)
	{
		fprintf(file1,"%d ",sortArray[i]);
	}
	fclose(file1);

	iSetTimer(1000,timecontol);	
}
