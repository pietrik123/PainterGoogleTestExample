#include "Painter.h"

#include "Pen.h"

int main()
{
    Pen pen;
    Painter painter(&pen);

    painter.paintRectangle(10, 10, 50, 25);

    return 0;
}