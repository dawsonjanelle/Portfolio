#include "SSDL.h"
#include "game.h"
#include "bullet.h"

using namespace std;

Bullet::Bullet(const SSDL_Image& img, const double x, const double y) : m_picture{img}, m_x{x}, m_y{y}
{

}

double Bullet::y() const
{
	return m_y;
}

double Bullet::x() const
{
	return m_x;
}

bool Bullet::update()
{
	m_x++;

	if(m_x > WIDTH-1)
	{
		return true;
	}
	return false;
}

void Bullet::draw()
{
	SSDL_RenderImage(m_picture, m_x + TLX, m_y + TLY);

}

bool Bullet::collides_with(const Ship s) const
{
	//Find middle of bullet
	int my = m_y + 10;
	int mx = m_x + 10;

	//Find middle of ship
	int cy = s.y() + 32;
	int cx = s.x() + 32;

	//Check if it's within radius
	int dx = (cx-mx);
	int dy = (cy-my);

	double d = sqrt(dx*dx + dy*dy);
	if(d <= 32.0)
	{
		return true;
	}
	return false;
}

