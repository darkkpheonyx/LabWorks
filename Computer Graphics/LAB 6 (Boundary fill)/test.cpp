/*4 and 8 connected boundary fill algorithm*/
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
    if (getpixel(x, y) != bcolor && getpixel(x, y) != fcolor)
    {
        // delay(10);
        putpixel(x, y, fcolor);
        boundary_fill(x + 1, y, fcolor, bcolor);
        boundary_fill(x - 1, y, fcolor, bcolor);
        boundary_fill(x, y + 1, fcolor, bcolor);
        boundary_fill(x, y - 1, fcolor, bcolor);
        // 8-connected
        boundary_fill(x + 1, y + 1, fcolor, bcolor);
        boundary_fill(x + 1, y - 1, fcolor, bcolor);
        boundary_fill(x - 1, y + 1, fcolor, bcolor);
        boundary_fill(x - 1, y - 1, fcolor, bcolor);
    }
}

int main()
{
    int x, y, fcolor, bcolor;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    setcolor(15);
    // rectangle(200, 200, 250, 250);
    circle(200, 200, 100);
    printf("Enter the seed point (x, y) to fill rectangle(200, 200, 250, 250):");
    scanf("%d%d", &x, &y);
    printf("Enter Boundary color: ");
    scanf("%d", &bcolor);
    printf("Enter Fill color: ");
    scanf("%d", &fcolor);
    boundary_fill(x, y, fcolor, bcolor);
    getch();
    closegraph();
    return 0;
}
