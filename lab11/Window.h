#ifndef WINDOW__H
#define WINDOW__H

#include "Drawable.h"

class Window: public Drawable{
	public:
	  	virtual void draw(Graphics* g);
		virtual Window* keyPressed(char c);
	  	int centerText(Graphics* g, string txt);	
		Window* next = NULL;
};


#endif
