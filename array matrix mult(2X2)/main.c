#include <stdio.h>
void main()
{
    int a[2][2],b[2][2],i,j,x=0,y,k;

    printf("Enter first 2X2 matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    printf("Enter second 2X2 matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrices are:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

printf("&\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("The product matrix  is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           for(k=0;k<2;k++)
           {

           x+=(a[i][k]*b[k][j]);
        }
        printf("%d\t",x);
        x=0;
    }
    printf("\n");
    }
getch();
}
