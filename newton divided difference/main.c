#include <stdio.h>
#include <stdlib.h>
#define Size 5
/*
float X[Size]={5,7,11,13,17};
float Y[Size]={150,392,1452,2366,5202};
*/
/*float X[Size]={-4,-1,0,2,5};
float Y[Size]={1245,33,5,9,1335};*/
float X[Size]={1,3,4,6,7};
float Y[Size]={1,53,127,531,687};

float table[Size][Size];

void DividedDifference(int n){
    float diff;
    int i,j;
    if(n==0){
        for(i=0;i<(Size-(n+1));i++){
            diff=((Y[i+1]-Y[i])/(X[i+1]-X[i]));
            table[i][n]=diff;
        }
    }
    else{
        for(i=0;i<(Size-(n+1));i++){
            //printf("T= %f\n",table[n-1][i]);
            diff=((table[i+1][n-1]-table[i][n-1])/(X[i+n+1]-X[i]));
            table[i][n]=diff;
        }
    }



}

int main()
{
    int i,j;
    float x=5.5,Sum=1,Px=0,numtr,dnumtr;
    for(i=0;i<(Size-1);i++){
        DividedDifference(i);
    }
    printf("\n  Divided Difference table is:\n\n");
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(Size-(i+1));j++){
            printf("  %7.2f\t",table[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    Px=Y[0];
    //printf("%f",Px);
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(i+1);j++){
            Sum=Sum*(x-X[j]);
            //printf("l%f\t",X[j]);
        }
        //printf("%f",table[0][i]*Sum);
        //printf("\n");
        Px=Px+(Sum*table[0][i]);
        Sum=1;
    }

    printf("\n  F(%0.2f)= %0.2f\n",x,Px);
    return 0;
}
