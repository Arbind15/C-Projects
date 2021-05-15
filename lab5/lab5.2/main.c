#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,j,sum=0;

    printf("Enter the range of number:\n");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)           //Assigning smaller to i & greater to j
        {i=n2;
        j=n1;}
    else
    {
        i=n1;
        j=n2;
    }
    printf("The sum of even number between %d and %d is:",i,j);
    for(i;i<=j;i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
