#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,j;

    printf("Enter ASCII range of character:\n");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
       {
        i=n2;
        j=n1;
       }
    else
        {
        i=n1;
        j=n2;
        }

        printf("ASCII value\t\tCharacter\n");
    for(i;i<=j;i++)
    {
        printf("%d\t\t\t%c\t\t",i,i);
        if(i%3==0)
            printf("\n");
    }
    return 0;
}
