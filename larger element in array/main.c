#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,lrg,j,temp;

    printf("Enter the element of array:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    //finding larger number

    lrg=a[0];
    for(i=1;i<5;i++)
    {
        if(lrg<a[i])
        lrg=a[i];
    }
    printf("The largest is:%d\n Press any key to arrange in assending order.",lrg);

    getch();

    //arranging in assending order

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {temp=a[j];
            a[j]=a[i];
            a[i]=temp;}


        }
    }
    printf("The assending order is:\n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return 0;
}
