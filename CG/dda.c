#include <stdio.h>
#include <math.h>
#include <graphics.h>

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1, dy = y2 - y1, steps;
    float xInc, yInc, x = x1, y = y1;
    
    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    xInc = dx / (float) steps;
    yInc = dy / (float) steps;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xInc;
        y += yInc;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    drawLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
