#include<stdio.h>
int main()

{

    int n,i,a,d,x,y,k,c;

    printf("\t\tWelcome to A.P generator!!!\n\n");
    printf("Enter first term of A.P:\t");
    scanf("%d",&a);
    printf("Enter common difference of A.P:\t");
    scanf("%d",&d);
    printf("Enter number of term(s):\t");
    scanf("%d",&n);
    printf("Choose how to view series i.e Press '1' for horizontal view and '2' for vertical view:\t");
    scanf("%d",&c);
    printf("Required series is:\n");
    if(c==1)
    {
    for(i=1;i<=n;i++)
    {x=i-1;
    y=x*d;
    k=a+y;
    printf("%d\t",k);
    }
    }
    else
    {
    for(i=1;i<=n;i++)
    {x=i-1;
    y=x*d;
    k=a+y;
    printf("%d\n",k);
    }
    }
    getch();
    return 0;



}
