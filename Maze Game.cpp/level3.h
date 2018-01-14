
//int back_image;

//x=screenWidth * (5.0/820.0);
//y=screenHeight * (260.0/510.0);
//int  xSpeed = 10;
//int ySpeed = 10;


struct rectangel3{
	double rectpos_x;
	double rectpos_y;
    double rectwidth;
	double rectheight;

	

	rectangel3(){
		
		;
	}
	rectangel3(double x,double y,double w,double h){
		
		rectpos_x=x;
		rectpos_y=y;
		rectwidth=w;
		rectheight=h;
		

	}
	void valuerect3(double x,double y,double w,double h){
		rectpos_x=x;
		rectpos_y=y;
		rectwidth=w;
		rectheight=h;

	}
	void drawrect3(){
		iSetColor(99,172,180);
		iFilledRectangle(rectpos_x,rectpos_y,rectwidth,rectheight);
	}

}bar3[100] ;





void puzzle3()
{
  
	
	bar3[0] = rectangel3(screenWidth * (2.0/820.0),screenHeight * (2.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[0].drawrect3();
	bar3[1] = rectangel3(screenWidth * (2.0/820.0),screenHeight * (2.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar3[1].drawrect3();
	bar3[2] = rectangel3(screenWidth * (2.0/820.0),screenHeight * (120.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[2].drawrect3();
	bar3[3] = rectangel3(screenWidth * (50.0/820.0),screenHeight * (60.0/510.0),screenWidth * (155.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[3].drawrect3();
	bar3[4] = rectangel3(screenWidth * (200.0/820.0),screenHeight * (60.0/510.0),screenWidth * (5.0/820.0),screenHeight * (185.0/510.0)); 
	bar3[4].drawrect3();
	bar3[5] = rectangel3(screenWidth * (40.0/820.0),screenHeight * (190.0/510.0),screenWidth * (65.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[5].drawrect3();
	bar3[6] = rectangel3(screenWidth * (105.0/820.0),screenHeight * (115.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[6].drawrect3();
	bar3[7] = rectangel3(screenWidth * (105.0/820.0),screenHeight * (115.0/510.0),screenWidth * (45.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[7].drawrect3();
	bar3[8] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (115.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[8].drawrect3();
	bar3[9] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (225.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[9].drawrect3();
	bar3[10] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (305.0/510.0),screenWidth * (95.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[10].drawrect3();
	bar3[11] = rectangel3(screenWidth * (245.0/820.0),screenHeight * (255.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[11].drawrect3();
	bar3[12] = rectangel3(screenWidth * (205.0/820.0),screenHeight * (200.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[12].drawrect3();
	bar3[13] = rectangel3(screenWidth * (0.0/820.0),screenHeight * (245.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[13].drawrect3();
	bar3[14] = rectangel3(screenWidth * (105.0/820.0),screenHeight * (245.0/510.0),screenWidth * (50.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[14].drawrect3();
	bar3[15] = rectangel3(screenWidth * (50.0/820.0),screenHeight * (295.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[15].drawrect3();
	bar3[16] = rectangel3(screenWidth * (45.0/820.0),screenHeight * (295.0/510.0),screenWidth * (5.0/820.0),screenHeight * (105.0/510.0)); 
	bar3[16].drawrect3();
	bar3[17] = rectangel3(screenWidth * (0.0/820.0),screenHeight * (400.0/510.0),screenWidth * (50.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[17].drawrect3();
	bar3[18] = rectangel3(screenWidth * (100.0/820.0),screenHeight * (295.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[18].drawrect3();



	bar3[19] = rectangel3(screenWidth * (400.0/820.0),screenHeight * (100.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[19].drawrect3();
	bar3[20] = rectangel3(screenWidth * (400.0/820.0),screenHeight * (100.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar3[20].drawrect3();
	bar3[21] = rectangel3(screenWidth * (400.0/820.0),screenHeight * (220.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[21].drawrect3();
	bar3[22] = rectangel3(screenWidth * (450.0/820.0),screenHeight * (160.0/510.0),screenWidth * (155.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[22].drawrect3();
	bar3[23] = rectangel3(screenWidth * (600.0/820.0),screenHeight * (160.0/510.0),screenWidth * (5.0/820.0),screenHeight * (185.0/510.0)); 
	bar3[23].drawrect3();
	bar3[24] = rectangel3(screenWidth * (440.0/820.0),screenHeight * (290.0/510.0),screenWidth * (65.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[24].drawrect3();
	bar3[25] = rectangel3(screenWidth * (505.0/820.0),screenHeight * (215.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[25].drawrect3();
	bar3[26] = rectangel3(screenWidth * (505.0/820.0),screenHeight * (215.0/510.0),screenWidth * (45.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[26].drawrect3();
	bar3[27] = rectangel3(screenWidth * (550.0/820.0),screenHeight * (215.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[27].drawrect3();
	bar3[28] = rectangel3(screenWidth * (550.0/820.0),screenHeight * (325.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[28].drawrect3();
	bar3[29] = rectangel3(screenWidth * (550.0/820.0),screenHeight * (405.0/510.0),screenWidth * (95.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[29].drawrect3();
	bar3[30] = rectangel3(screenWidth * (645.0/820.0),screenHeight * (355.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[30].drawrect3();
	bar3[31] = rectangel3(screenWidth * (605.0/820.0),screenHeight * (300.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[31].drawrect3();
	bar3[32] = rectangel3(screenWidth * (400.0/820.0),screenHeight * (345.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[32].drawrect3();
	bar3[33] = rectangel3(screenWidth * (405.0/820.0),screenHeight * (345.0/510.0),screenWidth * (50.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[33].drawrect3();
	bar3[34] = rectangel3(screenWidth * (450.0/820.0),screenHeight * (395.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[34].drawrect3();
	bar3[35] = rectangel3(screenWidth * (445.0/820.0),screenHeight * (395.0/510.0),screenWidth * (5.0/820.0),screenHeight * (105.0/510.0)); 
	bar3[35].drawrect3();
	bar3[36] = rectangel3(screenWidth * (400.0/820.0),screenHeight * (500.0/510.0),screenWidth * (50.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[36].drawrect3();
	bar3[37] = rectangel3(screenWidth * (500.0/820.0),screenHeight * (395.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[37].drawrect3();
	

	bar3[38] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (355.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[38].drawrect3();
	bar3[39] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (355.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar3[39].drawrect3();
	bar3[40] = rectangel3(screenWidth * (150.0/820.0),screenHeight * (475.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[40].drawrect3();
	bar3[41] = rectangel3(screenWidth * (200.0/820.0),screenHeight * (415.0/510.0),screenWidth * (155.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[42].drawrect3();
	bar3[43] = rectangel3(screenWidth * (350.0/820.0),screenHeight * (415.0/510.0),screenWidth * (5.0/820.0),screenHeight * (185.0/510.0)); 
	bar3[43].drawrect3();
	bar3[44] = rectangel3(screenWidth * (190.0/820.0),screenHeight * (545.0/510.0),screenWidth * (65.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[44].drawrect3();
	bar3[45] = rectangel3(screenWidth * (255.0/820.0),screenHeight * (470.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[45].drawrect3();
	bar3[46] = rectangel3(screenWidth * (255.0/820.0),screenHeight * (470.0/510.0),screenWidth * (45.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[46].drawrect3();
	bar3[47] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (470.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[47].drawrect3();
	bar3[48] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (580.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[48].drawrect3();
	bar3[49] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (660.0/510.0),screenWidth * (95.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[49].drawrect3();
	bar3[50] = rectangel3(screenWidth * (395.0/820.0),screenHeight * (610.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[50].drawrect3();




	bar3[51] = rectangel3(screenWidth * (645.0/820.0),screenHeight * (2.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[51].drawrect3();
	bar3[52] = rectangel3(screenWidth * (645.0/820.0),screenHeight * (2.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar3[52].drawrect3();
	bar3[53] = rectangel3(screenWidth * (645.0/820.0),screenHeight * (120.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[53].drawrect3();
	bar3[54] = rectangel3(screenWidth * (695.0/820.0),screenHeight * (60.0/510.0),screenWidth * (155.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[54].drawrect3();
	bar3[55] = rectangel3(screenWidth * (845.0/820.0),screenHeight * (60.0/510.0),screenWidth * (5.0/820.0),screenHeight * (185.0/510.0)); 
	bar3[55].drawrect3();
	bar3[56] = rectangel3(screenWidth * (695.0/820.0),screenHeight * (190.0/510.0),screenWidth * (65.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[56].drawrect3();
	bar3[57] = rectangel3(screenWidth * (750.0/820.0),screenHeight * (115.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[57].drawrect3();
	bar3[58] = rectangel3(screenWidth * (750.0/820.0),screenHeight * (115.0/510.0),screenWidth * (45.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[58].drawrect3();
	bar3[59] = rectangel3(screenWidth * (795.0/820.0),screenHeight * (115.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[59].drawrect3();
	bar3[60] = rectangel3(screenWidth * (795.0/820.0),screenHeight * (225.0/510.0),screenWidth * (5.0/820.0),screenHeight * (80.0/510.0)); 
	bar3[60].drawrect3();
	bar3[61] = rectangel3(screenWidth * (795.0/820.0),screenHeight * (305.0/510.0),screenWidth * (95.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[61].drawrect3();
	bar3[62] = rectangel3(screenWidth * (890.0/820.0),screenHeight * (255.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[62].drawrect3();
	bar3[63] = rectangel3(screenWidth * (850.0/820.0),screenHeight * (200.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[63].drawrect3();
	


	bar3[64] = rectangel3(screenWidth * (245.0/820.0),screenHeight * (0.0/510.0),screenWidth * (420.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[64].drawrect3();
	bar3[65] = rectangel3(screenWidth * (255.0/820.0),screenHeight * (0.0/510.0),screenWidth * (5.0/820.0),screenHeight * (145.0/510.0)); 
	bar3[65].drawrect3();
	bar3[66] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (55.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[66].drawrect3();
	bar3[67] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (55.0/510.0),screenWidth * (5.0/820.0),screenHeight * (120.0/510.0)); 
	bar3[67].drawrect3();
	bar3[68] = rectangel3(screenWidth * (300.0/820.0),screenHeight * (175.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[68].drawrect3();


	bar3[69] = rectangel3(screenWidth * (705.0/820.0),screenHeight * (355.0/510.0),screenWidth * (90.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[69].drawrect3();
	bar3[70] = rectangel3(screenWidth * (705.0/820.0),screenHeight * (355.0/510.0),screenWidth * (5.0/820.0),screenHeight * (105.0/510.0)); 
	bar3[70].drawrect3();
	bar3[71] = rectangel3(screenWidth * (705.0/820.0),screenHeight * (410.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[71].drawrect3();
	bar3[72] = rectangel3(screenWidth * (805.0/820.0),screenHeight * (395.0/510.0),screenWidth * (5.0/820.0),screenHeight * (105.0/510.0)); 
	bar3[72].drawrect3();
	bar3[73] = rectangel3(screenWidth * (765.0/820.0),screenHeight * (500.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[73].drawrect3();

	bar3[74] = rectangel3(screenWidth * (445.0/820.0),screenHeight * (0.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[74].drawrect3();
	bar3[75] = rectangel3(screenWidth * (555.0/820.0),screenHeight * (60.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[75].drawrect3();
	bar3[76] = rectangel3(screenWidth * (555.0/820.0),screenHeight * (60.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar3[76].drawrect3();
	bar3[77] = rectangel3(screenWidth * (505.0/820.0),screenHeight * (0.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[77].drawrect3();


	
	bar3[78] = rectangel3(screenWidth * (290.0/820.0),screenHeight * (250.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[78].drawrect3();
	bar3[79] = rectangel3(screenWidth * (295.0/820.0),screenHeight * (350.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[79].drawrect3();
	bar3[80] = rectangel3(screenWidth * (295.0/820.0),screenHeight * (350.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar3[80].drawrect3();
	bar3[81] = rectangel3(screenWidth * (355.0/820.0),screenHeight * (250.0/510.0),screenWidth * (5.0/820.0),screenHeight * (55.0/510.0)); 
	bar3[81].drawrect3();
	

	bar3[82] = rectangel3(screenWidth * (195.0/820.0),screenHeight * (400.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[82].drawrect3();
	bar3[83] = rectangel3(screenWidth * (195.0/820.0),screenHeight * (400.0/510.0),screenWidth * (5.0/820.0),screenHeight * (35.0/510.0)); 
	bar3[83].drawrect3();


	bar3[84] = rectangel3(screenWidth * (95.0/820.0),screenHeight * (410.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[84].drawrect3();
	bar3[85] = rectangel3(screenWidth * (95.0/820.0),screenHeight * (410.0/510.0),screenWidth * (5.0/820.0),screenHeight * (35.0/510.0)); 
	bar3[85].drawrect3();

	bar3[86] = rectangel3(screenWidth * (580.0/820.0),screenHeight * (460.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[86].drawrect3();
	bar3[87] = rectangel3(screenWidth * (580.0/820.0),screenHeight * (460.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar3[87].drawrect3();
	

	bar3[88] = rectangel3(screenWidth * (0.0/820.0),screenHeight * (460.0/510.0),screenWidth * (55.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[88].drawrect3();
	bar3[89] = rectangel3(screenWidth * (0.0/820.0),screenHeight * (460.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar3[89].drawrect3();
	

	bar3[90] = rectangel3(screenWidth * (710.0/820.0),screenHeight * (260.0/510.0),screenWidth * (45.0/820.0),screenHeight * (5.0/510.0)); 
	bar3[90].drawrect3();
	bar3[91] = rectangel3(screenWidth * (710.0/820.0),screenHeight * (260.0/510.0),screenWidth * (5.0/820.0),screenHeight * (45.0/510.0)); 
	bar3[91].drawrect3();
	

   
}
