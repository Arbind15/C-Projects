#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 int fact(int n)
    {
        if(n==0||n==1)
            return 1;
        else
            return(n*fact(n-1));
    }
int main()
{
    int n,i,sign;
    float x,sum;

    printf("Enter x in rad.:\n");
    scanf("%f",&x);
    x=((x*3.14)/180);


    for(i=1;i<=4;i++)
    {
        n=(2*i-1);
        sign=-pow((-1),i);
        sum=(float)(sum+((sign*((pow(x,n))/fact(n)))));

    }
printf("%.2f\t%.2f\n",sum,sin(x));

    return 0;
}
