#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10];
    int i;

    printf("Enter the element(float) of array:\n");

    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("The array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%.2f ",a[i]);
    }
    return 0;
}
