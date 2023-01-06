/* Janelle Dawson
 * Lab 1: Drawing with SSDL (Glitter!)
 * Fall 2021
 */

#include "SSDL.h"
#include <unistd.h>

int main (int argc, char* argv[])
{
	//Dragon
	const SSDL_Image DRAGON = SSDL_LoadImage ("Dragon.png");
	SSDL_RenderImage (DRAGON, 200, 0, 640, 480);
	
	constexpr int  LINE_X = 300;
	constexpr int  LINE_Y = 280;
	constexpr int  LINE_X2 = 310;
	constexpr int  LINE_Y2 = 280;

	const SSDL_Color BLACK = SSDL_CreateColor(0, 0, 0);
	SSDL_SetRenderDrawColor(BLACK); 	
	SSDL_RenderDrawLine(LINE_X, LINE_Y, LINE_X2, LINE_Y2);
	SSDL_RenderDrawLine(LINE_X + 10, LINE_Y - 30, LINE_X2 + 10, LINE_Y2 - 30);
	SSDL_RenderDrawLine(LINE_X - 25, LINE_Y + 30, LINE_X2 - 25, LINE_Y2 + 30);
	SSDL_RenderDrawLine(LINE_X - 30, LINE_Y + 60, LINE_X2 - 30, LINE_Y2 + 60);
	SSDL_RenderDrawLine(LINE_X - 15, LINE_Y + 80, LINE_X2 - 10, LINE_Y2 + 75);
	SSDL_RenderDrawLine(LINE_X + 15, LINE_Y + 95, LINE_X2 + 10, LINE_Y2 + 85);
	SSDL_RenderDrawLine(LINE_X + 75, LINE_Y + 70, LINE_X2 + 75, LINE_Y2 + 75);
	SSDL_RenderDrawLine(LINE_X + 110, LINE_Y + 50, LINE_X2 + 110, LINE_Y2 + 55);
	SSDL_RenderDrawLine(LINE_X + 150, LINE_Y + 37, LINE_X2 + 140, LINE_Y2 + 50);
	SSDL_RenderDrawLine(LINE_X + 190, LINE_Y + 57, LINE_X2 + 170, LINE_Y2 + 70);
	SSDL_RenderDrawLine(LINE_X + 210, LINE_Y + 82, LINE_X2 + 190, LINE_Y2 + 87);
	SSDL_RenderDrawLine(LINE_X + 240, LINE_Y + 110, LINE_X2 + 230, LINE_Y2 + 95);
	SSDL_RenderDrawLine(LINE_X + 275, LINE_Y + 70, LINE_X2 + 260, LINE_Y2 + 70);
	SSDL_RenderDrawLine(LINE_X + 272, LINE_Y + 50, LINE_X2 + 267, LINE_Y2 + 50);

	//Music
	SSDL_Music music = SSDL_LoadMUS ("ChineseMusic.wav");
	SSDL_VolumeMusic (MIX_MAX_VOLUME/2);
	SSDL_PlayMusic (music, SSDL_FOREVER);
	
	//Fire
	const SSDL_Image FIRE = SSDL_LoadImage("Fire(1).png");
	SSDL_RenderImage (FIRE, 0, -70);
	
	SSDL_WaitKey();
	return 0;

}
