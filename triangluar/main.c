#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    return(s);
}

int main()
{
    int n,i,s,flag=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum is:%d\n",s);
    for(i=1;i<n;i++)
    {
        if(n==sum(i))
        {
            printf("Triangular Number.");
            flag=1;
            exit(0);
        }
    }
    if(flag==0)
        printf("Not triangular number.");
    return 0;
}
