#include <stdio.h>
#include <stdlib.h>
#define Size 5
/*
float X[Size]={5,7,11,13,17};
float Y[Size]={150,392,1452,2366,5202};
*/
/*float X[Size]={-4,-1,0,2,5};
float Y[Size]={1245,33,5,9,1335};*/
/*float X[Size]={0,0.001,0.002,0.003,0.004,0.005};
float Y[Size]={1.121,1.123,1.1255,1.127,1.128,1.1285};*/

/*float X[Size]={1,1.1,1.2,1.3,1.4,1.5,1.6};
float Y[Size]={7.989,8.403,8.781,9.129,9.451,9.750,10.031};*/
/*float X[Size]={0.4,0.5,0.6,0.7,0.8};
float Y[Size]={1.5836,1.7974,2.0442,2.2375,2.6511};*/

/*float X[Size]={0,1,2,3,4,5,6};
float Y[Size]={6.9897,7.4036,7.7815,8.1291,8.4510,8.7506,9.0309};*/

/*float X[Size]={1,1.5,2,2.5,3};
float Y[Size]={27,106.75,324,783.75,1621};*/

float X[Size]={2020,2030,2040,2050,2060};
float Y[Size]={19.96,39.65,58.81,77.21,94.61};


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

void FirstOrder(float x){
    float Px=0,h,u;
    int i,j;
    h=X[1]-X[0];
    u=((x-X[0])/h);
    //printf("l%f",Px);
    for(i=0;i<(Size-1);i++){
        if(i%2==0){
            Px=Px+((table[0][i])/(i+1));
        }
        else{
            Px=Px-((table[0][i])/(i+1));
        }
    }
    Px=Px/h;
    printf("\n  F'(%f)= %f\n",x,Px);
}

void SecondOrder(float x){
    float Px=0,h,u;
    int i,j;
    h=X[1]-X[0];
    u=((x-X[0])/h);
    //printf("l%f",Px);
    for(i=0;i<(Size-1);i++){
        if(i%2==0){
            Px=Px+((table[0][i+1])/(i+1));
        }
        else{
            Px=Px-((table[0][i+1])/(i+1));
        }
    }
    Px=Px/(h*h);
    printf("\n  F''(%f)= %f\n",x,Px);
}

int main()
{
    int i,j;
    float x=1981,Sum=1,Px=0,h,u;
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

    FirstOrder(x);
    SecondOrder(x);

    return 0;
}
