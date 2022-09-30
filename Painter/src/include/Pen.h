#pragma once

#include "DrawingItem.h"

class Pen : public DrawingItem
{
public:
    void penDown() override;
    void penUp() override;
    void goTo(int posX, int posY) override;
};
