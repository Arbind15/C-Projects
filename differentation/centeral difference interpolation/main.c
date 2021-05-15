#include <stdio.h>
#include <stdlib.h>
#define Size 7
/*
float X[Size]={5,7,11,13,17};
float Y[Size]={150,392,1452,2366,5202};
*/
/*float X[Size]={-4,-1,0,2,5};
float Y[Size]={1245,33,5,9,1335};*/

/*float X[Size]={10,11,12,13,14};   //stireling
float Y[Size]={0.23967,0.28060,0.31788,0.35209,0.38368};*/

/*float X[Size]={0,50,100,150,200,250};   //stireling
float Y[Size]={0,60,80,110,90,0};*/

float X[Size]={1.0,1.1,1.2,1.3,1.4,1.5,1.6};   //central
float Y[Size]={7.989,8.403,8.781,9.129,9.415,9.750,10.031};

/*float X[Size]={20,24,28,32};   //bessels
float Y[Size]={2854,3162,3544,3992};*/

/*float X[Size]={25,26,27,28,29,30};   //bessels
float Y[Size]={4,3.846,3.704,3.571,3.448,3.333};*/

float table[Size][Size];

float Factroial(int num){
    int i;
    float fact=1;
    for(i=1;i<=num;i++){
      fact=fact*i;
    }
  return fact;
}

void CentralDifference(int n){
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

void StrilingFormula(int X0, float p,float x){
    //printf("%f",X[X0]);
    int i,j,C_indx;
    int P_indx=0;
    float Px,Sum,Avg;
    Px=Y[X0];
    C_indx=X0;
    //printf("%f",Px);
    for(i=0;i<(Size-1);i++){
        Sum=1;
        if((i%2)==0){
            Avg=(table[C_indx-1][i]+table[C_indx][i])/2;
            for(j=0;j<=P_indx;j++){
              if(j==0){
                    Sum=Sum*p;
                    //printf("XX%d\n",P_indx);
                }
                else{
                    Sum=Sum*((p*p)-(j*j));
                    //printf("X1X%d\n",P_indx);
                }
            }
            Sum=Sum/Factroial(i+1);
            Px=Px+(Sum*Avg);
            //printf("\n -1= %f\t -1+1= %f",table[C_indx-1][i],table[C_indx][i]);
        }
        else{
            C_indx--;
            P_indx++;

            Avg=(table[C_indx][i]);
            for(j=0;j<=P_indx;j++){
              if(j==0){
                    Sum=Sum*(p*p);
                    //printf("XX%d\n",P_indx);
                }
                else{
                    Sum=Sum*((p*p)-(j*j));
                    //printf("X1X%d\n",P_indx);
                }
            }
            //printf("X1X%f\n",Avg);
            Sum=Sum/Factroial(i+1);
            Px=Px+(Sum*Avg);

            //printf("\nDD%f",table[X0-1][0]);
        }
        Sum=1;
        Avg=1;
        //printf("\n");
    }

    printf("\n\tBy Stirling's Formula:\n\t\tF(%0.2f) = %0.3f\n",x,Px);
}

void BesselFormula(int X0, float p,float x){

   int i,j,C_indx;
    int P_indx=0;
    float Px,Sum,Avg;
    Px=Y[X0];
    C_indx=X0;
    //printf("%f",Px);
    for(i=0;i<(Size-1);i++){
        Sum=1;
        if((i%2)==0){
            Avg=(table[C_indx][i]);
            for(j=0;j<=P_indx;j++){
              if(j==0){
                    Sum=Sum*p;
                    //printf("XX%d\n",P_indx);
                }
                else{
                    Sum=Sum*((p)-(j));
                    if(i>=2){
                        Sum=Sum*(p-0.5);
                    }
                    //printf("X1X%d\n",P_indx);
                }
            }
            Sum=Sum/Factroial(i+1);
            Px=Px+(Sum*Avg);
            //printf("\n -1= %f\t -1+1= %f",table[C_indx-1][i],table[C_indx][i]);
        }
        else{
            C_indx--;
            P_indx++;

            Avg=(table[C_indx-1][i]+table[C_indx][i])/2;

            for(j=0;j<=P_indx;j++){
              if(j==0){
                    Sum=Sum*(p);
                    //printf("XX%d\n",P_indx);
                }
                else{
                    Sum=Sum*((p)-(j));
                    if(i>=2){
                        Sum=Sum*(p+1);
                    }
                    //printf("X1X%d\n",P_indx);
                }
            }
            //printf("X1X%f\n",Avg);
            Sum=Sum/Factroial(i+1);
            Px=Px+(Sum*Avg);

            //printf("\nDD%f",table[X0-1][0]);
        }
        Sum=1;
        Avg=1;
        //printf("\n");
    }

    printf("\n\tBy Bessel's Formula:\n\t\tF(%0.2f) = %0.3f\n",x,Px);
}

int main()
{
    int i,j,X0;
    float x=1.1,Sum=1,Px=0,h,u,temp;


    //finding nearer value index
    X0=0;
    temp=X[X0];
    for(i=0;i<Size;i++){
        for(j=1;j<Size;j++){
            if(fabs(X[j]-x)<=fabs(temp-x)){
                X0=j;
                temp=X[j];
            }
        }
    }
    h=X[1]-X[0];
    u=((x-X[X0])/h);
    Px=Y[X0];
    printf("\n  X0= %0.2f\n",X[X0]);
    printf("  h = %0.2f\n",h);
    printf("  p = %0.2f\n",u);

    for(i=0;i<(Size-1);i++){
        CentralDifference(i);
    }

    printf("\n  Central Difference table is:\n\n");
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(Size-(i+1));j++){
            printf("  %f\t",table[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    //StrilingFormula(X0,u,x);

    BesselFormula(X0,u,x);






    /*for(i=0;i<(Size-1);i++){
        for(j=0;j<(i+1);j++){
            Sum=Sum*(u+j);
        }
        //printf("l%f\n",table[Size-(i+2)][i]);
        Px=Px+((Sum*table[Size-(i+2)][i])/Factroial(i+1));
        Sum=1;
    }

    printf("\n  F(%f)= %f\n",x,Px);*/
    return 0;
}
