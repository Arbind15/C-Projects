#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,rem,ans=0,count=0,temp;

    printf("Enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        ans=(ans+(rem*pow(10,(count-1))));
        n=n/10;
        count--;
    }
    printf("The reverse order is:%d",ans);
    return 0;
}
