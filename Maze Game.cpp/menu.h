
void menushow()
{
	if(gamestate == menu)
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
	}
}