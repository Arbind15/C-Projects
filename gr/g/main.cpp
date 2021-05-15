#include <graphics.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm;

    /* initialize graphic mode */
    initgraph(&gd,&gm,"");
   setcolor(GREEN);
   line(0,50,200,300);
    circle(200,200,50);
    getchar();
    closegraph();
    return 0;
}
