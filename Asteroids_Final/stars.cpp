#include "stars.h"
#include "game.h"
#include "SSDL.h"

const int STAR_PROBABILITY = 5;

StarField::StarField(const int x, const int y, const int width, const int height)
{
	//Loop through the cords of the star field
	for(int i = x; i < x + width; i++)
	{
		for (int j = y; j < y + height; j++)
		{
			if(random() % 1000 < 5) //With a 0.5% probability
			{
				Star s; //Creates new star

				s.x = i; //Sets X cord
				s.y = j; //Sets Y cord

				stars.push_back(s); //Adds the star to the vector
			}

		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////

void StarField::draw()
{

	const SSDL_Color PURPLE = SSDL_CreateColor(73, 17, 76);
	//White is a built in color.
	const SSDL_Color PINK = SSDL_CreateColor(227, 96, 219);

	for(auto& s: stars)
	{
		
		//Draw the stars
			SSDL_SetRenderDrawColor(PURPLE);
			SSDL_RenderDrawPoint(s.x + 40, s.y + 40);

			SSDL_SetRenderDrawColor(WHITE);
			SSDL_RenderDrawPoint(s.x, s.y);
	
			SSDL_SetRenderDrawColor(PINK);
			SSDL_RenderDrawPoint(s.x + 10, s.y + 10);

			SSDL_SetRenderDrawColor(WHITE);

		//Move it right by 1 pixel
		s.x++;

		//If it reaches the end of the screen, return it to the left side
		if(s.x > TLX + WIDTH)
		{
			s.x = TLX - 150;
		}
	}
}
