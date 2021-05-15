#include<stdio.h>
#include<conio.h>

void main()
{

    int a=1,b=2;

    printf("a and b are:%d,%d\n",a,b);
    a=a+b;
    b=(a-b);
    a=(a-b);
    printf("a and b are:%d,%d",a,b);

    getch();


}
