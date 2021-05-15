#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[5][5],m2[5][5],c1,r1,c2,r2,i,j,k,x=0;

    printf("Enter the order of first matrix in the range of 5:\n");
    scanf("%d%d",&r1,&c1);

    printf("Enter the order of second matrix in the range of 5:\n");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("Multiplication is not possible!!!");
        exit(0);
    }

    printf("Enter first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter second  matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The matrices are:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

printf("&\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }

    printf("The product matrix  is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           for(k=0;k<c1;k++)
           {

           x+=(m1[i][k]*m2[k][j]);
        }
        printf("%d\t",x);
        x=0;
    }
    printf("\n");
    }
getch();
}


