#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int i,n1=-1,n2=1;
    int nx; //to start from 1 assign n1=0

    for(i=0;i<n;i++)
    {

        nx=n1+n2;
        n1=n2;
        n2=nx;
        printf("%d\t",nx);

    }
    return 0;
}
