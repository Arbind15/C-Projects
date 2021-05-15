#include <stdio.h>
#include <stdlib.h>
int g_num(int n1,int n2)
{
    int num[n2-n1],s=0,i,j;

    for(i=n1;i<n2;i++)
    {
        num[s]=i;
        s++;
        return(num[s]);
    }

}


int main()
{

    int n1,n2,i,j;

    scanf("%d\t%d",&n1,&n2);


    for(i=0;i<n2;i++)
    {
        g_num(n1,n2);
        printf("%d",num[i]);
    }

}

