
#include "Pen.h"

#include <iostream>

void Pen::penDown() 
{
    std::cout << "Pen::penDown() ... \n";
}

void Pen::penUp() 
{
    std::cout << "Pen::penUp() ... \n";
}

void Pen::goTo(int posX, int posY) 
{
    std::cout << "Pen::goTo( " << posX << " , " << posY << ")\n";
}