#ifndef EXPLORER__H
#define EXPLORER__H

#include "Coordinate.h"
#include <fstream>
using namespace std;
//Use this for saving, might need to make a cpp that saves this stuff for this class.
struct Explorer
{
  	Coordinate location;
	int coins = 10000;
	int spike = 0;
	int stam = 10;
	int pill = 0;
	int health = 5;
	int potion = 0;
	int teleport = 0;

	void save(string filename);
	void load(string filename);
};

#endif

