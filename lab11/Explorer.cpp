#include "Explorer.h"
#include <sstream>
using namespace std;

void Explorer::save(string filename)
{
  	ofstream fout;
	fout.open(filename);
	
	fout << coins << endl;
	fout << spike << endl;
	fout << health << endl;
	fout << potion << endl;
	fout << teleport << endl;
	fout << stam << endl;
	fout << pill << endl;
	fout << location.x << "\t" << location.y;

	fout.close();
}

void Explorer::load(string filename)
{
  	ifstream fin;
	fin.open(filename);
	fin >> coins;
	fin >> spike;
	fin >> health;
	fin >> potion;
	fin >> teleport;
	fin >> stam;
	fin >> pill;
	fin >> location.x;
	fin >> location.y;
	fin.close();
}
