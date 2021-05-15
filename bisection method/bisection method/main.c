#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n=0;
    float x,y;
    float lr,ur,cr,precission;
    precission=0.001;
    lr=3;
    ur=10;
    //y=(pow(x,3)-(4*x)-9);

    //printf("%f",y);

    while(1){

        cr=(ur+lr)/2;
        x=cr;
        y=(pow(x,2)-(4*x)-5);

        printf("\nIteration: %d, \nCurrent root %f",n,cr);

        if(y<precission&&y>-precission){
            printf("\n\nRoot is x = %f",cr);
            printf("\n\n\tF(%f) = %f\n",cr,y);
            break;
        }
        if(y>0){
            ur=cr;
        }
        if(y<0){
            lr=cr;
        }

        n++;

    }

    return 0;
}
