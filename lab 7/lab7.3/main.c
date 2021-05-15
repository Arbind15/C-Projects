#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10],larg,smal,temp;
    int j,i;

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

    for(i=0;i<10-1;i++)
   {
       for(j=i+1;j<10;j++)
    {
           if(a[i]>a[j])
           {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
           }
           }
   }


    printf("\nThe smallest and largest element of given array are %.2f and %.2f",a[0],a[9]);
    return 0;
}
