#include "AWindow.h"

void AWindow::draw(Graphics* g)
{
	g->clearScreen();
	g->setAttributes("YELLOW:BLINK");
	g->drawString(centerText(g, "Main Menu"), 10, "Main Menu");
	g->setAttributes("WHITE");
	g->drawString(centerText(g, "[s] shop"), 14, "[s] Shop");
	g->drawString(centerText(g, "[q] quit"), 15, "[q] Quit Game");
	g->drawString(centerText(g, "[a] advance"), 16, "[a] to advance");
  /*
  	g->clearScreen();
	int width = g->getWidth();
	int height = g->getHeight()/2;
	string s = "audrey";
	width -= s.size();
	width /= 2;
	g->setAttributes("MAGENTA:BOLD");
	g->drawString(width, height, s);
*/
}

Window* AWindow::keyPressed(char c)
{
  return this;
  //return next;
}

