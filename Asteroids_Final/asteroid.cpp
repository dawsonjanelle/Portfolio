#include "SSDL.h"
#include "game.h"
#include "asteroid.h"

using namespace std;

Asteroid::Asteroid(const SSDL_Image& img) : m_picture{img}
{
	m_x = random() % WIDTH; //Asteroid starts at random width
	m_y = random() % HEIGHT; //Asteroid starts at random height
}

double Asteroid::x() const
{
	return m_x;
}

double Asteroid::y() const
{
	return m_y;
}

void Asteroid::draw() const
{
	SSDL_RenderImage(m_picture, m_x + TLX, m_y + TLY);
}

bool Asteroid::collides_with(const Ship s) const
{
	//Find the "middle" point of asteroids image
	int my = m_y + 32;
	int mx = m_x + 32;

	//Find the middle of the ship's image
	int cy = s.y() + 32;
	int cx = s.x() + 32;

	//Check if middle of ship is within 64 pixel radius
	int dx = (cx-mx);
	int dy = (cy-my);

	double d = sqrt(dx*dx + dy*dy);
	if(d <= 32.0)
	{
		return true;
	}
	return false;
}
