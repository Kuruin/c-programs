#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawAnimatedCircle(int x, int y, int radius) {
    setcolor(WHITE);
    circle(x, y, radius);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 50;       // Starting x position
    int y = 200;      // y position
    int radius = 20;  // Circle radius

    while (x < getmaxx()) {  // Move the circle across the screen
        cleardevice();        // Clear the screen
        drawAnimatedCircle(x, y, radius); // Draw the circle
        delay(50);            // Delay for animation effect
        x += 5;              // Increment x position
    }

    getch();                // Wait for user input
    closegraph();           // Close the graphics window
    return 0;
}
