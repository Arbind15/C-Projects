#include <stdio.h>
#include <stdlib.h>

int sum1(int *a)
{
    int i,su1;

    for(i=0;i<10;i++)
    {
        if(*(a+i)>0)
        su1=su1+*(a+i);

    }
    return(su1);
}

int dif(int *a)
{
    int i;
    int dif=0;

    for(i=0;i<10;i++)
    {
        if(*(a+i)<0)
        dif=dif-*(a+i);

    }
    return(dif);
}

void sorarr(int *a)
{
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<10;i++)
        printf("%d  ",*(a+i));
}

int main()
{
    int a[10],i,j;

    printf("Enter the element(integer) of the array:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("The sum of positive element is:%d\n",sum1(a));
    printf("The sum of negative element is:-%d\n",dif(a));
    sorarr(a);


    return 0;
}
