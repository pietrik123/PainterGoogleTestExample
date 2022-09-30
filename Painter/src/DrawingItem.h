
#pragma once

class DrawingItem
{
public:
	virtual void penDown() = 0;
	virtual void goTo(int posX, int posY) = 0;
	virtual void penUp() = 0;
};