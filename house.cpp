#include "graphics.h"

void house() {
    setcolor(BROWN);

    int leftX = 400;
    int topY = getmaxy() / 2 - 150;
    int rightX = 600;
    int bottomY = getmaxy() / 2;

    rectangle(leftX, topY, rightX, bottomY);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill((leftX + rightX) / 2, (topY + bottomY) / 2, BROWN);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(leftX, topY, (leftX + rightX) / 2, topY - 50);
    line((leftX + rightX) / 2, topY - 50, rightX, topY);
    line(leftX, topY, rightX, topY);
    floodfill((leftX + rightX) / 2, topY - 25, BLACK);

    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 1, 3);
    int windowHeight = 50;
    rectangle((leftX + rightX) / 2 - 30, (topY + bottomY - windowHeight) / 2, (leftX + rightX) / 2 + 30, (topY + bottomY + windowHeight) / 2);
    line((leftX + rightX) / 2, (topY + bottomY - windowHeight) / 2, (leftX + rightX) / 2, (topY + bottomY + windowHeight) / 2);
    line((leftX + rightX) / 2 - 30, (topY + bottomY) / 2, (leftX + rightX) / 2 + 30, (topY + bottomY) / 2);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    int chimneyWidth = 20;
    int chimneyHeight = 50;
    rectangle((leftX + rightX) / 2 + 30, topY - 80 - chimneyHeight, (leftX + rightX) / 2 + 30 + chimneyWidth, topY - 25);
    floodfill((leftX + rightX) / 2 + 30 + chimneyWidth / 2, topY - 125, BLACK);
}
