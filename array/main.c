#include <stdio.h>
#include <stdlib.h>

void input(int a[][100], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
}

void display(int a[][100], int n, int m )
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d ",a[i][j]);
    }
}
int main()
{
    int a[100][100],n,m;

    printf("Enter the value of n,m:");
    scanf("%d%d",&n,&m);
    input(a,n,m);
    display(a,n,m);

    getch();

    return 0;
}
