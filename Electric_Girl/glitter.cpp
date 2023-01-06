/* Janelle Dawson
 *  Lab 2: Glitter
 *  Fall 2021
 */

#include "SSDL.h"

int main(int argc, char* argv[])
{
	int lineX = 463;
	int lineY = 554;
	int lineX1 = 463;
	int lineY1 = 554;
	int lineX2 = 463;
	int lineY2 = 554;

	SSDL_SetWindowSize(800, 600);

	for(int i = 0; i < 3; i ++)
	{
		while(lineY < 600)
		{
			if (SSDL_IsQuitMessage() == true) break;
			SSDL_RenderClear();

			const SSDL_Image Girl = SSDL_LoadImage("Girl.png");
			SSDL_RenderImage(Girl, 0, 0);
			
			//Sound
			SSDL_Music music = SSDL_LoadMUS("Electric.wav");
			SSDL_VolumeMusic(MIX_MAX_VOLUME/2);
			SSDL_PlayMusic(music, SSDL_FOREVER);
			
			//Make Lightning
			const SSDL_Color BLUE = SSDL_CreateColor(31, 116, 164);
			const SSDL_Color LIGHT_BLUE = SSDL_CreateColor(157, 226, 219);
			const SSDL_Color WHITE = SSDL_CreateColor(255, 255, 255);

			SSDL_SetRenderDrawColor(BLUE);
			SSDL_RenderDrawLine(lineX, lineY, lineX + 60, lineY + 49);
			SSDL_RenderDrawLine(lineX + 72, lineY + 29, lineX + 85, lineY + 38);
			SSDL_RenderDrawLine(lineX + 17, lineY + 12, lineX + 20, lineY + 26);
			SSDL_RenderDrawLine(lineX + 21, lineY + 26, lineX + 15, lineY + 31);
			SSDL_RenderDrawLine(lineX + 15, lineY + 31, lineX + 17, lineY + 36);
			SSDL_RenderDrawLine(lineX + 15, lineY + 30, lineX + 7, lineY + 36);
			SSDL_RenderDrawLine(lineX + 19, lineY + 21, lineX + 11, lineY + 24);
			SSDL_RenderDrawLine(lineX + 1, lineY - 3, lineX - 5, lineY - 14);
			SSDL_RenderDrawLine(lineX - 5, lineY - 12, lineX + 2, lineY - 14);
			SSDL_RenderDrawLine(lineX + 78, lineY + 6, lineX + 86, lineY - 13);
			SSDL_RenderDrawLine(lineX + 85, lineY - 13, lineX + 78, lineY - 3);
			SSDL_RenderDrawLine(lineX + 75, lineY - 18, lineX + 54, lineY - 17);
			SSDL_RenderDrawLine(lineX + 54, lineY - 17, lineX + 10, lineY - 33);
			SSDL_RenderDrawLine(lineX + 10, lineY - 32, lineX + 16, lineY - 44);
			SSDL_RenderDrawLine(lineX + 84, lineY - 76, lineX + 76, lineY - 81);
			SSDL_RenderDrawLine(lineX + 77, lineY - 81, lineX + 65, lineY - 78);
			SSDL_RenderDrawLine(lineX + 66, lineY - 77, lineX + 64, lineY - 69);
			SSDL_RenderDrawLine(lineX + 63, lineY - 69, lineX + 52, lineY - 72);
			SSDL_RenderDrawLine(lineX + 50, lineY - 72, lineX + 47, lineY - 80);
			SSDL_RenderDrawLine(lineX + 46, lineY - 80, lineX - 67, lineY - 76);
			SSDL_RenderDrawLine(lineX + 79, lineY - 78, lineX + 100, lineY - 94);
			SSDL_RenderDrawLine(lineX + 89, lineY - 86, lineX + 112, lineY - 77);
			SSDL_RenderDrawLine(lineX + 104, lineY - 81, lineX + 111, lineY - 62);
			SSDL_RenderDrawLine(lineX + 25, lineY + 14, lineX - 66, lineY + 167);
			SSDL_RenderDrawLine(lineX - 45, lineY - 155, lineX - 45, lineY - 128);
			SSDL_RenderDrawLine(lineX - 45, lineY - 142, lineX - 63, lineY - 128);
			SSDL_RenderDrawLine(lineX - 7, lineY - 127, lineX + 16, lineY - 146);
			SSDL_RenderDrawLine(lineX + 10, lineY - 144, lineX + 16, lineY - 130);
			SSDL_RenderDrawLine(lineX - 19, lineY - 135, lineX + 1, lineY - 100);
			SSDL_RenderDrawLine(lineX + 40, lineY - 177, lineX - 40, lineY - 263);
			SSDL_RenderDrawLine(lineX + 25, lineY - 250, lineX + 32, lineY - 397);
			SSDL_RenderDrawLine(lineX + 4, lineY - 319, lineX - 14, lineY - 345);
			SSDL_RenderDrawLine(lineX + 20, lineY - 364, lineX + 61, lineY - 337);
			SSDL_RenderDrawLine(lineX + 39, lineY - 325, lineX + 43, lineY - 352);
			SSDL_RenderDrawLine(lineX + 70 , lineY + 200, lineX + 68, lineY + 78);

			//Make Lightning pt. 2       
			SSDL_SetRenderDrawColor(LIGHT_BLUE);                                         
			SSDL_RenderDrawLine(lineX1, lineY1, lineX1 + 60, lineY1 + 49);
			SSDL_RenderDrawLine(lineX1 + 72, lineY1 + 29, lineX1 + 85, lineY1 + 38);
			SSDL_RenderDrawLine(lineX1 + 17, lineY1 + 12, lineX1 + 20, lineY1 + 26);
			SSDL_RenderDrawLine(lineX1 + 21, lineY1 + 26, lineX1 + 15, lineY1 + 31);
			SSDL_RenderDrawLine(lineX1 + 15, lineY1 + 31, lineX1 + 17, lineY1 + 36);
			SSDL_RenderDrawLine(lineX1 + 15, lineY1 + 30, lineX1 + 7, lineY1 + 36);
			SSDL_RenderDrawLine(lineX1 + 19, lineY1 + 21, lineX1 + 11, lineY1 + 24);
			SSDL_RenderDrawLine(lineX1 + 1, lineY1 - 3, lineX1 - 5, lineY1 - 14);
			SSDL_RenderDrawLine(lineX1 - 5, lineY1 - 12, lineX1 + 2, lineY1 - 14);
			SSDL_RenderDrawLine(lineX1 + 78, lineY1 + 6, lineX1 + 86, lineY1 - 13);
			SSDL_RenderDrawLine(lineX1 + 85, lineY1 - 13, lineX1 + 78, lineY1 - 3);
			SSDL_RenderDrawLine(lineX1 + 75, lineY1 - 18, lineX1 + 54, lineY1 - 17);
			SSDL_RenderDrawLine(lineX1 + 54, lineY1 - 17, lineX1 + 10, lineY1 - 33);
			SSDL_RenderDrawLine(lineX1 + 10, lineY1 - 32, lineX1 + 16, lineY1 - 44);
			SSDL_RenderDrawLine(lineX1 + 84, lineY1 - 76, lineX1 + 76, lineY1 - 81);
			SSDL_RenderDrawLine(lineX1 + 77, lineY1 - 81, lineX1 + 65, lineY1 - 78);
			SSDL_RenderDrawLine(lineX1 + 66, lineY1 - 77, lineX1 + 64, lineY1 - 69);
			SSDL_RenderDrawLine(lineX1 + 63, lineY1 - 69, lineX1 + 52, lineY1 - 72);
			SSDL_RenderDrawLine(lineX1 + 50, lineY1 - 72, lineX1 + 47, lineY1 - 80);
			SSDL_RenderDrawLine(lineX1 + 46, lineY1 - 80, lineX1 - 67, lineY1 - 76);
			SSDL_RenderDrawLine(lineX1 + 79, lineY1 - 78, lineX1 + 100, lineY1 - 94);
			SSDL_RenderDrawLine(lineX1 + 89, lineY1 - 86, lineX1 + 112, lineY1 - 77);
			SSDL_RenderDrawLine(lineX1 + 104, lineY1 - 81, lineX1 + 111, lineY1 - 62);
			SSDL_RenderDrawLine(lineX1 + 25, lineY1 + 14, lineX1 - 66, lineY1 + 167);
			SSDL_RenderDrawLine(lineX1 - 45, lineY1 - 155, lineX1 - 45, lineY1 - 128);
			SSDL_RenderDrawLine(lineX1 - 45, lineY1 - 142, lineX1 - 63, lineY1 - 128);
			SSDL_RenderDrawLine(lineX1 - 7, lineY1 - 127, lineX1 + 16, lineY1 - 146);
			SSDL_RenderDrawLine(lineX1 + 10, lineY1 - 144, lineX1 + 16, lineY1 - 130);
			SSDL_RenderDrawLine(lineX1 - 19, lineY1 - 135, lineX1 + 1, lineY1 - 100);
			SSDL_RenderDrawLine(lineX1 + 40, lineY1 - 177, lineX1 - 40, lineY1 - 263);
			SSDL_RenderDrawLine(lineX1 + 25, lineY1 - 250, lineX1 + 32, lineY1 - 397);
			SSDL_RenderDrawLine(lineX1 + 4, lineY1 - 319, lineX1 - 14, lineY1 - 345);
			SSDL_RenderDrawLine(lineX1 + 20, lineY1 - 364, lineX1 + 61, lineY1 - 337);
			SSDL_RenderDrawLine(lineX1 + 39, lineY1 - 325, lineX1 + 43, lineY1 - 352);
			SSDL_RenderDrawLine(lineX1 + 70 , lineY1 + 200, lineX1 + 68, lineY1 + 78);

			//Make Lightning pt. 3       
			SSDL_SetRenderDrawColor(WHITE);                                         
			SSDL_RenderDrawLine(lineX2, lineY2, lineX2 + 60, lineY2 + 49);
			SSDL_RenderDrawLine(lineX2 + 72, lineY2 + 29, lineX2 + 85, lineY2 + 38);
			SSDL_RenderDrawLine(lineX2 + 17, lineY2 + 12, lineX2 + 20, lineY2 + 26);
			SSDL_RenderDrawLine(lineX2 + 21, lineY2 + 26, lineX2 + 15, lineY2 + 31);
			SSDL_RenderDrawLine(lineX2 + 15, lineY2 + 31, lineX2 + 17, lineY2 + 36);
			SSDL_RenderDrawLine(lineX2 + 15, lineY2 + 30, lineX2 + 7, lineY2 + 36);
			SSDL_RenderDrawLine(lineX2 + 19, lineY2 + 21, lineX2 + 11, lineY2 + 24);
			SSDL_RenderDrawLine(lineX2 + 1, lineY2 - 3, lineX2 - 5, lineY2 - 14);
			SSDL_RenderDrawLine(lineX2 - 5, lineY2 - 12, lineX2 + 2, lineY2 - 14);
			SSDL_RenderDrawLine(lineX2 + 78, lineY2 + 6, lineX2 + 86, lineY2 - 13);
			SSDL_RenderDrawLine(lineX2 + 85, lineY2 - 13, lineX2 + 78, lineY2 - 3);
			SSDL_RenderDrawLine(lineX2 + 75, lineY2 - 18, lineX2 + 54, lineY2 - 17);
			SSDL_RenderDrawLine(lineX2 + 54, lineY2 - 17, lineX2 + 10, lineY2 - 33);
			SSDL_RenderDrawLine(lineX2 + 10, lineY2 - 32, lineX2 + 16, lineY2 - 44);
			SSDL_RenderDrawLine(lineX2 + 84, lineY2 - 76, lineX2 + 76, lineY2 - 81);
			SSDL_RenderDrawLine(lineX2 + 77, lineY2 - 81, lineX2 + 65, lineY2 - 78);
			SSDL_RenderDrawLine(lineX2 + 66, lineY2 - 77, lineX2 + 64, lineY2 - 69);
			SSDL_RenderDrawLine(lineX2 + 63, lineY2 - 69, lineX2 + 52, lineY2 - 72);
			SSDL_RenderDrawLine(lineX2 + 50, lineY2 - 72, lineX2 + 47, lineY2 - 80);
			SSDL_RenderDrawLine(lineX2 + 46, lineY2 - 80, lineX2 - 67, lineY2 - 76);
			SSDL_RenderDrawLine(lineX2 + 79, lineY2 - 78, lineX2 + 100, lineY2 - 94);
			SSDL_RenderDrawLine(lineX2 + 89, lineY2 - 86, lineX2 + 112, lineY2 - 77);
			SSDL_RenderDrawLine(lineX2 + 104, lineY2 - 81, lineX2 + 111, lineY2 - 62);
			SSDL_RenderDrawLine(lineX2 + 25, lineY2 + 14, lineX2 - 66, lineY2 + 167);
			SSDL_RenderDrawLine(lineX2 - 45, lineY2 - 155, lineX2 - 45, lineY2 - 128);
			SSDL_RenderDrawLine(lineX2 - 45, lineY2 - 142, lineX2 - 63, lineY2 - 128);
			SSDL_RenderDrawLine(lineX2 - 7, lineY2 - 127, lineX2 + 16, lineY2 - 146);
			SSDL_RenderDrawLine(lineX2 + 10, lineY2 - 144, lineX2 + 16, lineY2 - 130);
			SSDL_RenderDrawLine(lineX2 - 19, lineY2 - 135, lineX2 + 1, lineY2 - 100);
			SSDL_RenderDrawLine(lineX2 + 40, lineY2 - 177, lineX2 - 40, lineY2 - 263);
			SSDL_RenderDrawLine(lineX2 + 25, lineY2 - 250, lineX2 + 32, lineY2 - 397);
			SSDL_RenderDrawLine(lineX2 + 4, lineY2 - 319, lineX2 - 14, lineY2 - 345);
			SSDL_RenderDrawLine(lineX2 + 20, lineY2 - 364, lineX2 + 61, lineY2 - 337);
			SSDL_RenderDrawLine(lineX2 + 39, lineY2 - 325, lineX2 + 43, lineY2 - 352);
			SSDL_RenderDrawLine(lineX2 + 70 , lineY2 + 200, lineX2 + 68, lineY2 + 78);

			lineY++;
			lineY1--;
			lineX2++;
			SSDL_Delay(5);
		}

		while(lineY > 554)
		{
			if (SSDL_IsQuitMessage() == true) break;
			SSDL_RenderClear();

			const SSDL_Image Girl = SSDL_LoadImage("Girl.png");
			SSDL_RenderImage(Girl, 0, 0);

			//Sound
			SSDL_Music music = SSDL_LoadMUS("Electric.wav");
			SSDL_VolumeMusic(MIX_MAX_VOLUME/2);
			SSDL_PlayMusic(music, SSDL_FOREVER);
			
			//Make Lightning
			const SSDL_Color BLUE = SSDL_CreateColor(31, 116, 164);
			const SSDL_Color LIGHT_BLUE = SSDL_CreateColor(157, 226, 219);
			const SSDL_Color WHITE = SSDL_CreateColor(255, 255, 255);

			SSDL_SetRenderDrawColor(BLUE);
			SSDL_RenderDrawLine(lineX, lineY, lineX + 60, lineY + 49);
			SSDL_RenderDrawLine(lineX + 72, lineY + 29, lineX + 85, lineY + 38);
			SSDL_RenderDrawLine(lineX + 17, lineY + 12, lineX + 20, lineY + 26);
			SSDL_RenderDrawLine(lineX + 21, lineY + 26, lineX + 15, lineY + 31);
			SSDL_RenderDrawLine(lineX + 15, lineY + 31, lineX + 17, lineY + 36);
			SSDL_RenderDrawLine(lineX + 15, lineY + 30, lineX + 7, lineY + 36);
			SSDL_RenderDrawLine(lineX + 19, lineY + 21, lineX + 11, lineY + 24);
			SSDL_RenderDrawLine(lineX + 1, lineY - 3, lineX - 5, lineY - 14);
			SSDL_RenderDrawLine(lineX - 5, lineY - 12, lineX + 2, lineY - 14);
			SSDL_RenderDrawLine(lineX + 78, lineY + 6, lineX + 86, lineY - 13);
			SSDL_RenderDrawLine(lineX + 85, lineY - 13, lineX + 78, lineY - 3);
			SSDL_RenderDrawLine(lineX + 75, lineY - 18, lineX + 54, lineY - 17);
			SSDL_RenderDrawLine(lineX + 54, lineY - 17, lineX + 10, lineY - 33);
			SSDL_RenderDrawLine(lineX + 10, lineY - 32, lineX + 16, lineY - 44);
			SSDL_RenderDrawLine(lineX + 84, lineY - 76, lineX + 76, lineY - 81);
			SSDL_RenderDrawLine(lineX + 77, lineY - 81, lineX + 65, lineY - 78);
			SSDL_RenderDrawLine(lineX + 66, lineY - 77, lineX + 64, lineY - 69);
			SSDL_RenderDrawLine(lineX + 63, lineY - 69, lineX + 52, lineY - 72);
			SSDL_RenderDrawLine(lineX + 50, lineY - 72, lineX + 47, lineY - 80);
			SSDL_RenderDrawLine(lineX + 46, lineY - 80, lineX - 67, lineY - 76);
			SSDL_RenderDrawLine(lineX + 79, lineY - 78, lineX + 100, lineY - 94);
			SSDL_RenderDrawLine(lineX + 89, lineY - 86, lineX + 112, lineY - 77);
			SSDL_RenderDrawLine(lineX + 104, lineY - 81, lineX + 111, lineY - 62);
			SSDL_RenderDrawLine(lineX + 25, lineY + 14, lineX - 66, lineY + 167);
			SSDL_RenderDrawLine(lineX - 45, lineY - 155, lineX - 45, lineY - 128);
			SSDL_RenderDrawLine(lineX - 45, lineY - 142, lineX - 63, lineY - 128);
			SSDL_RenderDrawLine(lineX - 7, lineY - 127, lineX + 16, lineY - 146);
			SSDL_RenderDrawLine(lineX + 10, lineY - 144, lineX + 16, lineY - 130);
			SSDL_RenderDrawLine(lineX - 19, lineY - 135, lineX + 1, lineY - 100);
			SSDL_RenderDrawLine(lineX + 40, lineY - 177, lineX - 40, lineY - 263);
			SSDL_RenderDrawLine(lineX + 25, lineY - 250, lineX + 32, lineY - 397);
			SSDL_RenderDrawLine(lineX + 4, lineY - 319, lineX - 14, lineY - 345);
			SSDL_RenderDrawLine(lineX + 20, lineY - 364, lineX + 61, lineY - 337);
			SSDL_RenderDrawLine(lineX + 39, lineY - 325, lineX + 43, lineY - 352);
			SSDL_RenderDrawLine(lineX + 70 , lineY + 200, lineX + 68, lineY + 78);

			//Make Lightning pt. 2       
			SSDL_SetRenderDrawColor(LIGHT_BLUE);                                         
			SSDL_RenderDrawLine(lineX1, lineY1, lineX1 + 60, lineY1 + 49);
			SSDL_RenderDrawLine(lineX1 + 72, lineY1 + 29, lineX1 + 85, lineY1 + 38);
			SSDL_RenderDrawLine(lineX1 + 17, lineY1 + 12, lineX1 + 20, lineY1 + 26);
			SSDL_RenderDrawLine(lineX1 + 21, lineY1 + 26, lineX1 + 15, lineY1 + 31);
			SSDL_RenderDrawLine(lineX1 + 15, lineY1 + 31, lineX1 + 17, lineY1 + 36);
			SSDL_RenderDrawLine(lineX1 + 15, lineY1 + 30, lineX1 + 7, lineY1 + 36);
			SSDL_RenderDrawLine(lineX1 + 19, lineY1 + 21, lineX1 + 11, lineY1 + 24);
			SSDL_RenderDrawLine(lineX1 + 1, lineY1 - 3, lineX1 - 5, lineY1 - 14);
			SSDL_RenderDrawLine(lineX1 - 5, lineY1 - 12, lineX1 + 2, lineY1 - 14);
			SSDL_RenderDrawLine(lineX1 + 78, lineY1 + 6, lineX1 + 86, lineY1 - 13);
			SSDL_RenderDrawLine(lineX1 + 85, lineY1 - 13, lineX1 + 78, lineY1 - 3);
			SSDL_RenderDrawLine(lineX1 + 75, lineY1 - 18, lineX1 + 54, lineY1 - 17);
			SSDL_RenderDrawLine(lineX1 + 54, lineY1 - 17, lineX1 + 10, lineY1 - 33);
			SSDL_RenderDrawLine(lineX1 + 10, lineY1 - 32, lineX1 + 16, lineY1 - 44);
			SSDL_RenderDrawLine(lineX1 + 84, lineY1 - 76, lineX1 + 76, lineY1 - 81);
			SSDL_RenderDrawLine(lineX1 + 77, lineY1 - 81, lineX1 + 65, lineY1 - 78);
			SSDL_RenderDrawLine(lineX1 + 66, lineY1 - 77, lineX1 + 64, lineY1 - 69);
			SSDL_RenderDrawLine(lineX1 + 63, lineY1 - 69, lineX1 + 52, lineY1 - 72);
			SSDL_RenderDrawLine(lineX1 + 50, lineY1 - 72, lineX1 + 47, lineY1 - 80);
			SSDL_RenderDrawLine(lineX1 + 46, lineY1 - 80, lineX1 - 67, lineY1 - 76);
			SSDL_RenderDrawLine(lineX1 + 79, lineY1 - 78, lineX1 + 100, lineY1 - 94);
			SSDL_RenderDrawLine(lineX1 + 89, lineY1 - 86, lineX1 + 112, lineY1 - 77);
			SSDL_RenderDrawLine(lineX1 + 104, lineY1 - 81, lineX1 + 111, lineY1 - 62);
			SSDL_RenderDrawLine(lineX1 + 25, lineY1 + 14, lineX1 - 66, lineY1 + 167);
			SSDL_RenderDrawLine(lineX1 - 45, lineY1 - 155, lineX1 - 45, lineY1 - 128);
			SSDL_RenderDrawLine(lineX1 - 45, lineY1 - 142, lineX1 - 63, lineY1 - 128);
			SSDL_RenderDrawLine(lineX1 - 7, lineY1 - 127, lineX1 + 16, lineY1 - 146);
			SSDL_RenderDrawLine(lineX1 + 10, lineY1 - 144, lineX1 + 16, lineY1 - 130);
			SSDL_RenderDrawLine(lineX1 - 19, lineY1 - 135, lineX1 + 1, lineY1 - 100);
			SSDL_RenderDrawLine(lineX1 + 40, lineY1 - 177, lineX1 - 40, lineY1 - 263);
			SSDL_RenderDrawLine(lineX1 + 25, lineY1 - 250, lineX1 + 32, lineY1 - 397);
			SSDL_RenderDrawLine(lineX1 + 4, lineY1 - 319, lineX1 - 14, lineY1 - 345);
			SSDL_RenderDrawLine(lineX1 + 20, lineY1 - 364, lineX1 + 61, lineY1 - 337);
			SSDL_RenderDrawLine(lineX1 + 39, lineY1 - 325, lineX1 + 43, lineY1 - 352);
			SSDL_RenderDrawLine(lineX1 + 70 , lineY1 + 200, lineX1 + 68, lineY1 + 78);

			//Make Lightning pt. 3       
			SSDL_SetRenderDrawColor(WHITE);                                         
			SSDL_RenderDrawLine(lineX2, lineY2, lineX2 + 60, lineY2 + 49);
			SSDL_RenderDrawLine(lineX2 + 72, lineY2 + 29, lineX2 + 85, lineY2 + 38);
			SSDL_RenderDrawLine(lineX2 + 17, lineY2 + 12, lineX2 + 20, lineY2 + 26);
			SSDL_RenderDrawLine(lineX2 + 21, lineY2 + 26, lineX2 + 15, lineY2 + 31);
			SSDL_RenderDrawLine(lineX2 + 15, lineY2 + 31, lineX2 + 17, lineY2 + 36);
			SSDL_RenderDrawLine(lineX2 + 15, lineY2 + 30, lineX2 + 7, lineY2 + 36);
			SSDL_RenderDrawLine(lineX2 + 19, lineY2 + 21, lineX2 + 11, lineY2 + 24);
			SSDL_RenderDrawLine(lineX2 + 1, lineY2 - 3, lineX2 - 5, lineY2 - 14);
			SSDL_RenderDrawLine(lineX2 - 5, lineY2 - 12, lineX2 + 2, lineY2 - 14);
			SSDL_RenderDrawLine(lineX2 + 78, lineY2 + 6, lineX2 + 86, lineY2 - 13);
			SSDL_RenderDrawLine(lineX2 + 85, lineY2 - 13, lineX2 + 78, lineY2 - 3);
			SSDL_RenderDrawLine(lineX2 + 75, lineY2 - 18, lineX2 + 54, lineY2 - 17);
			SSDL_RenderDrawLine(lineX2 + 54, lineY2 - 17, lineX2 + 10, lineY2 - 33);
			SSDL_RenderDrawLine(lineX2 + 10, lineY2 - 32, lineX2 + 16, lineY2 - 44);
			SSDL_RenderDrawLine(lineX2 + 84, lineY2 - 76, lineX2 + 76, lineY2 - 81);
			SSDL_RenderDrawLine(lineX2 + 77, lineY2 - 81, lineX2 + 65, lineY2 - 78);
			SSDL_RenderDrawLine(lineX2 + 66, lineY2 - 77, lineX2 + 64, lineY2 - 69);
			SSDL_RenderDrawLine(lineX2 + 63, lineY2 - 69, lineX2 + 52, lineY2 - 72);
			SSDL_RenderDrawLine(lineX2 + 50, lineY2 - 72, lineX2 + 47, lineY2 - 80);
			SSDL_RenderDrawLine(lineX2 + 46, lineY2 - 80, lineX2 - 67, lineY2 - 76);
			SSDL_RenderDrawLine(lineX2 + 79, lineY2 - 78, lineX2 + 100, lineY2 - 94);
			SSDL_RenderDrawLine(lineX2 + 89, lineY2 - 86, lineX2 + 112, lineY2 - 77);
			SSDL_RenderDrawLine(lineX2 + 104, lineY2 - 81, lineX2 + 111, lineY2 - 62);
			SSDL_RenderDrawLine(lineX2 + 25, lineY2 + 14, lineX2 - 66, lineY2 + 167);
			SSDL_RenderDrawLine(lineX2 - 45, lineY2 - 155, lineX2 - 45, lineY2 - 128);
			SSDL_RenderDrawLine(lineX2 - 45, lineY2 - 142, lineX2 - 63, lineY2 - 128);
			SSDL_RenderDrawLine(lineX2 - 7, lineY2 - 127, lineX2 + 16, lineY2 - 146);
			SSDL_RenderDrawLine(lineX2 + 10, lineY2 - 144, lineX2 + 16, lineY2 - 130);
			SSDL_RenderDrawLine(lineX2 - 19, lineY2 - 135, lineX2 + 1, lineY2 - 100);
			SSDL_RenderDrawLine(lineX2 + 40, lineY2 - 177, lineX2 - 40, lineY2 - 263);
			SSDL_RenderDrawLine(lineX2 + 25, lineY2 - 250, lineX2 + 32, lineY2 - 397);
			SSDL_RenderDrawLine(lineX2 + 4, lineY2 - 319, lineX2 - 14, lineY2 - 345);
			SSDL_RenderDrawLine(lineX2 + 20, lineY2 - 364, lineX2 + 61, lineY2 - 337);
			SSDL_RenderDrawLine(lineX2 + 39, lineY2 - 325, lineX2 + 43, lineY2 - 352);
			SSDL_RenderDrawLine(lineX2 + 70 , lineY2 + 200, lineX2 + 68, lineY2 + 78);

			lineY--;
			lineY1++;
			lineX2--;
			SSDL_Delay(5);
		}
	}

	SSDL_WaitKey();
	return 0;
}
