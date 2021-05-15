#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Enter the number to be checked:");
    scanf("%d",&n);

    if((n%2)==0)                            //using modulus operator.
    printf("%d is even number.",n);

    else
    printf("%d is odd number.",n);



    getch();

}
