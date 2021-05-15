#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        printf("*\t");

        printf("\n");
    }
    printf("\n");
    return 0;
}
