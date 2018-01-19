
void menushow()
{
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
}