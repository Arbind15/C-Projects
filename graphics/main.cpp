#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int er;
    printf("HI");
    initgraph(&gd,&gm,"");
    setcolor(GREEN);
    line(0,50,200,300);
    printf("Ho");
    getch();
    closegraph();
    return 0;
}
