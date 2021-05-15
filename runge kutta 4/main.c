#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x,y) (x+y)
#define n 1  //number of iteration

int main()
{
    float X[n+1],Y[n+1],x0,y0,x,y,h,K[4];

    int i,j;

    x0=0;
    y0=1;
    X[0]=x0;
    Y[0]=y0;

    x=0.2;

    h=(x-x0)/n;

    K[1]=h*(F(X[0],Y[0]));
    K[2]=h*(F((X[0]+(h/2)),(Y[0]+(K[1]/2))));
    K[3]=h*(F((X[0]+(h/2)),(Y[0]+(K[2]/2))));
    K[4]=h*(F((X[0]+h),(Y[0]+K[3])));

    printf("K1= %f\n",K[1]);
    printf("K2= %f\n",K[2]);
    printf("K3= %f\n",K[3]);
    printf("K4= %f\n",K[4]);


    printf("\n\tF(%f)= %f",x,(((K[1]+(2*K[2])+(2*K[3])+K[4])/6))+y0);





    return 0;
}
