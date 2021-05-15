#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter number of integer:");
    scanf("%d",&n);
    int a[n];
    printf("Enter integer:");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("Reverse is:");
    for(i=(n-1);i>=0;i--)
    {printf("%d ",a[i]);}

}
getch();

