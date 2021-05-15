#include <stdio.h>


int main()
{
    int x=6,y=3;
    printf("x\t\ty\t\tExpression\t\tResult\n");
    printf("%d\t|\t%d\t|\tx=y+3\t\t|\tx=%d\n",x,y,y+3);
    printf("%d\t|\t%d\t|\tx=y-2\t\t|\tx=%d\n",x,y,y-2);
    printf("%d\t|\t%d\t|\tx=y*5\t\t|\tx=%d\n",x,y,y*5);
    printf("%d\t|\t%d\t|\tx=x/y\t\t|\tx=%d\n",x,y,x/y);
    printf("%d\t|\t%d\t|\tx=x%%y\t\t|\tx=%d\n",x,y,x%y);
    return 0;
}
