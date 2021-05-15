#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return(n*fact(n-1));
}

int isprime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=1;
    }
    if(flag==1||n==1||n==2)
        return 0;
    else
        return 1;
}

int main()
{
    int n,i;
    float Y=1.00;

    for(i=1;i<=10;i++)
    {
        if(isprime(i)==0)
        {
           Y=Y+(pow(i,2)/fact(i));
        }
    }


printf("Y=%.3f",Y);
    return 0;
}
