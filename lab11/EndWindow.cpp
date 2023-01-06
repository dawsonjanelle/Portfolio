#include "EndWindow.h"


EndWindow::EndWindow(string filename)
{
  	ifstream fin;
	fin.open(filename);
	string line = "";
	while(getline(fin, line))
	{
	  	data.push_back(line);
	}
	fin.close();
}

void EndWindow::draw(Graphics* g)
{
	g->clearScreen();
	g->setAttributes("CYAN");
	for(int i = 0; i < data.size(); i++)
	{
	  	g->drawString(0, i, data[i]);
	}
}

Window* EndWindow::keyPressed(char ch)
{
  	return next;
}
