#include <stdio.h>
#include <stdlib.h>
#define F(x,y) (x+y)
#define n 10  //number of iteration

int main()
{
    float X[n+1],Y[n+1],x0,y0,x,y,h;

    int i,j;

    x0=0;
    y0=1;
    X[0]=x0;
    Y[0]=y0;

    x=1;

    h=(x-x0)/n;


    printf("\tx\t\ty\t\tF(x,y)\t\tNew y\n");
    for(i=0;i<n;i++){
        X[i+1]=x0+((i+1)*h);
        Y[i+1]=Y[i]+(h*F(X[i],Y[i]));
        printf("\t%f\t%f\t%f\t%f\n",X[i],Y[i],F(X[i],Y[i]),Y[i+1]);
    }

    printf("\n\tF(%f)= %f",x,Y[n]);





    return 0;
}
