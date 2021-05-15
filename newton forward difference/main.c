#include <stdio.h>
#include <stdlib.h>
#define Size 6
/*
float X[Size]={5,7,11,13,17};
float Y[Size]={150,392,1452,2366,5202};
*/
/*float X[Size]={-4,-1,0,2,5};
float Y[Size]={1245,33,5,9,1335};*/
/*float X[Size]={0,0.001,0.002,0.003,0.004,0.005};
float Y[Size]={1.121,1.123,1.1255,1.127,1.128,1.1285};*/

/*float X[Size]={0,0.2,0.4,0.6,0.8,1.0};
float Y[Size]={1,0.808,0.664,0.616,0.712,1};*/
float X[Size]={0,0.04,0.08,0.12,0.16,0.20};
float Y[Size]={0,3,26,90,214,419};



float table[Size][Size];

float Factroial(int num){
    int i;
    float fact=1;
    for(i=1;i<=num;i++){
      fact=fact*i;
    }
  return fact;
}

void DividedDifference(int n){
    float diff;
    int i,j;
    if(n==0){
        for(i=0;i<(Size-(n+1));i++){
            diff=(Y[i+1]-Y[i]);
            table[i][n]=diff;
        }
    }
    else{
        for(i=0;i<(Size-(n+1));i++){
            //printf("T= %f\n",table[n-1][i]);
            diff=(table[i+1][n-1]-table[i][n-1]);
            table[i][n]=diff;
        }
    }



}

int main()
{
    int i,j;
    float x=0.00070,Sum=1,Px=0,h,u;
    for(i=0;i<(Size-1);i++){
        DividedDifference(i);
    }
    h=X[1]-X[0];
    u=((x-X[0])/h);
    printf("\n\tp= %0.2f\n\th= %0.2f\n",u,h);
    printf("\n  Forward Difference table is:\n\n");
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(Size-(i+1));j++){
            printf("  %8f\t",table[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    Px=Y[0];
    //printf("l%f",Px);
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(i+1);j++){
            Sum=Sum*(u-j);
        }
        Px=Px+((Sum*table[0][i])/Factroial(i+1));
        Sum=1;
    }

    printf("\n  F(%f)= %f\n",x,Px);
    return 0;
}
