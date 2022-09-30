#include "Painter.h"

Painter::Painter(DrawingItem* drawingItem)
{
    m_drawingItem = drawingItem;
}

void Painter::paintRectangle(int posX, int posY, int width, int height)
{
    m_drawingItem->goTo(posX, posY);
    m_drawingItem->penDown();
    m_drawingItem->goTo(posX  + width, posY);
    m_drawingItem->goTo(posX + width, posY + height);
    m_drawingItem->goTo(posX, posY + height);
    m_drawingItem->goTo(posX, posY);
    m_drawingItem->penUp();
}
