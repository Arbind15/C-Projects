#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,rem,x,i=1,bin=0;

    printf("Enter decimal\n");
    scanf("%d",&d);
    while(d!=0)
    {
        rem=d%2;
        bin=bin+(rem*i);
        d=d/2;
        i=i*10;
    }
    printf("The binary equivalent is:%d",bin);

    getch();
    return 0;
}
