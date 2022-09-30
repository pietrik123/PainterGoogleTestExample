#include "Painter.h"

Painter::Painter(DrawingItem* pencil)
{
    drawingItem = pencil;
}

void Painter::paintRectangle(int posX, int posY, int width, int height)
{
    drawingItem->goTo(posX, posY);
    drawingItem->penDown();
    drawingItem->goTo(posX  + width, posY);
    drawingItem->goTo(posX + width, posY + height);
    drawingItem->goTo(posX, posY + height);
    drawingItem->goTo(posX, posY);
    drawingItem->penUp();
}
