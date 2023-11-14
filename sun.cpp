#include "graphics.h"
#include "picture.hpp"
#include <cmath>

void sun() {
    // ���������� ���� ��� �������� ������
    static float angle = 0.0;

    // ������� ���������� �����������

    setcolor(YELLOW);

    for (int i = 0; i < 12; ++i) {
        int x_end = 100 + 60 * cos((angle + 45 * i) * 3.14159 / 180);
        int y_end = 100 - 60 * sin((angle + 45 * i) * 3.14159 / 180); 
        line(100, 100, x_end, y_end);
    }

    // ����������� ���� ��� ���������� �����
    angle += 1.0;

    // ���������, ����� ���� �� ����� �� ������� 360 ��������
    if (angle > 360.0) {
        angle -= 360.0;
    }


    setfillstyle(SOLID_FILL, YELLOW);


    fillellipse(100, 100, 40, 40);

    // �������� ��� �������� ������� ��������
    delay(50);
    
   sun();
}
