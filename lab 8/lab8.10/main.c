#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char s[]="UNIVERSITY";

    for(i=0;i<5;i++)
    {
        for(j=0;j<2+2*i;j++)
        {
            printf(" %c",s[j]);
        }
        printf("\n");
    }
        for(i=3;i>=0;i--)
    {
        for(j=0;j<2+2*i;j++)
        {
            printf(" %c",s[j]);
        }
        printf("\n");
    }
    return 0;
}
