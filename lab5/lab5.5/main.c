#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(j==5-i||j==4+i||j==13-i||j==12+i)
            printf("  *");
            else
            printf("   ");

        }

        printf("\n");
    }

    return 0;
}
