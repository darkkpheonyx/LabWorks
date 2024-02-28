// write a program to display text in console using outtext()
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(CYAN);
    outtextxy(100, 100, "Deepesh Sunuwar");
    getch();
    closegraph();
}
