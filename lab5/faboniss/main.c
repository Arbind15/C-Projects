#include <stdio.h>
#include <stdlib.h>
#define n 300
int main()
{
    int i,n1=-1,n2=1; //to start from 1 assign n1=0
    long nx;

    for(i=0;i<n;i++)
    {

        nx=n1+n2;
        n1=n2;
        n2=nx;
        printf("%ld\t",nx);
        if(i%10==0)
            printf("\n");


    }
    return 0;
}
