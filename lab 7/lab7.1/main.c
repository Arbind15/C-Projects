#include <stdio.h>
#include <stdlib.h>
void read(int a[])
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

void sortarray(int a[])
{
    int i,j,temp;
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
    printf("%d ",a[i]);
   }

}

int main()
{
    int a[10],i,j,sum1=0,sum2=0;

    printf("Enter the element(integer) of array:\n");
    read(a);
    printf("The array is:\n");
    display(a);

    for(i=0;i<10;i++)
    {
        if(a[i]<0)
            sum1=sum1-a[i];
        else
            sum2=sum2+a[i];
    }

    printf("\nThe sum of positive and negative element of given array are %d and -%d respectively.\n",sum2,sum1);
    printf("The sorted array is:");
    sortarray(a);

    return 0;
}
