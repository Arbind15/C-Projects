#include <stdio.h>
#include <stdlib.h>

void factor(int i)   //calculating facctors of number
{   int k=2;
    printf("Factors of %d are=>",i);
       {    while(i>=2)

         {
            if(i%k==0)
           {
            i=i/k;
            printf("%d\t",k);
           }
          else
            k++;
         }

      }
}


int main()
{
    int i,j,n1,n2,x,k=2;
    int gdc=0,lcm=1,f1,f2,g;

    printf("Enter two number whose GCD and LCM is to be found:\n");
    scanf("%d%d",&n1,&n2);

    if(n2>n1)           //assigining greater number to i
        i=n2;
    else
        i=n1;

    for(j=2;j<=i;j++)
    {
        if(n1%j==0&&n2%j==0)  //GDC or HCF
        gdc=j;

      }

    printf("GDC is=> %d\n",gdc);

    if(gdc!=0)
        lcm=(n1*n2)/gdc;
        else
        lcm=n1*n2;
    printf("LCM is=> %d\n",lcm);        //lcm=(n1*n2)/gdc

    factor(n1);
    printf("\n");
    factor(n2);
    return 0;
}
