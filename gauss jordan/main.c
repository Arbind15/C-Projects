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

    for(k=(row-2);k>=0;k--){
        for(f=(k);f>=0;f--){
            //printf("%f\t",A[k][f]);
            //printf("(%f/%f)\t",A[f][k+1],A[k+1][k+1]);
            Factor=(A[f][k+1]/A[k+1][k+1]);
            for(i=f;i<col;i++){
                //printf("%f\t",A[f][i]);
                //printf("xx%f\t",A[k+1][i]);
                temp=(A[f][i]-(A[k+1][i]*Factor));
                A[f][i]=temp;
            }
            //printf("\n");
        }
    }

    printf("Equations after elimination:\n\n");
    display(A);
    printf("\n");
    printf("\nSolution is:\n\n");
    for(i=0;i<row;i++){
        printf("%0.2f\t",(A[i][col-1]/A[i][i]));
    }
    printf("\n");
    return(0);
}
