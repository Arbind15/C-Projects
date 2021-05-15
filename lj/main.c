#include <stdio.h>
int sumseries(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of the series is %d",sumseries(n));
}
int sumseries(int n)
{
    int i,sum=0;
    if(n==1)
        return 1;
    for(i=0;i<n;i++)
    {
    sum=sum*10+1;
    }
    return (sum+sumseries(n-1));
}
