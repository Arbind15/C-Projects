#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50];
    int i=0;
    FILE *file;

    file=fopen("D:\\file.txt","w");
    if(file==NULL)
        {
            printf("File cannot be opened!!!\n");
            exit(1);
        }
    printf("Enter character to be written in file:\n");
    gets(ch);
    while(ch[i]!='\0')
    {
        fputc(ch[i],file);
        i++;
    }
    fclose(file);
    getch();

    return 0;
}
