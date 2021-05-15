#include<stdio.h>
#include <stdlib.h>
#define row 3
#define col 1

void display(float A[row][row]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            printf("%0.2f\t",A[i][j]);
        }
        printf("\n");
    }
}

void displaycol(float A[row][col]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\t\t\t%0.2f",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,k,n=0,l,f=0;
    float A[row][row]={
        {2,-1,0},
        {-1,2,-1},
        {0,-1,2}
    };
    float X[row][col]={
        {1},
        {0},
        {0}
    };
    float Factor,Sum,largest,temp[row][col];
    printf("Original Equations:\n\n");
    display(A);
    printf("\n\n");
    printf("Initial guess:\n");
    displaycol(X);
    for(n=0;n<10;n++){
        printf("\n");
        printf("Iteration: %d\n",n+1);

        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                Sum=0;
                for(k=0;k<row;k++){
                    Sum=Sum+(A[i][k]*X[k][j]);
                }
                //printf("d%f",Sum);
                temp[i][j]=Sum;
            }
        }
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                X[i][j]=temp[i][j];
            }
        }

        largest=fabs(X[0][0]);
        for (i = 1; i < row; i++) {
            if (fabs(X[i][0]) > largest){
                largest = fabs(X[i][0]);
            }
        }
        for(i=0;i<row;i++){
            X[i][0]=(X[i][0]/largest);
        }

        printf("\tEigen value: %0.2f\n",largest);
        printf("\tEigen vector:\n");
        displaycol(X);
    }

    return(0);
}
