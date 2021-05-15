#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,*p,a=2,b=3,c;
    p1=&a;
    p2=&b;
    c=*p1+*p2;
    p=&c;
    printf("The sum is:%d and address is:%d",p1,*p1+1);


    return 0;
}
