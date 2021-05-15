#include<stdio.h>

void main()
{
    char a[100][100],b[100][100];
    int i,j,n,r,c,sum=0;

    //2-D array
    printf("Enter the number of Row & Coloum:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    printf("Your first matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
         printf("%d\t",a[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter the element of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
     printf("Your second matrix is:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
         printf("%d\t",a[i][j]);
        }
    }
    printf("\n\nSum of given matrix is:\n\a");

    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            sum=(a[i][j]+b[i][j]);
            printf("%d\t",sum);
        }
    }


    getch();
}
