#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char a[]="ARBIND", b[]="PURWANCHAL",c[30];

    for(i=0;i<6;i++)
    {
        for(j=0;j<i+1;j++)
            printf("%c ",a[j]);

        printf("\n");

    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<i+1;j++)
           {
            if((j%2)!=0||(i%2)!=0)
            printf("%c ",tolower(b[j]));   //or we can use string containing lower case or also perform ASCII operation by +-32

            else
            printf("%c ",b[j]);

           }

        printf("\n");

    }


    return 0;
}
