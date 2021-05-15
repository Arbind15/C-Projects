#include <stdio.h>
#include <conio.h>

void main()
{
    int n,ans;

    printf("Enter the number to be checked:");
    scanf("%d",&n);

    if((n&1)==1)
    printf("%d is odd number.",n);
    else
    printf("%d is even.",n);

   getch();

}

