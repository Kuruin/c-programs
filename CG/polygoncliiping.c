#include <graphics.h>

typedef struct {
    int x, y;
} Point;

void clipLeft(Point in[], int *n, int xmin, Point out[], int *outCount) {
    for (int i = 0; i < *n; i++) {
        Point curr = in[i];
        Point prev = in[(i - 1 + *n) % *n];
        if (curr.x >= xmin) {
            if (prev.x < xmin) {
                int y = prev.y + (curr.y - prev.y) * (xmin - prev.x) / (curr.x - prev.x);
                out[(*outCount)++] = (Point){xmin, y};
            }
            out[(*outCount)++] = curr;
        } else if (prev.x >= xmin) {
            int y = prev.y + (curr.y - prev.y) * (xmin - prev.x) / (curr.x - prev.x);
            out[(*outCount)++] = (Point){xmin, y};
        }
    }
}

void sutherlandHodgemanClip(Point poly[], int n, int xmin, int ymin, int xmax, int ymax) {
    Point output[20];
    int outCount = 0;

    // Clip against left boundary
    clipLeft(poly, &n, xmin, output, &outCount);
    n = outCount; outCount = 0;

    // Repeat the process for other boundaries (top, right, bottom)
    Point temp[20];
    for (int i = 0; i < n; i++) {
        temp[i] = output[i];
    }
    
    // Clip for right boundary
    clipLeft(temp, &n, xmax, output, &outCount);
    //... continue for top and bottom if needed
    // Once fully clipped, draw the resulting polygon
    for (int i = 0; i < outCount - 1; i++) {
        line(output[i].x, output[i].y, output[i + 1].x, output[i + 1].y);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    Point poly[] = {{150, 150}, {250, 100}, {300, 200}, {200, 250}};
    int n = 4;
    
    int xmin = 100, ymin = 100, xmax = 300, ymax = 300;
    rectangle(xmin, ymin, xmax, ymax);

    sutherlandHodgemanClip(poly, n, xmin, ymin, xmax, ymax);

    getch();
    closegraph();
    return 0;
}
