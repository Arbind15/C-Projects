#include <stdio.h>
#include <graphics.h>
#include <conio.h>
 using namespace std;
int main() {
    int gd=DETECT,gm;

    /* initialize graphic mode */
    initgraph(&gd,&gm,NULL);
   setcolor(GREEN);
   line(0,50,200,300);
    circle(200,200,50);
    getch();
    closegraph();
    return 0;
}
