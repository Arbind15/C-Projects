#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg,sum=0;
    int j,i,a[8];

    printf("Enter the element(integer) of array:\n");

    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The array is:\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<8;i++)
   {
       sum=sum+a[i];
   }
    avg=(float)(sum/8);

    printf("\nThe sum of element is %.1f and average is: %.2f",sum,avg);
    return 0;
}
