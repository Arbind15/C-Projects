#include <stdio.h>
#include <math.h>

int main()
{

    float x1,x2,r2,i2,i1,r1,a,b,c,d;

    printf("Enter the coefficient of x*x, x and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d==0)
    {
        printf("Root is:%f",(-b)/(2*a));
    }
    else
    if(d>0)
    {
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
    printf("Roots are:\t%fand\t%f",x1,x2);

    }
    else
    {
       d=(-d);
        r1=(float)((-b)/(2*a));
        i1=(float)((sqrt(d)/(2*a)));    //type casting
        r2=(-b)/(2*a);
        i2=(sqrt(d)/(2*a));
        printf("Roots are :\t%f+%fi\tand\t%f-%fi",r1,i1,r2,i2);
    }

}
