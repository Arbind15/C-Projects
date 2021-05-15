#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100],ne[100];
    int i,j=0,n;
    printf("Enter a sentence:\n");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]!=' ')
           {
               ch[j++]=ch[i];

           }
    }
    ch[j]='\0';

    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='.')
           {
               ch[i]=':';

           }
    }
    printf("%s",ch);
    return 0;
}
