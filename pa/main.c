#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[]="PULCHWOK";
    int i,j,k;

    for(i=0;i<8;i++)
    {
        if((i%2)!=0)
        {
        for(j=0;j<i+1;j++)
            printf("%c",ch[j]);

        }
        else
        {
            for(j=0;j<i+1;j++)
            {
            if((j%2)!=0)
                printf("%c",tolower(ch[j]));
            else
                printf("%c",ch[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
