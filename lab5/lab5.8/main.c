#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,x;

    for(i=1;i<=5;i++)
    {
        printf("%d\t",i);
        k=i;
        x=5;
        for(j=5-i;j>=1;j--)
        {
            k=k+x;
            printf("%d\t",k);
            x--;
        }

         printf("\n");
    }


    return 0;
}
