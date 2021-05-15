#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define Size 7

float X[Size]={0,0.1,0.2,0.3,0.4,0.5,0.6};   //central
float Y[Size]={30.13,31.62,32.87,33.64,33.95,33.81,33.24};

/*float X[Size]={1,1.05,1.10,1.15,1.20,1.25,1.30};   //central
float Y[Size]={1,1.0247,1.0488,1.0723,1.0954,1.1180,1.1401};*/


float table[Size][Size]={0}; //initilize array with 0

float Factroial(int num){
    int i;
    float fact=1;
    for(i=1;i<=num;i++){
      fact=fact*i;
    }
  return fact;
}


void CentralDifference(){
    float diff;
    int i,j;
    for(int n=0;n<(Size-1);n++){
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


}


float FirstDiff(float h, int X0){
    float sum=0;
    int cur_indx=X0,term_count=0;
    for(int i=0;i<Size;i+=2){
        if(i%2==0){
            sum=sum+((pow(Factroial(term_count),2)/Factroial(i+1))*((table[cur_indx][i]+table[cur_indx-1][i])/2));
        }
        else{
            sum=sum-(((pow(Factroial(term_count),2)/Factroial(i+1)))*((table[cur_indx][i]+table[cur_indx-1][i])/2));
        }
        //printf("%d  %f ",i,(pow(Factroial(term_count),2)/Factroial(i+1)));
        cur_indx--;
        term_count++;
    }

    sum=sum/h;
    //printf("\n%d",X0);
    return sum;


}

float SecondDiff(float h, int X0){
    float sum=0;
    int cur_indx=X0,term_count=0;
    for(int i=0;i<Size;i++){
        if(i%2!=0){
            cur_indx--;
            if(term_count%2==0){
                sum=sum+((pow(Factroial(term_count),2)/(Factroial(i)*(term_count+1)))*(table[cur_indx][i]));
            }
            else{
                sum=sum-((pow(Factroial(term_count),2)/(Factroial(i)*(term_count+1)))*(table[cur_indx][i]));
            }
            //printf("%d \n",i+1);
            //printf(" %f ",(pow(Factroial(term_count),2)/(Factroial(i)*(term_count+1))));
            term_count++;

        }
    }

    sum=sum/pow(h,2);
    //printf("\n%d",X0);
    return sum;
}

int main()
{
    int i,j,X0;
    float x=0.3,Px=0,h,u,temp;


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
    printf("\n  X0= %f\n",X[X0]);
    printf("  h = %f\n",h);
    printf("  p = %f\n",u);

    CentralDifference();

    printf("\n  Central Difference table is:\n\n");
    for(i=0;i<(Size-1);i++){
        for(j=0;j<(Size-(i+1));j++){
            printf("  %f\t",table[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\n\tF'(X) = %f\n",FirstDiff(h,X0));
     printf("\n\tF''(X) = %f\n",SecondDiff(h,X0));


    return 0;
}
