#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x) (cos(x)-(3*x)+1)
#define Phi(x) ((cos(x)+1)/3)  //original function: F(x)=cosx-3x+1



int main()
{
    float x=0,precission=0.000001;
    int n=0;

    while(1){

        printf("%d, Current x= %f\n",n++,x);
        x=Phi(x);
        if(F(x)<=precission&&F(x)>=(-precission)){
            printf("\nRoot is x= %f",x);
            printf("\n\ty= %f",F(x));
            break;
        }
    }
    return 0;
}
