#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int len,i,j,flag=0;

    printf("Enter string:");
    gets(ch);

    len=strlen(ch);

    for(i=0;i<(len/2);i++)
    {

        if(ch[i]!=ch[len-1])
        {

            flag=1;

        }
            len--;

    }

    if(flag==1)
        printf("\n%s is not palidrome!!!",ch);
    if(flag==0)
        printf("\n%s is palidrome",ch);


    return 0;
}
