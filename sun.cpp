#include "graphics.h"
#include "picture.hpp"
#include <cmath>

void sun() {
    // Используем угол для вращения солнца
    static float angle = 0.0;

    // Очищаем предыдущее изображение

    setcolor(YELLOW);

    for (int i = 0; i < 12; ++i) {
        int x_end = 100 + 60 * cos((angle + 45 * i) * 3.14159 / 180);
        int y_end = 100 - 60 * sin((angle + 45 * i) * 3.14159 / 180); 
        line(100, 100, x_end, y_end);
    }

    // Увеличиваем угол для следующего кадра
    angle += 1.0;

    // Проверяем, чтобы угол не вышел за пределы 360 градусов
    if (angle > 360.0) {
        angle -= 360.0;
    }


    setfillstyle(SOLID_FILL, YELLOW);


    fillellipse(100, 100, 40, 40);

    // Задержка для создания эффекта вращения
    delay(50);
    
   sun();
}
