#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;

    printf("Enter three number to be compared:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if((n1%2)==0)
        printf("The greatest number %d is even.\n",n1);
        else
        printf("The greatest number %d is odd.\n",n1);
        exit(0);
    }
    if(n2>n3)
    {
        if((n2%2)==0)
        printf("The greatest number %d is even.\n",n2);
        else
        printf("The greatest number %d is odd.\n",n2);
        exit(1);
    }

    {
        if((n3%2)==0)
        printf("The greatest number %d is even.\n",n3);
        else
        printf("The greatest number %d is odd.\n",n3);
    }


    return 0;
}
