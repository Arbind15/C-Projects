#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50],s[50];
    FILE *file;

    file=fopen("D:\\file.2.txt","w");
    if(file==NULL)
       {
        printf("Cannot open file!!!");
        exit(1);
       }
    printf("Enter a string:\n");
    gets(ch);
    fputs(ch,file);
    fclose(file);
    printf("Press any key to view string.\n");
    getch();
    file=fopen("D:\\file.2.txt","r");
    fgets(s,sizeof(s),file);
    printf("You have entered: %s",s);
    fclose(file);
    getch();
    return 0;
}
