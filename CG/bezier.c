#include <stdio.h>
#include <graphics.h>

void bezierCurve(int x[4], int y[4]) {
    float t;
    for (t = 0.0; t <= 1.0; t += 0.001) {
        float xt = (1 - t) * (1 - t) * (1 - t) * x[0] +
                   3 * t * (1 - t) * (1 - t) * x[1] +
                   3 * t * t * (1 - t) * x[2] +
                   t * t * t * x[3];

        float yt = (1 - t) * (1 - t) * (1 - t) * y[0] +
                   3 * t * (1 - t) * (1 - t) * y[1] +
                   3 * t * t * (1 - t) * y[2] +
                   t * t * t * y[3];

        putpixel(xt, yt, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x[4] = {100, 150, 200, 250};
    int y[4] = {200, 100, 300, 200};

    bezierCurve(x, y);

    getch();
    closegraph();
    return 0;
}
