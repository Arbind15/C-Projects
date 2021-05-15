#include <stdio.h>
#include <conio.h>

void main()
{
    int n,ans;

    printf("Enter the number to be checked:");
    scanf("%d",&n);

     {
         ans=((n%2)==0) ? 1 : 0;


        if(ans==1)
        printf("%d is even number.\n",n);

        else
        printf("%d is odd number.",n);                      //using conditional operator.

     }



    getch();

}

