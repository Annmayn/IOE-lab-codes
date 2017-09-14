#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{

int gd=DETECT,gm,errCode;
initwindow(600,400);
errCode=graphresult();
setcolor(GREEN);
line(0,50,200,300);
getch();
closegraph();
return 0;
}
