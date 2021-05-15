#include <stdio.h>
#include <stdlib.h>

long fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n*fact(n-1));
}

int main()
{
    int n,r;
    printf("Enter the value of n and r:\n");
    scanf("%d\t%d",&n,&r);

    printf("Factorial of %d is:%d\n",n,fact(n));

    printf("Permutation (%d,%d) is:%.3f\n",n,r,(float)(fact(n)/fact(n-r)));

    printf("Combination (%d,%d) is:%.3f\n",n,r,(float)(fact(n)/(fact(n-r)*fact(r))));

    getch();


    return 0;
}
