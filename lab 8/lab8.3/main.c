#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int *ptr,sum=0,n,i;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",(ptr+i));
    sum+=*(ptr+i);
    }
    printf("The sum of all element is:%d",sum);
    return 0;
}
