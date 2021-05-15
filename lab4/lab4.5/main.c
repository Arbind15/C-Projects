#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter number to be checked:\n");
    scanf("%d",&n);

    if(((n%5)==0)&&((n%7)==0)&&((n%11)!=0))
    printf("The %d is multiple of 5 and is divisible by 7 but not by 11.",n);
    else
    printf("The %d is not multiple of 5 and is divisible by 7 but not by 11.",n);

    return 0;
}
