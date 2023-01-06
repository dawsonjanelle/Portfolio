#include "SSDL.h"

#include <unistd.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>

#include "player.h"
#include "ship.h"
#include "game.h"
#include "stars.h"
#include "asteroid.h"
#include "bullet.h"

using namespace std;

//Number of ships the invasion fleet starts with

int main(int argc, char* argv[])
{
	// Initialize random number generator
	srandom(7); 
	
	//Initialize SSDL
	SSDL_SetWindowSize(1024, 768);
	SSDL_Image earthImage = SSDL_LoadImage("Earth.png"); //Puts Earth image in the background for glitter
	SSDL_RenderImage(earthImage, 0, 0);

	//Create an object representing the player's ship
        SSDL_Image playerImage = SSDL_LoadImage("Ship3.png"); //Ship3 is player for glitter
	Player p(playerImage);

	//Create an object representing the bullet
	SSDL_Image bulletImage = SSDL_LoadImage("Bullet.png"); //glitter

	//Create ships representing the invasion fleet
        vector<Ship> ships;

	//Create bullets
	vector<Bullet> bullets;

        SSDL_Image shipImage = SSDL_LoadImage("Ship4.png"); //Ship4 is enemy ship for glitter
	for (int i=0; i < INITIAL_SHIPS; ++i) {
		Ship s(shipImage);
                ships.push_back(s);
        }
	
	//Create asteroids
	vector<Asteroid> asteroids;
	SSDL_Image rockImage = SSDL_LoadImage("Rock2.png"); //Rock2 is rock for glitter
	for(int i = 0; i < NUM_ASTEROIDS; i++)
	{
		asteroids.push_back(Asteroid(rockImage));
	}
	
	int counter = 0; //How many "time units" have elapsed since the start of the game?
	bool alive = true; // Has the invasion fleet caught the player or not?
	
	StarField field(TLX - 150, TLY, WIDTH + 150, HEIGHT);

	//Main Game Loop
	while (!SSDL_IsQuitMessage() && alive) {

		//Draw the background objects (including the "score")
                SSDL_RenderClear();
		SSDL_RenderTextCentered(ships.size(), 512,10);
		field.draw();
		SSDL_RenderImage(earthImage, 0, 0);

		//Move and Draw the invasion fleet
		for (auto& s: ships) {
                        s.update();
                        s.draw();
                }

		//Draw asteroids
		for(int i = 0; i < asteroids.size(); i++)
		{
			asteroids[i].draw();
		}
		
		//Move the player
		if (SSDL_IsKeyPressed(SDLK_UP)) {
                        p.up();
                }

                if (SSDL_IsKeyPressed(SDLK_DOWN)) {
                        p.down();
                }

                p.draw();


		//Check for button press for bullet
		if (SSDL_IsKeyPressed(SDLK_SPACE))
		{
			Bullet b(bulletImage, TLX, p.y());
			bullets.push_back(b);
		}


		//Check for collisions
		for (int i = 0; i < ships.size(); ++i) {
                        if (p.collides_with(ships[i]))
                        {
                                sout << "Gave over!  You survived a fleet of " << ships.size() << " ships!" << endl;
                                if (ships.size() >= 50) {
					sout << "Well done!  Your ship was destroyed -- but not before you came within transmission range of Earth and" << endl << "gave your warning.  The world is saved!" << endl;	
				} else if (ships.size() > 20) {
                                        sout << "Congratulations!" << endl;
                                }
                                else {
                                        sout << "You can do better." << endl;
                                }
                                alive = false;
				break; 
                        }
                }
		
		for(auto bullet = bullets.begin(); bullet != bullets.end();)
		{
			auto ship = ships.begin();
			bool collision = false;
			while(ship != ships.end())
			{
				if(bullet->collides_with(*ship))
				{
					ship = ships.erase(ship);
					collision = true;
					break;
				}
				else
				{
					ship++;
				}	
			}
			if(collision)
			{
				bullet = bullets.erase(bullet);
			}
			else
			{
				bullet++;
			}
		}

		for(int i = 0; i < bullets.size(); i++)
		{
			bullets[i].draw();
			if(bullets[i].update() == true)
			{
				bullets.pop_back();
			}
		}

		for(auto asteroid = asteroids.begin(); asteroid != asteroids.end();)
		{
			auto ship = ships.begin();
			bool collision = false;
			while(ship != ships.end())
			{
				if(asteroid->collides_with(*ship))
				{
					ship = ships.erase(ship);
					collision = true;
					break;
				}
				else
				{
					ship++;
				}
			}
			if(collision)
			{
				asteroid = asteroids.erase(asteroid);
			}
			else
			{
				asteroid++;
			}
		}
		
				
                //Add a new ship every 100 updates
                ++counter;
                if (counter % 100 == 0) {
                        ships.push_back(Ship(shipImage));
                }

                SSDL_Delay(50);
        }
	
	SSDL_WaitKey();
}
