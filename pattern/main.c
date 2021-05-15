#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch[]="PURWANCHAL";
    int i,j;

    for(i=0;i<strlen(ch);i++)
    {
        for(j=i;j<(strlen(ch)-i);j++)
        {
            printf("%c",ch[j]);
        }

        printf("\n");
    }
}
