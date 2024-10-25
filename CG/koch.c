#include <graphics.h>
#include <math.h>

void koch(int x1, int y1, int x2, int y2, int iter) {
    if (iter == 0) {
        line(x1, y1, x2, y2);
    } else {
        int x3 = (2 * x1 + x2) / 3;
        int y3 = (2 * y1 + y2) / 3;
        int x4 = (x1 + 2 * x2) / 3;
        int y4 = (y1 + 2 * y2) / 3;

        int x = x3 + (x4 - x3) * cos(M_PI / 3) - (y4 - y3) * sin(M_PI / 3);
        int y = y3 + (x4 - x3) * sin(M_PI / 3) + (y4 - y3) * cos(M_PI / 3);

        koch(x1, y1, x3, y3, iter - 1);
        koch(x3, y3, x, y, iter - 1);
        koch(x, y, x4, y4, iter - 1);
        koch(x4, y4, x2, y2, iter - 1);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 300, x2 = 400, y2 = 300;
    int iterations = 4;

    koch(x1, y1, x2, y2, iterations);

    getch();
    closegraph();
    return 0;
}

