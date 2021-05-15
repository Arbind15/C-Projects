#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=0;i<=8;i++)
    {
        for(j=0;j<=i;j++)
            printf("*");
            printf("\n");
    }

     for(i=0;i<=10;i++)
    {
        for(j=0;j<=i;j++)
            printf("*");

        printf("\n");
    }
    return 0;
}
