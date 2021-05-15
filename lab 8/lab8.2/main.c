#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n[3],i;
    n[0]=(int*)malloc(3*sizeof(int));
    printf("Enter three number(positive) to be compared:\n");
    for(i=0;i<3;i++)
        scanf("%d",(n+i));

        if((*n>*(n+1))&&(*n>*(n+2)))
        printf("%d is greatest.",*n);
        if((*(n+1)>*(n+2))&&(*(n+1)>*n))
        printf("%d is greatest.",*(n+1));
        if((*(n+2)>*(n+1))&&(*(n+2)>*n))
        printf("%d is greatest.",*(n+2));

    return 0;
}
