#include<stdio.h>
#define row 4
#define col 5

void display(float A[row][col]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%0.2f\t",A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,k,n=0,l,f=0;
    float A[row][col]={
        {10,-7,3,5,6},
        {-6,8,-1,-4,5},
        {3,1,4,11,2},
        {5,-9,-2,4,7}
    };
    /*float A[row][col]={
        {1,4,-1,-5},
        {1,1,-6,-12},
        {3,-1,-1,4},
    };*/
    float temp,Factor,Sum,X[row];
    printf("Original Equations:\n\n");
    display(A);
    printf("\n\n");
    for(k=0;k<row;k++){
        for(f=(k+1);f<row;f++){
            //printf("\n(%f/%f)\n",A[f][k],A[k][k]);
            Factor=(A[f][k]/A[k][k]);
            for(i=k;i<col;i++){
                temp=(A[f][i]-(A[k][i]*Factor));
                A[f][i]=temp;
            }
            //printf("\n");
            //printf("\n%f\n",A[k][k]);
        }
    }
    printf("Equations after elimination:\n\n");
    display(A);
    printf("\n");
    X[row-1]=A[row-1][col-1]/A[row-1][col-2];
    //printf("T %f",X[row-1]);
    for(i=(row-2);i>=0;i--){
        Sum=0;
        for(j=(col-2);j>=(i+1);j--){
            //printf("X%f\t",X[i+1]);
            //printf("y%f\t%f",X[j],A[i][j]);
            Sum=Sum+(A[i][j]*X[j]);
        }
        //printf("ksd\n");
        X[i]=(A[i][col-1]-Sum)/A[i][i];
        //printf("l%f",Sum);
        //printf("\n");
    }
    printf("\nSolution is:\n\n");
    for(i=0;i<row;i++){
        printf("%0.2f\t",X[i]);
    }
    printf("\n");
    return(0);
}
