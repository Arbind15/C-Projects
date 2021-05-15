#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x,y) log10(x+y)
#define n 7  //number of iteration

int main()
{
    float X[n+1],Y[n+1],x0,y0,x,y,h;

    int i,j;

    x0=0;
    y0=2;
    X[0]=x0;
    Y[0]=y0;

    x=1.4;

    h=(x-x0)/n;


    printf("x\t\ty\t\tF(x,y)\t\tNew y\t\tFirst modified y\t\tSecond modified y\n");
    for(i=0;i<n;i++){
        X[i+1]=x0+((i+1)*h);
        Y[i+1]=Y[i]+(h*F(X[i],Y[i]));
        printf("%f\t%f\t%f\t%f\t",X[i],Y[i],F(X[i],Y[i]),Y[i+1]);
        Y[i+1]=Y[i]+((h/2)*(F(X[i],Y[i])+F(X[i+1],Y[i+1])));
        printf("%f\t\t\t",Y[i+1]);
        Y[i+1]=Y[i]+((h/2)*(F(X[i],Y[i])+F(X[i+1],Y[i+1])));
        printf("%f\n",Y[i+1]);
    }

    printf("\n\tF(%f)= %f",x,Y[n]);





    return 0;
}
