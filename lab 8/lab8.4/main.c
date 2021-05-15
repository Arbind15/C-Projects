#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2,*p1,*p2,temp;

    printf("Enter two character variables:\n");
    scanf("%c %c",&c1,&c2);
    p1=&c1;
    p2=&c2;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("The swapped result is:\n%c\n%c",*p1,*p2);

    return 0;
}
