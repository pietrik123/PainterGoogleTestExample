// Painter.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "DrawingItem.h"

#include <iostream>


class Painter
{
private:
	DrawingItem* drawingItem;
public:
	Painter(DrawingItem* pencil);
	void paintRectangle(int posX, int posY, int widht, int height);
};



// TODO: Reference additional headers your program requires here.
