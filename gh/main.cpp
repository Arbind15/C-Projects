#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int gd,gm,er,r;


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
