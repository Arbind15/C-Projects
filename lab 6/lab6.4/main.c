#include <stdio.h>
#include <stdlib.h>

int fibs(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
    return 1;
    else
        return(fibs(n-1)+fibs(n-2));
}

int main()
{
    int n,i;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d ",fibs(i));
    }
    getch();
    return 0;
}
