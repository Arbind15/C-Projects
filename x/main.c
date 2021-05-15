#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p=&a;
printf("Enter an integer:\n");
scanf("%d",&a);
printf("Memory address is:%d\n",p);
printf("And you have entered:%d",*p);
    getch();
    return 0;
}
