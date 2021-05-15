#include<stdio.h>
int main()
{
    int i,j,m,n=100;


for(i=1;i<=10;i++)
    {

        for(j=i;j<=10;j++)
        {
            printf("#");

        }
        printf("\n");
    }

    for(i=10;i>=1;i--)
    {

        for(j=10;j>=i;j--)
        {
            printf("#");
        }
        printf("\n");
    }



    getch();

}
