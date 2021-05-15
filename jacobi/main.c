#include<stdio.h>
#define row 4
#define col 5

void display(float A[row][row]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            printf("%0.2f\t",A[i][j]);
        }
        printf("\n");
    }
}

void displaycol(float A[row][1]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<1;j++){
            printf("%0.2f\t",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,k,n=0,l,f=0;
    /*float A[row][col]={
        {20,1,-2,17},
        {3,20,-1,-18},
        {2,-3,20,25}
    };*/
    float A[row][col]={
        {10,-2,-1,-4,3},
        {-2,10,-1,-1,15},
        {-1,-1,10,-2,27},
        {-1,-1,-2,10,-9}
    };
    float temp,Factor,Sum,InitialGuess[row]={0,0,0},NewValue[row];
    printf("Original Equations:\n\n");
    display(A);
    printf("\n\n");

    for(n=0;n<10;n++){
        for(i=0;i<row;i++){
            Sum=A[i][col-1];
            //printf("X%0.2f\n",Sum);
            for(j=0;j<(row);j++){
                if(i!=j){
                    Sum=(Sum-(InitialGuess[j]*A[i][j]));
                }
            }
            NewValue[i]=(Sum/A[i][i]);
            //printf("X%0.2f",A[i][i]);
        }
        for(i=0;i<row;i++){
            InitialGuess[i]=NewValue[i];
        }
    }
    printf("Solution are:\n\n");
    for(i=0;i<row;i++){
        printf("%f\t",NewValue[i]);
    }
    printf("\n");

    return(0);
}
