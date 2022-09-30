
#include "Painter.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::_;
using ::testing::InSequence;

class PencilMock : public DrawingItem
{
public:
    MOCK_METHOD(void, penDown, ());
    MOCK_METHOD(void, penUp, ());
    MOCK_METHOD(void, goTo, (int,int));
};

TEST(PainterTest, DrawRectangleTest)
{
    // PREPARE
    // rectangle data
    int posX = 100;
    int posY = 200;
    int width = 30;
    int height = 60;

    PencilMock pencilMock;
    Painter painter(&pencilMock);

    // EXPECTATIONS

    InSequence s;
    EXPECT_CALL(pencilMock, goTo(posX, posY)).Times(1);
    EXPECT_CALL(pencilMock, penDown).Times(1);
    EXPECT_CALL(pencilMock, goTo(posX + width, posY)).Times(1);
    EXPECT_CALL(pencilMock, goTo(posX + width, posY + height)).Times(1);
    EXPECT_CALL(pencilMock, goTo(posX, posY + height)).Times(1);
    EXPECT_CALL(pencilMock, goTo(posX, posY)).Times(1);
    EXPECT_CALL(pencilMock, penUp).Times(1);

    // TRIGGER

    painter.paintRectangle(posX, posY, width, height);
}

