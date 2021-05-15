#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int n1,n2,ans,i,j;

    printf("Enter range of number:");
    scanf("%d\t%d",&n1,&n2);
    printf("P->");

    for(i=(n1+1);i<=(n2-1);i++)
    {

        for(j=2;j<i;j++)    //since 1 can divide all
        {
            ans=(i%j);
            if((ans==0))
                break;

        }
        if(i==j)            //if inner for loop completes, it means all number is not divisible
        printf("\t%d",i);
    }
}
