#include<stdio.h>

int main()
{

    int sum=0,i,n;
    float avg;

    //reading arry
    printf("Enter number of numbers whose average is to be calculated:\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=(sum+a[i]);
    }
    printf("You have entered:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    avg=(sum/n);
    printf("\nAverage is:%f",avg);

}
getch();
