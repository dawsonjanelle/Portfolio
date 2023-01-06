#ifndef MAZE__H
#define MAZE__H

#include "Coordinate.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "Explorer.h"

using namespace std;

class Maze
{
  	public:
	  	void load(string filename);//would have generate instead of this
		void save(string filename); //Saving the game
		vector<string> getData(Coordinate loc, int radius);
		vector<Coordinate> locationsOf(char ch);
		char getSymbol(Coordinate loc);
		void setSymbol(Coordinate loc, char ch);
		bool isValid(Coordinate x);
		void generate();

		//void generate(int w, int h); (making random maze)

	private:
		vector<string> symbols;
		Explorer* e;
};

#endif
