//  Draw a line by using putpixel( ) function using for loop
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    for (int i = 1; i <= 150; i++)
    {
        delay(50);
        putpixel(100 + i, 100 + i, RED);
    }

    getch();
    closegraph();
}