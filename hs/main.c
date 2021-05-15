#include<stdio.h>
int main()
{
    int i,j=10,k;

    {
    for(i=1;i<=10;i++)
    {
    k=j--;
    for(k=1;k<=j;k++)
    printf("%d",k);
    printf("\n");
    }
    }

    getch();
    return 0;
}
