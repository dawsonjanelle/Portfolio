#include "game.h"
#include "player.h"

Player::Player(const SSDL_Image& img)
{
	m_picture = img;

	m_y = random() % HEIGHT; //Player start at a random height

}

double Player::y() const
{
	return m_y;
}

void Player::up() {
	if (m_y > 0) {
		m_y-=5;
	}
}

void Player::down() {
	if (m_y < HEIGHT - 1) {
		m_y +=5;
	}
}

void Player::draw() const
{
	SSDL_RenderImage(m_picture, TLX, m_y + TLY);
}

bool Player::collides_with(const Ship s) const
{
	//Find the "middle" point of the player's image.
	int my = m_y + 32;
	int mx = 32;

	//Find the middle of the ship's image
	int cy = s.y() + 32;
	int cx = s.x() + 32;

	//Check if middle of player's ship is within a 32 pixel radius
	int dx = (cx-mx);
	int dy = (cy-my);

	double d = sqrt(dx*dx + dy*dy);
	if (d <= 32.0) {
		return true;
	}
	return false;
}
