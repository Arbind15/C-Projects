#include<graphics.h>
#include<conio.h>
#include<stdio.h>


int main()
{
    int gd,gm,er,r;

    detectgraph(&gd,&gm);
    er=graphresult();
    if(er!=0)
    printf("Error!!!");
    initgraph(&gd,&gm,"C:\TC\BGI");
    setcolor(BLUE);
    line(10,100,200,300);
    getch();
    closegraph();
    return(r);
}
