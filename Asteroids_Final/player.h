#include "SSDL.h"
#include "ship.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	private:
		double m_y;
		SSDL_Image m_picture;

	public:
		Player(const SSDL_Image& img);
		double y() const;
		void draw() const;
		void up();
		void down();
		bool collides_with(const Ship s) const;
};

#endif //PLAYER_H
