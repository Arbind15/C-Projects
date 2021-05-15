#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[20],s2[20];
    int i=0,flag=0;

    printf("Enter first string:\n");
    gets(s1);
    printf("Enter second string:\n");
    gets(s2);

    while(s1[i]!='\0'||s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
            flag=1;
        i++;
    }

    if(flag==1)
        printf("Two string are different.");
    else
        printf("Two string are same.");
    getch();
    return 0;
}
