#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define F(x) (pow(x,3)-(2*x)-5)

int main()
{
    int n=0;
    float x,y;
    float lr,ur,cr,precission;
    precission=0.00001;
    lr=1;
    ur=5;

    //printf("%f",F(3));

    while(1){

        cr=(lr-((ur-lr)/(F(ur)-F(lr)))*F(lr));

        printf("%d, Current root %f\n",n,cr);

        y=F(cr);

        if(y<precission&&y>-precission){
            printf("\n\nRoot is x= %f",cr);
            printf("\n\n\ty= %f\n",y);
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
