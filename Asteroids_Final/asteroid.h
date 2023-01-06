#include "SSDL.h"
#include "ship.h"

#ifndef ASTEROID_H
#define ASTEROID_H

using namespace std;

class Asteroid
{
	private:
		double m_x; //Top left corner of asteroid
		double m_y; //Top left corner of asteroid
		SSDL_Image m_picture;
	
	public:
		Asteroid(const SSDL_Image& img);
		double x() const;
		double y() const;
		void draw() const;
		bool collides_with(const Ship s) const;
};

#endif //ASTEROID_H
