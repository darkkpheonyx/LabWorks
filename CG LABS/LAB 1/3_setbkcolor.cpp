// Changing drawing/foreground and background color
#include <graphics.h>
#include <stdio.h>
#include <dos.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    putpixel(50, 50, CYAN);
    int color = getpixel(50, 50);
    delay(2000);
    setbkcolor(WHITE);
    cleardevice();
    getch();
    closegraph();
    return 0;
}