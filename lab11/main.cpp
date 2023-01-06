#include "Console.h"
#include "Window.h"
#include "AWindow.h"
#include "GameWindow.h"
#include "ShopWindow.h"
#include "EndWindow.h"

using namespace std;


int main(){

  	srand(time(0));
  	Explorer explorer;

	Maze maze;
	//maze.load(to_string(rand()%2));
	maze.generate();

	vector<Coordinate> locs = maze.locationsOf('s');
	if(locs.empty())
	{	
		explorer.location = Coordinate(0,0);
	}
	else
	{
	  	explorer.location = locs[rand()%locs.size()];
	}



	///////////////////////////////////////////////////////////
	Window* mainWindow = new Window();
	Window* reset = new Window();		
	GameWindow* gameWindow = new GameWindow(&explorer, &maze);
	EndWindow* endWindow_lose = new EndWindow("lose.txt");
	EndWindow* endWindow_win = new EndWindow("win.txt");
	ShopWindow* shopWindow = new ShopWindow(&explorer);
	

	mainWindow->next = gameWindow;
	endWindow_lose->next = reset;
	endWindow_win->next = reset;
	gameWindow->win = endWindow_win;
	gameWindow->lose = endWindow_lose;
	gameWindow->shop = shopWindow;
	shopWindow->next = gameWindow;
	gameWindow->menu = reset;
        ////////////////////////////////////////////////////////////

	Window* currentWindow = mainWindow;

	Console console;
	console.setDrawable(mainWindow);

	console.initialize();

	console.redraw();

	bool running = true;
	while(running){
		char ch = '?';
		if(console.getChar(ch)){
			currentWindow = currentWindow->keyPressed(ch);
			if(!currentWindow){
				running = false;
			}else{
			  	if(currentWindow == reset){
					
					maze.generate();
					explorer.coins = 10000;
					explorer.health = 5;
					explorer.stam = 10;
					explorer.pill = 0;
					explorer.potion = 0;
					explorer.teleport = 0;

					vector<Coordinate> locs = maze.locationsOf('s');
					if(locs.empty())
					{
						explorer.location = Coordinate(0,0);
					}
					else
					{
	  					explorer.location = locs[rand()%locs.size()];
					}
				  	currentWindow = mainWindow;
				}

				console.setDrawable(currentWindow);
				console.redraw();
			}
		}
	}
	
	console.shutdown();
	return 0;
}
