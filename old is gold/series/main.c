#include<stdio.h>
#include<math.h>
#include<conio.h>


void main()
{
    int i,j,n,sum=0,nth=0;

    printf("Enter the value of N:");
    scanf("%d",&n);

    puts("Terms are:");
    for(i=0;i<n;i++)
    {
            nth=(nth+(pow(10,i)));
            printf("\t%d",nth);
            sum=sum+nth;

    }
        printf("\nsum of series is:%d",sum);

}
