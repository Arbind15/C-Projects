#include <stdio.h>
#include<stdlib.h>

int main()
{
    char ch,ch2,str[10],st[10];

    puts("Enter a string:");
    gets(st);
    puts(st);
    printf("Enter a character:\n"); //using printf()
    ch=getchar();  //using getchar()
    printf("The character is:");
    putchar(ch);  //using puts()
    puts("\nEnter another character:");
    ch2=getch();  //using getc()
    printf("The character is:%c",ch2);
    getch();


return 0;
}
