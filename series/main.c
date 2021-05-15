#include<stdio.h>
#include<math.h>
#include<conio.h>


void main()
{
    int i,j,n;
    unsigned long int nth=0, sum=0;

    printf("Enter the value of N:");
    scanf("%d",&n);

    puts("Terms are:");
    for(i=0;i<n;i++)
    {
            nth=(nth+(pow(10,i)));
            printf("\t%lu",nth);
            sum=sum+nth;

    }
        printf("\nsum of series is:%d",sum);

}
