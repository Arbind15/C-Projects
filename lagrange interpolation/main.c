#include <stdio.h>
#include <stdlib.h>
#define Size 5

int main()
{
    float X[]={5,7,11,13,17};
    float Y[Size]={150,392,1452,2366,5202};
    /*float X[Size]={1,3,4,6,7};
    float Y[Size]={1,53,127,531,687};*/
    int i,j;
    float x=9,Sum=1,Px=0,numtr,dnumtr;

    for(i=0;i<Size;i++){
        //printf("%f\t",Y[i]);
        numtr=1;
        dnumtr=1;
        for(j=0;j<Size;j++){
            if(i!=j){
                numtr=numtr*(x-X[j]);
                dnumtr=dnumtr*(X[i]-X[j]);
                //printf("Xj= %f\t",X[j]);
            }

        }
        //printf("\n");
        Sum=numtr/dnumtr;
        Px=Px+(Y[i]*Sum);
        printf("L%d= %f\n",i,Sum);
        Sum=1;
    }

    printf("\nF(%0.2f)= %0.2f\n",x,Px);
    return 0;
}
