]#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3],b[2][3],j,k,i,sum[2][3];

    printf("Enter the first row wise matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }

     printf("Enter the second row wise matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

     printf("The sum of matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    getch();
    return 0;
}
