#include "game.h"
#include "ship.h"

Ship::Ship(const SSDL_Image& img) : m_picture{img}
{
	m_x = WIDTH - 1; //Ships start on the right side of the screen

	m_y = random()  % HEIGHT; //Ships start at a random height

	m_speed = 2*(random() % 4) + 1; //Speed can vary from 1 to 3.
}

double Ship::x() const
{
	return m_x;
}

double Ship::y() const
{
	return m_y;
}

double Ship::speed() const
{
	return m_speed;
}

void Ship::update()
{
	m_x -= (random() % m_speed ) + 1;
	if (m_x < 0) {
		m_x = WIDTH-1;
	}

	int dy = random() % 11 - 5;
	m_y += dy;
	if (m_y < 0)
		m_y = 0;
	if (m_y >= HEIGHT) {
		m_y = HEIGHT - 1;
	}
}

void Ship::draw() const
{
	SSDL_RenderImage(m_picture, m_x + TLX, m_y + TLY);
}
