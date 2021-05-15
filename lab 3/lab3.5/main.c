#include <stdio.h>


int main()
{
    float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;

    printf("X\ty\tz=\t%10.1f|\t%10.1f|\t%10.1f|\n",x,y,z);
    printf("A\tB\tC=\t%10.1f|\t%10.1f|\t%10.1f|\n",A,B,C);
    printf("--------------------------------------------------------------------\n");
    printf("X\ty\tz=\t|%-10.2f\t|%-10.2f\t|%-10.2f\n",x,y,z);
    printf("A\tB\tC=\t|%-10.2f\t|%-10.2f\t|%-10.2f\n",A,B,C);

    return 0;
}
