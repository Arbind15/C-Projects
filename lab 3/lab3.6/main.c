#include <stdio.h>
#define pi 3.1415
#define a 8
#define b 4
#define sum (a+b)
#define sub (a-b)
#define mult (a*b)
#define div (a/b)

int main()
{
    float c;

    c=pi*sum;
    printf("a. c=%f\n",c);
    c=pi*sub;
    printf("b. c=%f\n",c);
    c=pi*mult;
    printf("c. c=%f\n",c);
    c=pi*div;
    printf("d. c=%f\n",c);
    return 0;
}
