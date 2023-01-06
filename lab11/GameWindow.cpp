#include "GameWindow.h"
#include "ShopWindow.h"
#include "EndWindow.h"

GameWindow::GameWindow(Explorer* e, Maze* m)
{
	explorer = e;
	maze = m;

}

void GameWindow::draw(Graphics* g)
{
  	g->clearScreen();

	Coordinate center(g->getWidth(), g->getHeight());
 		


	//DRAWING SIDEBAR
	g->setAttributes("YELLOW:BOLD");
	g->drawString(0,0, "Not your game? Hit [1] to load your most recent save!");
	g->drawString(0, 3, "COINS: " + to_string(explorer->coins));
	
	g->setAttributes("GREEN");
	g->drawString(0, 15, "Hit [~] to save");


	g->setAttributes("CYAN");
	g->drawString(0, 6, "LOCATION: (" + to_string(explorer->location.x) + " , " + to_string(explorer->location.y) + ")");	
	g->setAttributes("CYAN:ITALIC");
	g->drawString(0, 8, "--Hit [2] to open Shop--");

	g->setAttributes("WHITE:BOLD");
	g->drawString(0, 9, "[p] - POTIONS: " + to_string(explorer->potion));
	g->drawString(0, 11, "[r] - STAMINA PELLETS: " + to_string(explorer->pill));
	g->drawString(0, 13, "[t] - TELEPORTATION DEVICES: " + to_string(explorer->teleport));
	
	g->setAttributes("RED:BOLD");
	g->drawString(0, 16, "Hit [q] to return to menu");

	g->setAttributes("MAGENTA:BOLD");
	g->drawString(0, 2, "HEALTH: " + to_string(explorer->health));

	g->setAttributes("CYAN:BOLD");
	g->drawString(0, 4, "STAMINA: " + to_string(explorer->stam));
	center = center/2;



	//Drawing Maze
	g->setAttributes("WHITE");
	int radius = 12;
	vector<string> data = maze->getData(explorer->location, radius);
	
	for(int i = 0; i < data.size(); i++)
	{
	  	g->drawString(center.x-radius, center.y-radius+i, data[i]);
	}



	//Drawing Coins
	vector<Coordinate> coins = maze->locationsOf('$');
	g->setAttributes("YELLOW");
	for(Coordinate c : coins)
	{
	  	Coordinate d = c-explorer->location;
		if(d.x <= radius and d.y <= radius and d.x >= -radius and d.y >= -radius)
		{
			g->drawString(center.x+d.x, center.y+d.y, "$");
		}
	}

	//Drawing Spikes
	vector<Coordinate> spike = maze->locationsOf('^');
	g->setAttributes("RED");
	for(Coordinate r : spike)
	{
	  	Coordinate e = r-explorer->location;
		if(e.x <= radius and e.y <= radius and e.x >= -radius and e.y >= -radius)
		{
			g->drawString(center.x+e.x, center.y+e.y, "^");
		}
	}


	vector<Coordinate> stam = maze->locationsOf('%');
	g->setAttributes("CYAN");
	for(Coordinate j : stam)
	{
	  	Coordinate k = j-explorer->location;
		if(k.x <= radius and k.y <= radius and k.x >= -radius and k.y >= -radius)
		{
			g->drawString(center.x+k.x, center.y+k.y, "%");
		}
	}


	//Drawing Black Hole
	vector<Coordinate> hole = maze->locationsOf('O');
	g->setAttributes("BLUE:BOLD");
	for(Coordinate h : hole)
	{
	  	Coordinate b = h-explorer->location;
		if(b.x <= radius and b.y <= radius and b.x >= -radius and b.y >= -radius)
		{
			g->drawString(center.x+b.x, center.y+b.y, "O");
		}
	}


	//Drawing Player
	g->setAttributes("MAGENTA");
	g->drawString(center.x, center.y, "@");
}



Window* GameWindow::keyPressed(char ch)
{
	//Moving Character/Map
  	Coordinate move;

	char value = maze->getSymbol(explorer->location);
	
  
	if(ch == 's') 
  	{	
	 	move = Coordinate(0, 1); 
		explorer->stam -= 1;		
	}
  	else if(ch == 'w')
  	{
    		move = Coordinate(0, -1);
  	}
  	else if(ch == 'a')
  	{
    		move = Coordinate(-1, 0);
  	}
  	else if(ch == 'd')
  	{
		move = Coordinate(1,0);
		explorer->stam -=1;
   	}



	//Saving the maze
	if(ch == '~')
 	{
	  	maze->save("maze_save");
		explorer->save("ex_save");
	}	 
        else if(ch == '1')
	{
	  	maze->load("maze_save");
		explorer->load("ex_save");
	}
	



	//Did Player Hit The Wall?
  	if(maze->isValid(explorer->location + move))
	{
		explorer->location = explorer->location + move;
 	}
	if(explorer->stam < 0)
	{
	  	return lose;
	}
	value = maze->getSymbol(explorer->location);
  	

	
	
	
	//BLOCKS
	if(value=='f')
	{
	  	return win;
	}
	else if(value=='$')
	{
	  	explorer->coins += 1;
		maze->setSymbol(explorer->location, ' ');
	}
	
	else if(value=='^')
 	{
	  	explorer->health -= 1;
		maze->setSymbol(explorer->location, '^');
	}	
	else if(value=='%')
	{
	  	explorer->stam += 1;
		maze->setSymbol(explorer->location, ' ');
	}
	else if(value=='O')
	{
	  	explorer->health -=2;
		explorer->location.x = rand()%100;
		explorer->location.y = rand()%100;


  		while(!maze->isValid(explorer->location + move))
		{
			explorer->location.x = rand()%100;
			explorer->location.y = rand()%100;
 		}
		value = maze->getSymbol(explorer->location);
	}


	vector<Coordinate> finish = maze->locationsOf('f');
  	if(find(finish.begin(), finish.end(), explorer->location) != finish.end())
  	{
    		return NULL;
  	}
	

	//KEY PRESSES -> NEXT WINDOWS
	if(ch == 'q'){
		return menu;
	}
	else if(ch == '0')
	{
	  	return next;
	}
	else if(ch == '2')
	{
	  	return shop;
	}
	else if(ch == 'p')
	{
	  	if(explorer->health <=5 && explorer->potion > 0)
		{
	  		explorer->health = 5;
			explorer->potion -=1;
	  	}
	}
	else if(ch == 't')
	{
	  	if(explorer->teleport > 0)
		{
		  	//I used educba.com to remember how to use rand
		  	explorer->location.x = rand()%100;
			explorer->location.y = rand()%100;
			
  			while(!maze->isValid(explorer->location + move))
			{
				explorer->location.x = rand()%100;
				explorer->location.y = rand()%100;
 			}
			value = maze->getSymbol(explorer->location);
	  		explorer->teleport -=1;
		}
	}
 	else if(ch == 'r')
  	{
	  if(explorer->pill > 0)
	  {
	  	explorer->stam += 5;
		explorer->pill -=1;
	  }
	}	  
	  

	if(explorer->health == 0)
	{
	  	return lose;
	}
	return this;
}
