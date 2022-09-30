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
