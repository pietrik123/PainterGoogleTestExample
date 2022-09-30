#pragma once

#include "DrawingItem.h"

#include <iostream>

class Painter
{
private:
    DrawingItem* m_drawingItem;
public:
    Painter(DrawingItem* drawingItem);
    void paintRectangle(int posX, int posY, int widht, int height);
};
