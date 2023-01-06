#include "ShopWindow.h"

ShopWindow::ShopWindow(Explorer* e)
{ 
	explorer = e; 
}

int ShopWindow::centerText(Graphics* g, string str)
{
	return (g->getWidth()-str.size())/2;
}


void ShopWindow::draw(Graphics* g){
  	g->clearScreen();
	g->setAttributes("CYAN");
	g->drawString(centerText(g, "________________________________________"), 16,  "________________________________________");
	g->drawString(centerText(g, "________________________________________"), 34,  "________________________________________");
	
	g->setAttributes("GREEN:BOLD");
	g->drawString(centerText(g, "Welcome to the Shop!"), 18, "Welcome to the Shop!");
	
	g->setAttributes("WHITE:BOLD");
	g->drawString(centerText(g,"[r] Stamina Pellets (5 coins)"), 23, "[r] Stamina Pellets (5 coins)");
	g->drawString(centerText(g,"[p] Potion (10 coins)"), 25, "[p] Potion (7 coins)");
	g->drawString(centerText(g,"[t] Teleportation Device (30 coins)"), 27, "[t] Teleportation Device (10 coins)");
	g->drawString(centerText(g, "Hit [q] to return to the game"), 32, "Hit [q] to return to the game");
}

Window* ShopWindow::keyPressed(char c){
  	
	if(c == 'q'){
		return next;
	}
	if(c == 'p' && explorer->coins >=7)
	{
	  	explorer->potion +=1;
		explorer->coins -=7;
	}
	if(c == 't' && explorer->coins >=10)
	{
	  	explorer->teleport +=1;
		explorer->coins -=10;
	}
	if(c == 'r' && explorer->coins >= 5)
	{
	  	explorer->pill +=5;
		explorer->coins -=5;
		
	}

	return this;
}
