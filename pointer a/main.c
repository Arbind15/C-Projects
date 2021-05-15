#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n[][5]={"Arbind","Mehta"};
    int j,i;

    for(i=0;i<2;i++)
        for(j=0;j<strlen(n);j++)
        printf("%d ",(*(n+i)+j));
    return 0;
}
