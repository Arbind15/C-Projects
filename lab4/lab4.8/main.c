#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an alphabet:\n");
    ch=getchar();

    switch(ch)
    {
        case 'a': printf("Alphabet %c is vowel.",ch);
        break;
        case 'e': printf("Alphabet %c is vowel.",ch);
        break;
        case 'i': printf("Alphabet %c is vowel.",ch);
        break;
        case 'o': printf("Alphabet %c is vowel.",ch);
        break;
        case 'u': printf("Alphabet %c is vowel.",ch);
        break;
        default: printf("Alphabet %c is not vowel.",ch);
    }
    return 0;
}
