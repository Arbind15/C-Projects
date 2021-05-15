#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[20],s2[20],s[40];
    int i=0,j=0;

    printf("Enter the first string:\n");
    gets(s1);
    printf("Enter the second string:\n");
    gets(s2);

    //concaneting string
    while(s1[i]!='\0')
    {
        s[i]=s1[i];
        i++;
    }

    while(s2[j]!='\0')
    {
        s[i]=s2[j];
        i++;
        j++;
    }
    s[i]='\0';
    printf("The concatenated string is:\n");
        puts(s);
    getch();
    return 0;
}
