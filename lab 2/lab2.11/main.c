#include <stdio.h>
#include <conio.h>

int main()
{
   int x=2,y,z=4;

   y=(x++)+(++x);
   printf("y=%d\n",y);

   y=(++x)+(++x);
   printf("y=%d\n",y);

   y=(++x)+(++x)+(++x);
   printf("y=%d\n",y);

   y=x>z;
   printf("y=%d\n",y);

   y=x>z?x:z;
   printf("y=%d\n",y);

   y=x&z;
   printf("y=%d\n",y);

   y=x>>2+z<<1;
   printf("y=%d\n",y);

   getch();

}
