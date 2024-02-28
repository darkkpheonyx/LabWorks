// write a program to draw a circle using circle() function
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(250, 200, 100);
    getch();
    closegraph();
}
