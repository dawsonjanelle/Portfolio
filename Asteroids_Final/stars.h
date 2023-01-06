#ifndef STARS_H
#define STARS_H

#include <vector>
using namespace std;

class Star
{
	public:
		int x;
		int y;
};

////////////////////////////

class StarField
{
	private:
		vector<Star> stars;
		
	public:
		StarField(const int x, const int y, const int width, const int height);
		void draw();
};

#endif
