#include <stdio.h>
#include <stdlib.h>

int count(int x)
{
    int y=0;
    while(x!=0)
    {x=x/10;
    y++;}
    return(y);

}

int pow(int x,int y)
{
    int p=1,i;

    for(i=1;i<=y;i++)
    {
        p=p*x;

    }
    return(p);
}



int main()
{

    int n,i,j,k,s=0,d,m=0;

    printf("Enter number:");
    scanf("%d",&n);

    i=count(n);
    printf("The number of digit is:%d\n",i);
  int q[s];
    while(n>0)
    {

        d=(n%10);
        n=n/10;
        k=pow(d,i);
        m=m+(k);
        q[s]=d;
        s++;

    }
    printf("The digits are:");
    for(s=(i-1);s>=0;s--)
    printf("%d\t",q[s]);
    printf("\nThe Armstrong value is:%d",m);



}
