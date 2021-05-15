#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   printf("Enter number to be checked:");
   scanf("%d",&n);

   if((n&1)==1)
   printf("%d is odd number.",n);

   else
   printf("%d is even number.",n);
   getch();
}
