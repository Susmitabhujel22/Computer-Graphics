

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x0, y0, x1, y1;
    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y0: ";
    cin >> y0;
    cout << "Enter y1: ";
    cin >> y1;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int pk = 2 * dy - dx;  // Initial decision parameter

    int steps = max(dx, dy); // Number of steps is the maximum of dx and dy
    float xincr = (float)dx / steps;  // Calculate x increment per step
    float yincr = (float)dy / steps;  // Calculate y increment per step

    float x = x0;
    float y = y0;

    for (int i = 0; i <= steps; ++i) {
        putpixel(round(x), round(y), WHITE);  // Round x and y and draw pixel
        x += xincr;  // Update x based on xincr
        y += yincr;  // Update y based on yincr
    }

    getch();
    closegraph();
    return 0;
}


