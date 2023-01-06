#ifndef SHOPWINDOW__H
#define SHOPWINDOW__H

#include "Drawable.h"
#include "Window.h"
#include "Explorer.h"

using namespace std;

class ShopWindow: public Window
{
	public:
	  	ShopWindow(Explorer* e);
  		void draw(Graphics* g);
		Window* keyPressed(char c);
	  	int centerText(Graphics* g, string txt);	
		Window* shop = NULL;
		Explorer* explorer;
/*
	string type;
	double amount;
	double price;

	string toString()
	{
	  	return "{" + type + ": " + to_string(amount) + " @" + to_string(price) + "}";
	}
	bool operator <(const Treasure& t) const
	{
  		return price < t.price;
	}
*/
};


#endif
