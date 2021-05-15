#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i;

    for(i=1;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
         printf("* ");
        }
        printf("\n");
    }

    return 0;
}
