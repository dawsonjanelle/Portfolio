#include "SSDL.h"

#ifndef SHIP_H
#define SHIP_H

class Ship
{
	private:
		double m_x;
		double m_y;
		int m_speed;
		SSDL_Image m_picture;

	public:
		Ship(const SSDL_Image& img);
		double x() const;
		double y() const;
		double speed() const;
		void draw() const;
		void update();
};

#endif //SHIP_H
