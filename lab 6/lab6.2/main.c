#include <stdio.h>
#include <stdlib.h>


int n_sum(int n)
{
    if(n==0)
        return 0;
    else
        return(n+n_sum(n-1));
}

int main()
{
    int n=50;
    printf("The sum of first 50 natural number is:%d\n",n_sum(n));
    getch();
    return 0;
}
