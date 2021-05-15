#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 3


int main()
{
    int i,j,k,(*m1)[n],(*m2)[m],a[m][n],b[n][m],sum=0;
    m1=a;
    m2=b;

    printf("Enter first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(m1+i)+j));
        }
    }
    printf("Enter second matrix:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",(*(m2+i)+j));
        }
    }
    printf("The product matrix is:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                sum+=*(*(m1+i)+k)**(*(m2+k)+j);

                printf("%d\t",sum);
                sum=0;
        }
        printf("\n");
    }

    return 0;
}
