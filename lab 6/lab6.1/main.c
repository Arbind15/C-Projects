#include <stdio.h>
#include <stdlib.h>

int add(int n1, int n2)
{
    return(n1+n2);
}

int sub(int n1,int n2)
{
    return(n1-n2);
}

float div1(int n1, int n2)
{
    return((float)n1/n2);
}

int mult(int n1, int n2)
{
    return(n1*n2);
}

int main()
{
    int n1,n2;

    printf("Enter two numbers:\n");
    scanf("%d\t%d",&n1,&n2);

    printf("Sum is:%d\n",add(n1,n2));

    printf("Difference is:%d\n",sub(n1,n2));

    printf("Product is:%d\n",mult(n1,n2));

    printf("Quotient is:%.2f\n",div1(n1,n2));

    getch();
    return 0;
}
