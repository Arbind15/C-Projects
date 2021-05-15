#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50];
    int i=0;
    FILE *file;

    file=fopen("D:\\file.txt","r");
    if(file==NULL)
        {
            printf("File cannot be opened!!!\n");
            exit(1);
        }
    printf("The character stored in file are:\n");
    while((ch[i]=fgetc(file))!=EOF)
    {
        printf("%c",ch[i]);
        i++;
    }
    printf("\nThe number character in file is: %d",i);
    fclose(file);
    getch();

    return 0;
}
