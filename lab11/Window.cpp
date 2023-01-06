#include "Window.h"
#include "Maze.h"
#include "Explorer.h"

int Window::centerText(Graphics* g, string str)
{
	return (g->getWidth()-str.size())/2;
}


void Window::draw(Graphics* g){
  	g->clearScreen();
	g->setAttributes("RED:BOLD");
	g->drawString(centerText(g, "The Maze"), 18, "THE MAZE");
	g->setAttributes("YELLOW:BLINK");
	g->drawString(centerText(g, "Hit [SPACE] to start the Maze"), 25, "Hit [SPACE] to start the Maze");

	g->setAttributes("WHITE");
	g->drawString(centerText(g, "Hit [q] to leave game"), 30, "Hit [q] to leave game");
}

Window* Window::keyPressed(char c){
	if(c == 'q'){
		return NULL;
	}
	else if(c == 32)
	{
	  	return next;
	}
      
	return this;
}
