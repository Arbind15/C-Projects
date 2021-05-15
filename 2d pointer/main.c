#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[2][5],(*p)[5],i,j;

    p=a;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        scanf("%c",(*(p+i)+j));
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        printf("%c ",*(*(p+i)+j));

        printf("\n");
    }
    return 0;
}
