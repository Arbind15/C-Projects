#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter an alphabet:\n");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("The alphabet '%c' is vowel.",ch);
    else
    printf("The alphabet '%c' is not vowel.",ch);
    getch();

    return 0;
}
