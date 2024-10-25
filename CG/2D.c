#include <graphics.h>
#include <math.h>

void translate(int x, int y, int tx, int ty) {
    putpixel(x + tx, y + ty, WHITE);
}

void rotate(int x, int y, int xc, int yc, float angle) {
    float rad = angle * M_PI / 180;
    int xr = xc + (x - xc) * cos(rad) - (y - yc) * sin(rad);
    int yr = yc + (x - xc) * sin(rad) + (y - yc) * cos(rad);
    putpixel(xr, yr, WHITE);
}

void scale(int x, int y, int xc, int yc, float sx, float sy) {
    int xs = xc + (x - xc) * sx;
    int ys = yc + (y - yc) * sy;
    putpixel(xs, ys, WHITE);
}

void reflect(int x, int y, int axis) {
    if (axis == 0) // x-axis reflection
        putpixel(x, -y, WHITE);
    else // y-axis reflection
        putpixel(-x, y, WHITE);
}

void shear(int x, int y, int shx, int shy) {
    int xs = x + shx * y;
    int ys = y + shy * x;
    putpixel(xs, ys, WHITE);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original point
    int x = 100, y = 100;
    putpixel(x, y, WHITE);

    // Translation
    translate(x, y, 50, 50);

    // Rotation around origin by 45 degrees
    rotate(x, y, 0, 0, 45);

    // Scaling with respect to origin
    scale(x, y, 0, 0, 1.5, 1.5);

    // Reflection along x-axis
    reflect(x, y, 0);

    // Shearing with shx = 1, shy = 0
    shear(x, y, 1, 0);

    getch();
    closegraph();
    return 0;
}
