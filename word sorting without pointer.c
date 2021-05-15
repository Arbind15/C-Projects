#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[5][10];
    char temp[10];
    int i,n,j,k;

    printf("Enter words to be sorted:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",s[i]);

    }
    printf("The words are:\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",s[i]);
    }


    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {

                if(strcmp(s[i],s[j])>0)
                {
                    strcpy(temp,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],temp);
                }
        }

    }

    printf("\nThe sorted words are:\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",s[i]);
    }

        return 0;
}
