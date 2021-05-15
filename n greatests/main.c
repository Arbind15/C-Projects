#include<stdio.h>

int x,y;
int great(int x,int y)
{

    if(x>y)
    return(x);
}


void main()
{
    int a[4],i,j,c;

    printf("Enter number to be compared:");
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++)
    {
            for(i=0;i<=3;i++)
            {
                c=great(a[i],a[i]);
            }
    }
    printf("%d is greatest number.",c);
}
