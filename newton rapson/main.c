#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x) ((3*x)-cos(x)-1)

float FirstDerivative(float);

int main()
{
    float x=100,precission=0.0001;
    int n=0;

    while(1){

        printf("%d, Current x= %f\n",n++,x);

        x=(x-(F(x)/FirstDerivative(x)));

        if(F(x)<=precission&&F(x)>=(-precission)){
            printf("\nRoot is x= %f",x);
            printf("\n\tF(%f) = %f",x,F(x));
            break;
        }
    }
    return 0;
}


float FirstDerivative(float x)
{
    float derv_precision=0.0001;
    float y;
    float x1=x-derv_precision;
    float x2=x+derv_precision;
    y=((F(x2)-F(x1))/(x2-x1));
    return y;
}
