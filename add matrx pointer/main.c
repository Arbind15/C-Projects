#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,(*m1)[2],(*m2)[2],a[2][2],b[2][2];
    m1=a;
    m2=b;
    printf("Enter first 2*2 matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf(" %d",*(m1+i)+j);
        }
    }
   printf("Enter second 2*2 matrix:\n");
for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf(" %d",*(m2+i)+j);
        }
    }
    printf("The sum matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",*(*(m1+i)+j)+*(*(m2+i)+j));
        }
        printf("\n");
    }

    return 0;
}
