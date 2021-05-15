#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[]="PULCHWOK";
    int i,j,k;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(j>=(7-i))
            printf("%c",ch[j]);
            else
            printf(" ");

        }


        printf("\n");
    }

    return 0;
}
