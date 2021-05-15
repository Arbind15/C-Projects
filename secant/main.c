#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x) (cos(x)-(x*exp(x)))

int main()
{
    float xnm1=0,xn=10,xnp1,precission=0.0001;
    int n=0;

    while(1){

        xnp1=(xn-(((xn-xnm1)/(F(xn)-F(xnm1)))*F(xn)));

        if(F(xnp1)<=precission&&F(xnp1)>=(-precission)){
            printf("\nRoot is x= %f",xnp1);
            printf("\n\tF(%f)= %f",xnp1,F(xnp1));
            break;
        }

        printf("%d, Current x= %f\n",n++,xnp1);
        xnm1=xn;
        xn=xnp1;

    }
    return 0;
}
