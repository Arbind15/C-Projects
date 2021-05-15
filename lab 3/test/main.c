#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x='M',ch;
    printf("Hello world!\n");
    ch=x;
    (isupper(ch)>0)?printf("%c is Upper case.",ch):exit(0);
    (isalpha(ch)>0)?printf("%c is an alphabetic.",ch):exit(0);
    (isdigit(x)>0)?printf("%c is Number-digit.",x):exit(0);
    return 0;

}

