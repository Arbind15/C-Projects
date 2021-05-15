#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;

    for(i=0;i<=9;i++)
    {

        for(j=9-i;j>=0;j--)
           {
            printf(" ");
           }
        for(k=1;k<=((2*i)+1);k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
