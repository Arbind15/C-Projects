#include <stdio.h>
#include <stdlib.h>
#define Size 5
/*#define row 3  //for parabola
#define col 4*/
#define row 2  //for custom fitting
#define col 3


/*float X[Size]={1,2,3,4,5,6,7}; //linear
float Y[Size]={0.5,2.5,2,4,3.5,6,5.5};*/

/*float X[Size]={-2,-1,0,1,2};   //parabola
float Y[Size]={40,50,62,58,60};*/

float X[Size]={1,2,3,4,5};   //custom
float Y[Size]={-1.5,0.99,3.88,7.66,9.96};

float A[row][col],Sol[row];

float CustomFitting1(){
    int i,j;
    float SX=0,SY=0,SXX=0,SXY=0,SXXY=0,SXXX=0;
    printf("\tX\tY\tXY\tX^2Y\tX^2\tX^3\n\n");
    for(i=0;i<Size;i++){

         SX=SX+X[i];
         SY=SY+Y[i];
         SXY=SXY+(X[i]*Y[i]);
         SXX=SXX+(X[i]*X[i]);
         SXXY=SXXY+(X[i]*X[i]*Y[i]);
         SXXX=SXXX+(X[i]*X[i]*X[i]);
         printf("\t%0.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",X[i],Y[i],(X[i]*Y[i]),(X[i]*X[i]*Y[i]),(X[i]*X[i]),(X[i]*X[i]*X[i]));
    }

    A[0][0]=SXX;
    A[0][1]=Size;
    A[0][2]=SXY;
    A[1][0]=SXXX;
    A[1][1]=SX;
    A[1][2]=SXXY;

    Solve();
    printf("\n");

    printf("\tSX= %0.2f\n\tSY= %0.2f\n\tSXY= %0.2f\n\tSXX= %0.2f\n\tSXXX= %0.2f\n\tSXXY= %0.2f\n",SX,SY,SXY,SXX,SXXX,SXXY);


    printf("\n\tThe given data is fitted in: ( Y = %0.2f X + (%0.2f/X) ) line.\n",Sol[0],Sol[1]);


    return 0;
}

float LinearFitting(){
    int i,j;
    float SX=0,SY=0,SXX=0,SXY=0,MX,MY,a1,a0;
    printf("\tX\tY\tXY\tX^2\n\n");
    for(i=0;i<Size;i++){

         SX=SX+X[i];
         SY=SY+Y[i];
         SXX=SXX+(X[i]*X[i]);
         SXY=SXY+(X[i]*Y[i]);
         printf("\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",X[i],Y[i],(X[i]*Y[i]),(X[i]*X[i]));
    }
    printf("\n");
    MX=SX/Size;
    MY=SY/Size;
    printf("\tSX= %0.2f\n\tSY= %0.2f\n\tSXY= %0.2f\n\tSXX= %0.2f\n\tMX= %0.2f\n\tMY= %0.2f\n",SX,SY,SXY,SXX,MX,MY);

    a1=((Size*SXY)-(SX*SY))/((Size*SXX)-(SX*SX));

    a0=(MY-(a1*MX));

    printf("\n\tThe given data is fitted in: (Y = %0.2f X + %0.2f) line.\n",a1,a0);


    return 0;
}

float ParabolicFitting(){
    int i,j;
    float SX=0,SY=0,SXX=0,SXY=0,SXXX=0,SXXXX=0,SXXY=0;
    printf("\tX\tY\tXY\tX^2\tX^3\tX^4\tX^2Y\n\n");
    for(i=0;i<Size;i++){

         SX=SX+X[i];
         SY=SY+Y[i];
         SXX=SXX+(X[i]*X[i]);
         SXY=SXY+(X[i]*Y[i]);
         SXXX=SXXX+(X[i]*X[i]*X[i]);
         SXXXX=SXXXX+(X[i]*X[i]*X[i]*X[i]);
         SXXY=SXXY+(X[i]*X[i]*Y[i]);

         printf("\t%0.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",X[i],Y[i],(X[i]*Y[i]),(X[i]*X[i]),(X[i]*X[i]*X[i]),(X[i]*X[i]*X[i]*X[i]),(X[i]*X[i]*Y[i]));
    }

    printf("\n\tSX= %0.2f\n\tSY= %0.2f\n\tSXY= %0.2f\n\tSXX= %0.2f\n\tSXXX= %0.2f\n\tSXXXX= %0.2f\n\tSXXY= %0.2f\n",SX,SY,SXY,SXX,SXXX,SXXXX,SXXY);

    A[0][0]=Size;
    A[0][1]=SX;
    A[0][2]=SXX;
    A[0][3]=SY;
    A[1][0]=SX;
    A[1][1]=SXX;
    A[1][2]=SXXX;
    A[1][3]=SXY;
    A[2][0]=SXX;
    A[2][1]=SXXX;
    A[2][2]=SXXXX;
    A[2][3]=SXXY;

    Solve();

    printf("\n");

    printf("\n\tThe given data is fitted in: ( Y = %0.2f X^2 + %0.2f X + %0.2f ) parabola.\n",Sol[0],Sol[1],Sol[2]);




}

void Solve(){

    int i,j,k,n=0,l,f=0;

    float temp,Factor,Sum,X[row];
    for(k=0;k<row;k++){
        for(f=(k+1);f<row;f++){
            Factor=(A[f][k]/A[k][k]);
            for(i=k;i<col;i++){
                temp=(A[f][i]-(A[k][i]*Factor));
                A[f][i]=temp;
            }
        }
    }
    X[row-1]=A[row-1][col-1]/A[row-1][col-2];
    //printf("T %f",X[row-1]);
    for(i=(row-2);i>=0;i--){
        Sum=0;
        for(j=(col-2);j>=(i+1);j--){
            Sum=Sum+(A[i][j]*X[j]);
        }
        //printf("ksd\n");
        X[i]=(A[i][col-1]-Sum)/A[i][i];
    }
    for(i=0;i<row;i++){
        Sol[i]=X[i];
    }
}


int main()
{

    //LinearFitting();
    //ParabolicFitting();
    CustomFitting1();
    return 0;
}
