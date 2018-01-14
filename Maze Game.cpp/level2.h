
int back_image;

//x=screenWidth * (5.0/820.0);
//y=screenHeight * (260.0/510.0);
//int  xSpeed = 10;
//int ySpeed = 10;


struct rectangel{
	double rectpos_x;
	double rectpos_y;
    double rectwidth;
	double rectheight;

	

	rectangel(){
		
		;
	}
	rectangel(double x,double y,double w,double h){
		
		rectpos_x=x;
		rectpos_y=y;
		rectwidth=w;
		rectheight=h;
		

	}
	void valuerect(double x,double y,double w,double h){
		rectpos_x=x;
		rectpos_y=y;
		rectwidth=w;
		rectheight=h;

	}
	void drawrect(){
		iSetColor(99,172,180);
		iFilledRectangle(rectpos_x,rectpos_y,rectwidth,rectheight);
	}

}bar[100] ;





void puzzle()
{
  
	
	bar[0] = rectangel(screenWidth * (10.0/820.0),screenHeight * (5.0/510.0),screenWidth * (800.0/820.0),screenHeight * (5.0/510.0)); 
	bar[0].drawrect();

	bar[1] = rectangel(screenWidth * (10.0/820.0),screenHeight * (5.0/510.0),screenWidth * (5.0/820.0),screenHeight * (250.0/510.0)); 
	bar[1].drawrect();
	
	bar[2] = rectangel(screenWidth * (10.0/820.0),screenHeight * (330.0/510.0),screenWidth * (5.0/820.0),screenHeight * (173.0/510.0)); 
	bar[2].drawrect();

	bar[3] = rectangel(screenWidth * (10.0/820.0),screenHeight * (500.0/510.0),screenWidth * (800.0/820.0),screenHeight * (5.0/510.0)); 
	bar[3].drawrect();

	
	bar[4] = rectangel(screenWidth * (810.0/820.0),screenHeight * (5.0/510.0),screenWidth * (5.0/820.0),screenHeight * (430.0/510.0)); 
	bar[4].drawrect();

	bar[5] = rectangel(screenWidth * (90.0/820.0),screenHeight * (75.0/510.0),screenWidth * (280.0/820.0),screenHeight * (5.0/510.0)); 
	bar[5].drawrect();

	bar[6] = rectangel(screenWidth * (290.0/820.0),screenHeight * (80.0/510.0),screenWidth * (5.0/820.0),screenHeight * (114.0/510.0)); 
	bar[6].drawrect();

	bar[7] = rectangel(screenWidth * (10.0/820.0),screenHeight * (145.0/510.0),screenWidth * (200.0/820.0),screenHeight * (5.0/510.0)); 
	bar[7].drawrect();

	bar[8] = rectangel(screenWidth * (210.0/820.0),screenHeight * (145.0/510.0),screenWidth * (5.0/820.0),screenHeight * (50.0/510.0)); 
	bar[8].drawrect();
	
	bar[9] = rectangel(screenWidth * (210.0/820.0),screenHeight * (193.0/510.0),screenWidth * (85.0/820.0),screenHeight * (5.0/510.0)); 
	bar[9].drawrect();

	bar[10] = rectangel(screenWidth * (10.0/820.0),screenHeight * (330.0/510.0),screenWidth * (210.0/820.0),screenHeight * (5.0/510.0)); 
	bar[10].drawrect();

	bar[11] = rectangel(screenWidth * (85.0/820.0),screenHeight * (210.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar[11].drawrect();

	bar[12] = rectangel(screenWidth * (85.0/820.0),screenHeight * (270.0/510.0),screenWidth * (300.0/820.0),screenHeight * (5.0/510.0)); 
	bar[12].drawrect();

	bar[13] = rectangel(screenWidth * (220.0/820.0),screenHeight * (330.0/510.0),screenWidth * (5.0/820.0),screenHeight * (50.0/510.0)); 
	bar[13].drawrect();

	bar[14] = rectangel(screenWidth * (380.0/820.0),screenHeight * (135.0/510.0),screenWidth * (5.0/820.0),screenHeight * (135.0/510.0)); 
	bar[14].drawrect();

	bar[15] = rectangel(screenWidth * (445.0/820.0),screenHeight * (75.0/510.0),screenWidth * (120.0/820.0),screenHeight * (5.0/510.0)); 
	bar[15].drawrect();

	
	bar[16] = rectangel(screenWidth * (445.0/820.0),screenHeight * (80.0/510.0),screenWidth * (5.0/820.0),screenHeight * (250.0/510.0)); 
	bar[16].drawrect();

	
    bar[17] = rectangel(screenWidth * (290.0/820.0),screenHeight * (330.0/510.0),screenWidth * (220.0/820.0),screenHeight * (5.0/510.0)); 
	bar[17].drawrect();

	bar[18] = rectangel(screenWidth * (290.0/820.0),screenHeight * (335.0/510.0),screenWidth * (5.0/820.0),screenHeight * (100.0/510.0)); 
	bar[18].drawrect();

	bar[19] = rectangel(screenWidth * (110.0/820.0),screenHeight * (435.0/510.0),screenWidth * (240.0/820.0),screenHeight * (5.0/510.0)); 
	bar[19].drawrect();

	bar[20] = rectangel(screenWidth * (110.0/820.0),screenHeight * (390.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar[20].drawrect();
	
	bar[21] = rectangel(screenWidth * (380.0/820.0),screenHeight * (135.0/510.0),screenWidth * (70.0/820.0),screenHeight * (5.0/510.0)); 
	bar[21].drawrect();
	
	bar[22] = rectangel(screenWidth * (580.0/820.0),screenHeight * (460.0/510.0),screenWidth * (5.0/820.0),screenHeight * (40.0/510.0)); 
	bar[22].drawrect();

	bar[23] = rectangel(screenWidth * (640.0/820.0),screenHeight * (5.0/510.0),screenWidth * (5.0/820.0),screenHeight * (135.0/510.0)); 
	bar[23].drawrect();

	bar[24] = rectangel(screenWidth * (525.0/820.0),screenHeight * (140.0/510.0),screenWidth * (120.0/820.0),screenHeight * (5.0/510.0)); 
	bar[24].drawrect();

	bar[25] = rectangel(screenWidth * (525.0/820.0),screenHeight * (140.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar[25].drawrect();

	bar[26] = rectangel(screenWidth * (525.0/820.0),screenHeight * (260.0/510.0),screenWidth * (130.0/820.0),screenHeight * (5.0/510.0)); 
	bar[26].drawrect();

	bar[27] = rectangel(screenWidth * (650.0/820.0),screenHeight * (220.0/510.0),screenWidth * (5.0/820.0),screenHeight * (220.0/510.0)); 
	bar[27].drawrect();

	bar[28] = rectangel(screenWidth * (390.0/820.0),screenHeight * (390.0/510.0),screenWidth * (265.0/820.0),screenHeight * (5.0/510.0)); 
	bar[28].drawrect();

    
	bar[29] = rectangel(screenWidth * (500.0/820.0),screenHeight * (390.0/510.0),screenWidth * (5.0/820.0),screenHeight * (50.0/510.0)); 
	bar[29].drawrect();

	bar[30] = rectangel(screenWidth * (575.0/820.0),screenHeight * (145.0/510.0),screenWidth * (5.0/820.0),screenHeight * (60.0/510.0)); 
	bar[30].drawrect();

	bar[31] = rectangel(screenWidth * (720.0/820.0),screenHeight * (80.0/510.0),screenWidth * (5.0/820.0),screenHeight * (425.0/510.0)); 
	bar[31].drawrect();

	bar[32] = rectangel(screenWidth * (775.0/820.0),screenHeight * (160.0/510.0),screenWidth * (35.0/820.0),screenHeight * (5.0/510.0)); 
	bar[32].drawrect();

	bar[33] = rectangel(screenWidth * (720.0/820.0),screenHeight * (80.0/510.0),screenWidth * (35.0/820.0),screenHeight * (5.0/510.0)); 
	bar[33].drawrect();

	bar[34] = rectangel(screenWidth * (720.0/820.0),screenHeight * (250.0/510.0),screenWidth * (35.0/820.0),screenHeight * (5.0/510.0)); 
	bar[34].drawrect();

	
	bar[35] = rectangel(screenWidth * (775.0/820.0),screenHeight * (330.0/510.0),screenWidth * (35.0/820.0),screenHeight * (5.0/510.0)); 
	bar[35].drawrect();

	
	bar[36] = rectangel(screenWidth * (720.0/820.0),screenHeight * (430.0/510.0),screenWidth * (20.0/820.0),screenHeight * (5.0/510.0)); 
	bar[36].drawrect();

	bar[37] = rectangel(screenWidth * (795.0/820.0),screenHeight * (430.0/510.0),screenWidth * (15.0/820.0),screenHeight * (5.0/510.0)); 
	bar[37].drawrect();

   
}
