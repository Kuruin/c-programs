#include <stdio.h>
#include <graphics.h>

void liangBarskyClip(int x1, int y1, int x2, int y2, int xmin, int ymin, int xmax, int ymax) {
    float t1 = 0, t2 = 1, p, q, r;
    int dx = x2 - x1, dy = y2 - y1;
    int pArr[4] = {-dx, dx, -dy, dy};
    int qArr[4] = {x1 - xmin, xmax - x1, y1 - ymin, ymax - y1};

    for (int i = 0; i < 4; i++) {
        p = pArr[i];
        q = qArr[i];
        if (p == 0 && q < 0) return; // Line is parallel and outside
        if (p != 0) {
            r = (float)q / p;
            if (p < 0) t1 = (r > t1) ? r : t1;
            else t2 = (r < t2) ? r : t2;
        }
    }

    if (t1 < t2) {
        int newX1 = x1 + t1 * dx;
        int newY1 = y1 + t1 * dy;
        int newX2 = x1 + t2 * dx;
        int newY2 = y1 + t2 * dy;
        line(newX1, newY1, newX2, newY2);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 50, y1 = 150, x2 = 300, y2 = 400; // Line coordinates
    int xmin = 100, ymin = 100, xmax = 250, ymax = 250; // Clipping window

    rectangle(xmin, ymin, xmax, ymax); // Drawing clipping window
    liangBarskyClip(x1, y1, x2, y2, xmin, ymin, xmax, ymax); // Clipped line

    getch();
    closegraph();
    return 0;
}
