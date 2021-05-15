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
    float A[row][row]={
        {10,-7,3,5},
        {-6,8,-1,-4},
        {3,1,4,11},
        {5,-9,-2,4}
    };
    float B[row][1]={
        {6},
        {5},
        {2},
        {7}
    };
    float X[row],L[row][row],U[row][row],M[row][row],V[row];
    /*float A[row][col]={
        {1,4,-1,-5},
        {1,1,-6,-12},
        {3,-1,-1,4},
    };*/
    float temp,Factor,Sum;
    printf("Original Equations:\n\n");
    display(A);
    printf("\n\n");

    for(j=0; j<row; j++)
    {
        for(i=0; i<row; i++)
        {
            if(i<=j)
            {
                U[i][j]=A[i][j];
                for(k=0; k<i-1; k++)
                    U[i][j]-=L[i][k]*U[k][j];
                if(i==j)
                    L[i][j]=1;
                else
                    L[i][j]=0;
            }
            else
            {
                L[i][j]=A[i][j];
                for(k=0; k<=j-1; k++)
                    L[i][j]-=L[i][k]*U[k][j];
                L[i][j]/=U[j][j];
                U[i][j]=0;
            }
        }
    }
    printf("L:\n");
    display(L);
    printf("\nU:\n");
    display(U);
    printf("\n");

    V[0]=B[0][0]/L[0][0];
    //printf("T %f\n",V[0]);
    for(i=1;i<row;i++){
        Sum=0;
        for(j=0;j<i;j++){
            //printf("X%f\t",X[i+1]);
            //printf("y%f\t%f",X[j],A[i][j]);
            Sum=Sum+(L[i][j]*V[j]);
        }
        //printf("ksd\n");
        V[i]=(B[i][0]-Sum)/L[i][i];
        //printf("T %f\n",V[i]);
        //printf("l%f",Sum);
        //printf("\n");
    }

    X[row-1]=V[row-1]/U[row-1][row-1];
    //printf("T %f\n",X[row-1]);
    for(i=(row-2);i>=0;i--){
        Sum=0;
        for(j=(row-1);j>=(i+1);j--){
            //printf("X%f\t",X[i+1]);
            //printf("y%f\t%f",X[j],A[i][j]);
            Sum=Sum+(U[i][j]*X[j]);
            //printf("LT %f  %f\n",X[j],U[i][j]);
        }
        //printf("ksd\n");
        X[i]=(V[i]-Sum)/U[i][i];
        //printf("T %f\n",Sum);
        //printf("l%f",Sum);
        //printf("\n");
    }

    printf("\nSolution is:\n\n");
    for(i=0;i<row;i++){
        printf("\t%0.2f\t",X[i]);
    }
    printf("\n");





    /*for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            if(i==j){
                L[i][j]=1;
            }
            else if(i<j){
                L[i][j]=0;
            }
            else if(i>j){
                U[i][j]=0;
                L[i][j]=-1;
            }
            else{
                L[i][j]=-1;
                U[i][j]=-1;
            }

        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            Sum=0;
            for(k=0;k<row;k++){
                Sum=Sum+(L[i][k]*U[k][j]);
            }
            M[i][j]=Sum;
        }
    }
    display(U);
    for(i=1;i<row;i++){
        for(j=0;j<row;j++){
            Sum=0;
            for(k=0;k<row;k++){
                Sum=Sum+(L[i][k]*U[k][j]);
            }
            printf("d%f",Sum);
            /*if(i==j){
                L[i][j]=1;
            }
            else if(i<j){
                L[i][j]=0;

                U[i][j]=((A[i][j]-Sum));
            }
            else if(i>j){
                U[i][j]=0;
                L[i][j]=-1;
            }
            else{
                L[i][j]=-1;
                U[i][j]=-1;
            }
        }
    }
    //display(U);
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
    printf("\n");*/
    return(0);
}
