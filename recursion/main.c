#include <stdio.h>
#include <stdlib.h>

int fact();

int main()
{
    int n=5;
    printf("The factrioal is:%d",fact(n));
    return 0;
}

int fact(int n)
{
    if(n==0||n==1)
    return 1;

    else
    return(n*fact(n-1));
}
