//  Program to illustrate the concept of getpixel() function
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    putpixel(50, 50, WHITE);
    int color = getpixel(50, 50);
    printf("The colour of your pixel is : %d", color);
    getch();
    closegraph();
    return 0;
}