#include<stdio.h>
#include<conio.h>

void main()
{

    int a1=1,a2=2,c;

    printf("a and b are:%d,%d\n",a1,a2);
    c=a2;
    a2=a1;
    a1=c;
    printf("a and b are:%d,%d",a1,a2);

    getch();


}
