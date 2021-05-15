#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    int i=0,car=0,wr=0;
    printf("Enter a sentence:\n");
    gets(ch);
    while(ch[i]!='\0')
    {
        if(ch[i]==' ')
            wr++;
        car++;
        i++;
    }
    printf("The number character and words in above sentence is %d and %d respectively.",car,wr+1);
    return 0;
}
