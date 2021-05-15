#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,j,size=0;
    char s1[]={"ARBIND KUMAR MEHTA"},s2[10];

        while(s1[i]!='\0')
        {
            size++;
            i++;
        }
        printf("The string s1 is: %s\nThe size of s1 is %d\n",s1,size);


        for(i=0;i<size;i++)
        {
            s2[i]=s1[i];
        }
        s2[size]='\0';
    printf("The string s2 is %s\n",s2);

    return 0;
}
