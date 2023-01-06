/* Janelle Dawson
 * Lab 3: Glitter
 * Fall 2021
 */

#include "SSDL.h"

using namespace std;

int main(int argc, char* argv[])
{
	SSDL_SetWindowSize(800, 600);

	//Images
	const SSDL_Image ASSASSIN = SSDL_LoadImage("Character_One.png");
	const SSDL_Image MAGE = SSDL_LoadImage("Character_Two.png");
	const SSDL_Image HUNTER = SSDL_LoadImage("Character_Three.png");

	SSDL_Music music;

	//Player Inputs
	int  character_type = 0;
	string character_name = "";
	int  music_type = 0;

	//Important X and Y Cords
	int x = 0;
	int y = 0;

	const int HALF_X = 320;
	const int HALF_Y = 240;

	const int TOP_X = 0;
	const int TOP_Y = 0;

	const int BOTTOM_Y = 480;

	//Setting font
	const SSDL_Font FONT = SSDL_OpenSystemFont("timesbd", 24);
	const SSDL_Font FONT_1 = SSDL_OpenSystemFont("timesbd", 30);
	SSDL_SetFont(FONT);

	//Main Title Screen - Picking character type
	sout << "Pick Your Character Type: " << endl << endl;

	SSDL_SetFont(FONT_1);
	sout << "Assassin" << endl << endl;
	sout << endl;
	sout << endl;
	sout << "Mage" << endl << endl;
	sout << endl;
	sout << endl;
	sout << "Hunter" << endl << endl;

	SSDL_WaitMouse();
	x = SSDL_GetMouseX();
	y = SSDL_GetMouseY();

	for(int i=1; i<2; i++)
	{
		if(x < HALF_X && y < TOP_X + 90 && y > TOP_X + 30)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			character_type = 0;
		}
		else if(x < HALF_X && y < HALF_Y + 30 && y > HALF_Y - 30)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			character_type = 1;
		}	
		else if(x < HALF_X && y < BOTTOM_Y - 90 && y > HALF_Y + 90)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			character_type = 2;
		}
		else
		{
			sout << "Please click on a character type" << endl;
			i--;
			SSDL_WaitMouse();
			x = SSDL_GetMouseX();
			y = SSDL_GetMouseY();
		}
	}

	//Selecting music type
	SSDL_SetFont(FONT);
	sout << "Select your music: " << endl << endl;
	SSDL_SetFont(FONT_1);
	sout << "ADVENTURE" << endl << endl;
	sout << endl;
	sout << endl;
	sout << "8-BIT" << endl << endl;
	sout << endl;
	sout << endl;
	sout << "CHILLING" << endl << endl;

	SSDL_WaitMouse();
	x = SSDL_GetMouseX();
	y = SSDL_GetMouseY();

	for(int i=1; i<2; i++)
	{
		if(x < HALF_X && y < TOP_X + 90 && y > TOP_X + 30)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			music_type = 0;
		}
		else if(x < HALF_X && y < HALF_Y + 30 && y > HALF_Y - 30)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			music_type = 1;
		}	
		else if(x < HALF_X && y < BOTTOM_Y - 90 && y > HALF_Y + 90)
		{
			SSDL_RenderClear();
			SSDL_SetCursor(0, 0);
			music_type = 2;
		}
		else
		{
			sout << "Please select your music" << endl;
			i--;
			SSDL_WaitMouse();
			x = SSDL_GetMouseX();
			y = SSDL_GetMouseY();
		}
	}

	//Entering the characters name
	sout << endl;
	sout << "Hit ENTER when done" << endl;
	sout << "Enter Characters Name: ";
	ssin >> character_name;

	if(SSDL_IsKeyPressed(SDLK_RETURN)) //Check to see if "Enter" / "Return" was hit.
	{
		SSDL_RenderClear();
	}

	//Printing images
	if(character_type == 0)
	{
		SSDL_RenderImage(ASSASSIN, 0, 0);
		sout << character_name << " the Assassin" << endl;
	}
	if(character_type == 1)
	{
		SSDL_RenderImage(MAGE, 0, 0);
		sout << character_name << " the Mage" << endl;
	}
	if(character_type == 2)
	{
		SSDL_RenderImage(HUNTER, 0, 0);
		sout << character_name << " the Hunter" << endl;
	}


	//Playing music
	if(music_type == 0)
	{                       
		music = SSDL_LoadMUS("shadydave_small_adventurers.wav");	
		SSDL_PlayMusic(music, SSDL_FOREVER);   
	}
	else if (music_type == 1) 
	{                
		music = SSDL_LoadMUS("retro-game-overworld-loop-1.wav");
		SSDL_PlayMusic(music, SSDL_FOREVER);       
	}
	else if(music_type == 2)
	{
		music = SSDL_LoadMUS("szegvari_battle-cinematic.wav");
		SSDL_PlayMusic(music, SSDL_FOREVER);
	}

	SSDL_WaitKey();
	return 0;
}
