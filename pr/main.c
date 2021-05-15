#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,flag=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if((n%i)==0)
        {
            flag=1;
            break;
        }
    }
    if((flag==0))
    printf("Yes, prime number.");
    else
    printf("No, not prime number.");

    return 0;
}
