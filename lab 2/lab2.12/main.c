#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=5;
    float f1=5;
    double d1=5;
    long double ld1=5;
    char c1='a';


    printf("size of integer is:%d\n",sizeof(n1));
    printf("size of float is:%d\n",sizeof(f1));
    printf("size of double is:%d\n",sizeof(d1));
    printf("size of long double is:%d\n",sizeof(ld1));
    printf("size of character is:%d\n",sizeof(c1));

    getch();

}
