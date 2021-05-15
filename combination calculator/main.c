#include <stdio.h>
#include <conio.h>

int main()
{

    int n,r,i,c,p=1,m=1,x=1;
    float q,y;

    printf("Enter the value of 'n':\n");
    scanf("%d",&n);
    printf("Enter the value of 'r':\n");
    scanf("%d",&r);
    printf("Enter your choice i.e '1' for Factorial, '2' for Permutation and '3' for Combination:");
    scanf("%d",&c);
    {
        for(i=n;i>=1;i--)
        x=x*i;

    }
     {
         for(i=(n-r);i>=1;i--)
        {
         p=p*i;

        }
        q=(x/p);
     }
     {
         for(i=r;i>=1;i--)
         {
           m=m*i;
         }
         y=(x/(p*m));
     }

    switch(c)
    {
        case 1:
        {
            if(n==(-1))
        {
            printf("No solution!!!\a");
        }
        else
         printf("Factorial is:%d",x);
         }
        break;

        case 2:
        {
         printf("Number of Permutation is:%f",q);
        }break;

        case 3:
        {
        printf("Number of Combination is:%f",y);
        }
        break;

        default:
        printf("Invalid choice!!!\a");

        }




    getch();
    return 0;
}
