
#include "graphics.h"
#include "picture.hpp"
#include <stdio.h>
#include <math.h>

int main() {
    initwindow(800, 600);


    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(0, getmaxy() / 2, getmaxx(), getmaxy());


    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    bar(0, 0, getmaxx(), getmaxy() / 2);

    house();
    sun();
    //man();
    //fence();
    //tree();

    getch();
    closegraph();
    return 0;
}
