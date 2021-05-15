#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm,errcode;
    initgraph(&gd,&gm," ");
    errcode=graphresult();
    if(errcode!=grOk)
    {
        printf("Error\n");
        exit(1);
    }
    setcolor(GREEN);
    line(0,50,200,300);
    getch();
    closegraph();
    return 0;
}
