#include <stdio.h>
main()
{
    int i,j,k=20,l,m=1;

    {
        for(i=1;i<11;i++)
    {

        for(j=1;j<k;j++)
        {
           printf("*");

        }
        printf("\n");
        for(l=1;l<=m;l++)
           {
               printf(" ");
           }
               m=m++;

        k=(k-2);
    }
    }


    getch();
    return 0;
}
