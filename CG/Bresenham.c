#include <stdio.h>
#include <graphics.h>

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1), dy = abs(y2 - y1);
    int p = 2 * dy - dx;
    int twoDy = 2 * dy, twoDyDx = 2 * (dy - dx);
    int x, y, xEnd;

    if (x1 > x2) { x = x2; y = y2; xEnd = x1; }
    else { x = x1; y = y1; xEnd = x2; }

    putpixel(x, y, WHITE);

    while (x < xEnd) {
        x++;
        if (p < 0) p += twoDy;
        else { y++; p += twoDyDx; }
        putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    drawLine(100, 100, 200, 150);

    getch();
    closegraph();
    return 0;
}
