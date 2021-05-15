#include <stdio.h>
int main()
{
   float x,y,a,b,c,d,e,f,p,q,m,n;

    printf("\n\n\t\tWelcome to linear eqation solver!!!\n\n");
    printf("Enter the coefficient of 'x' ,'y' and constant of first eqation:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("Enter the coefficient of 'x' ,'y' and constant of second eqation:\n");
    scanf("%f%f%f",&d,&e,&f);
    printf("your eqations are:\n\t1. (%f)x+(%f)y+(%f)=0\n\t2. (%f)x+(%f)y+(%f)=0\t\n",a,b,c,d,e,f);
    p=((-(a*f))+(d*c));
    q=((-(d*b))+(a*e));
    y=(p/q);
    x=(((-c)-(b*y))/a);
    m=((-b)/a);
    n=((-e)/d);
    {
    if((b==(-d))&&(e==a)&&(c==f))
    printf("The lines are Perpendicular!!!\nThe value of 'x' and 'y' are %f and %f respectively.",x,y);
    else
    if(m==n)
    printf("The lines are Parallel!!!\nNo unique solution is possible.\a");
    else
    printf("The value of 'x' and 'y' are %f and %f respectively.",x,y);
    }






    getch();
    return 0;


}
