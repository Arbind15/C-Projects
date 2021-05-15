#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[20]={'a','b','r','i','n','d'},b[20],c[10]={'x'},d[10]={'x'},x[]="arbind";
    printf("a=%s\n",a);
    strcpy(b,a);
    printf("b=%s\n",b);
    strcat(b,a);
    printf("%s\n",b);
    printf("%d\n",strlen(a));
    printf("%d\n",strcmp(b,a));
    printf("%d\n",strcmp(c,d));
    printf("%s\n",x);
    printf("%d\n",strlen(x));

    return 0;
}
