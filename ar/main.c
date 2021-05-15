#include<stdio.h>
#define pi 3.14
int main()
{
    int a;
    printf("Please Enter the radius of circle(in cm):\n");
    scanf("%d",&a);
    float b=pi*a*a;
    printf("Area of circle is =>%f sq.cm",b);
    getch();
    return 0;

}
