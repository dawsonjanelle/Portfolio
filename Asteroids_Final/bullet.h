#include "SSDL.h"
#include "ship.h"

#ifndef BULLET_H
#define BULLET_H

using namespace std;

class Bullet
{
	private:
		double m_y;
		double m_x;
		SSDL_Image m_picture;

	public:
		Bullet(const SSDL_Image& img, const double x, const double y);
		double x() const;
		double y() const;
		bool update();
		void draw();
		bool collides_with(const Ship s) const;
};

#endif //BULLET_H
