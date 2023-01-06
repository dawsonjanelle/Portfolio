#include "Maze.h"
#include "Explorer.h"
#include "ShopWindow.h"
extern vector<string> generateMaze();

using namespace std;


void Maze::load(string filename)
{
  	ifstream fin;
	fin.open(filename);

	string line;
	symbols.clear();

	while(getline(fin, line))
	{
	  	symbols.push_back(line);
	}

	fin.close();
}
void Maze::generate()
{
	symbols = generateMaze();

	for(int i = 0; i < 60; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = '$';
	}

	for(int i = 0; i < 100; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = '%';
	}
	
	for(int i = 0; i < 10; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = 'O';
	}

	for(int i = 0; i < 30; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = '^';
	}

	for(int i = 0; i < 2; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = 's';
	}
	for(int i = 0; i < 3; i++)
	{
		Coordinate c = Coordinate (rand()%symbols[0].size(), rand()%symbols.size());
		symbols[c.y][c.x] = 'f';
	}

}



//Saving **FINISH** Save their # of coins, etc.

void Maze::save(string filename)
{
	ofstream fout;
	fout.open(filename);
	for(string s : symbols)
	{
	  	fout << s << endl;
	}
	fout.close();
}


vector<string> Maze::getData(Coordinate loc, int radius)
{
  	vector<string> rv;
	for(int y = -radius; y <= radius; y++)
	{
	  	string line = "";
	  	for(int x = -radius; x <= radius; x++)
		{
		  	Coordinate c = Coordinate(x,y) + loc;
			if(c.y >= 0 and c.x >= 0 and c.y < symbols.size() and c.x < symbols[c.y].size()) //If it's a valid point...
			{
			  	line+=symbols[c.y][c.x];
			}
			else
			{
			  	line+=" ";
			}
		}
		rv.push_back(line);
	}
	return rv;
}

vector<Coordinate> Maze::locationsOf(char ch)
{
  	vector<Coordinate> rv;
	for(int i = 0; i < symbols.size(); i++)
	{
	  	for(int j = 0; j < symbols[i].size(); j++)
	  	{
	    		if (symbols[i][j] == ch)
            		{
	      			rv.push_back(Coordinate(j,i));
	    		}
	  	}
	}
	return rv;
}

char Maze::getSymbol(Coordinate loc)
{
  	if(loc.x < 0 or loc.y < 0 or loc.y >= symbols.size() or loc.x >= symbols[loc.y].size())
	{
	  	return '\0';
	}
	return symbols[loc.y][loc.x];
}


void Maze::setSymbol(Coordinate loc, char ch)
{
  	if(loc.x < 0 or loc.y < 0 or loc.y >= symbols.size() or loc.x >= symbols[loc.y].size())
	{
	  	return;
	}
	symbols[loc.y][loc.x] = ch;
}

bool Maze::isValid(Coordinate loc)
{
 
	if(loc.x < 0 or loc.y < 0 or loc.y >= symbols.size() or loc.x >= symbols[loc.y].size())
	{
	  	return false;
	}

	if(symbols[loc.y][loc.x] == '#')
	{
	  	return false;
	}
	else
	{
	  	return true;
	}	
}
