/* Janelle Dawson
 * Lab 4
 * Fall 2021
 */

#include "SSDL.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int WIDTH = 600;
const int HEIGHT = 800;
const int DRAGONS = 15;

const SSDL_Font FONT = SSDL_OpenSystemFont("timesbd", 22.5);

const SSDL_Image PERSON = SSDL_LoadImage("8_Bit_Person.png");
const SSDL_Image ENEMY = SSDL_LoadImage("8_Bit_Dragon.png");
const SSDL_Image TREASURE = SSDL_LoadImage("8_Bit_Treasure.png");
const SSDL_Image GRASS = SSDL_LoadImage("Background.png");

//---------------------------------------------------------------------
//Making map:
void initMap(char map[][HEIGHT])
{
	for(int i = 0; i < WIDTH; i++)
	{		
		for(int j = 200; j < HEIGHT; j++)
		{
			SSDL_SetFont(FONT);
			map[i][j] = '.';
		}
	}
}
//Drawing map with sout
void drawMap(char map[][HEIGHT])
{
	
	for(int j = 200; j < HEIGHT; j++)
	{
		for(int i = 0; i < WIDTH; i++)
		{
			map[i][j];
		

			if(map[i][j] == 'p')
			{
				SSDL_RenderImage(PERSON, i, j);
			}
			if(map[i][j] == '@')
			{
				SSDL_RenderImage(ENEMY, i, j);
			}
			if(map[i][j] == '$')
			{
				SSDL_RenderImage(TREASURE, i, j);
			}
		}
	}

	sout << endl;

}
//Placing a character on the map
void placeObject(char map[][HEIGHT], int& obX, int& obY, char symbol)
{
	obX = int(random() * 1.0 * WIDTH/RAND_MAX);
	obY = int(random() * 1.0 * HEIGHT/RAND_MAX);

	while(map[obX][obY] != '.')
	{
		obX = int(random() * WIDTH/RAND_MAX);
		obY = int(random() * HEIGHT/RAND_MAX);
	}

	obX -= (obX%30);
	obY -= ((obY + 200) % 30);

	map[obX][obY] = symbol;
}
//------------------------------------------------------------------
//Moving the dragon
void moveDragon(char map[][HEIGHT], int& dragX, int& dragY)
{
	int dir = int(random() * 4/RAND_MAX);

	if(dir == 0)
	{
		dragY-=30;
		if(dragY < 0)
			dragY+=30;
	}
	else if(dir == 1)
	{
		dragX+=30;
		if(dragX >= WIDTH)
			dragX-=30;
	}
	else if(dir == 2)
	{
		dragY+=30;
		if(dragY >= HEIGHT)
			dragY-=30;
	}
	else if(dir == 3)
	{
		dragX-=30;
		if(dragX < 0)
			dragX+=30;
	}
}
//Did dragon eat player?
bool is_eaten(int pX, int pY, int dX[], int dY[])
{
	for(int i = 0; i < DRAGONS; i++)
	{
		if(pX == dX[i] && pY == dY[i])
		{
			SSDL_IsQuitMessage();
			return true;
		}
	}

	return false;
}
//--------------------------------------------------------
//Main Game Code:
int main(int argc, char** argv)
{
	char grid[WIDTH][HEIGHT];
	int playerX = 0, playerY = 0;
	int dragX[DRAGONS], dragY[DRAGONS];
	int treasX = 0, treasY = 0;
	char dir = ' ';
	int score = 0;
	SSDL_Music music;

	music = SSDL_LoadMUS("gavtv29_8bitsuspense.mp3");
	SSDL_PlayMusic(music, SSDL_FOREVER);

	SSDL_SetWindowSize(800, 900);
	SSDL_SetWindowTitle("Escape The Dragon");
	
	srandom(600);

	//Make map all dots
	initMap(grid);

	for(int i = 0; i < DRAGONS; i++)
	{
		//Put dragons at spots
		placeObject(grid, dragX[i], dragY[i], '@');
	}

	//Put treasure on map
	placeObject(grid, treasX, treasY, '$');

	//Put player on map
	placeObject(grid, playerX, playerY, 'p');

	//Until eaten, do...
	while(!SSDL_IsQuitMessage() &&  is_eaten(playerX, playerY, dragX, dragY) == false)
	{
		SSDL_RenderImage(GRASS, 0, 220);

		//Draw map
		drawMap(grid);

		//Ask user which way to go
		SSDL_SetFont(FONT);
		sout << "Which direction? (N- north, S - south, E - east, W - west)" << endl;
		ssin >> dir;
		SSDL_RenderClear();
		SSDL_SetCursor(0, 0);

		//Erase player's position
		grid[playerX][playerY] = '.';

		//Update player's position
		switch(dir)
		{
			case 'N':
				playerY-=30;
				if(playerY < 200)
				{
					sout << "Can't go thay way!" << endl;
					playerY+=30;
				}
				break;
			case 'S':
				playerY+=30;
				if(playerY >= HEIGHT)
				{
					sout << "Can't go that way!" << endl;
					playerY-=30;
				}
				break;
			case 'E':
				playerX+=30;
				if(playerX >= WIDTH)
				{
					sout << "Can't go that way!" << endl;
					playerX-=30;
				}
				break;
			case 'W':
				playerX-=30;
				if(playerX < 0)
				{
					sout << "Can't go that way!" << endl;
					playerX+=30;
				}
				break;
			default:
				sout << "You stand still." << endl;
		}

		//Draw the player at new position
		grid[playerX][playerY] = 'p';

		for(int i = 0; i < DRAGONS; i++)
		{
			//Erase Dragon
			grid[dragX[i]][dragY[i]] = '.';

			//Move the dragon
			moveDragon(grid, dragX[i], dragY[i]);

			//Draw the dragon
			grid[dragX[i]][dragY[i]] = '@';
		}

		//Check to see if we got the treasure
		if(playerX == treasX && playerY == treasY)
		{
			sout << "You found a buried chest! Inside you find a coin!" << endl;
			score++;

			//Place next treasure
			placeObject(grid, treasX, treasY, '$');
		}

	}

	SSDL_HaltMusic();
	music = SSDL_LoadMUS("projectsu012_8-bit-failure-sound.wav");
	SSDL_PlayMusic(music, 1);

	sout << "You have been eaten by the dragon! Game over." << endl;
	sout << "However, you found " << score << " coins before your untimely demise." << endl;

	SSDL_WaitKey();
	return 0;
}
