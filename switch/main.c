#include<stdio.h>

int main()
{
    char c;

    //program using switch statement
    printf("Hi!!!\nPress 'R' for Red, 'G' for Green and 'B' for Blue.\t");
    getchar();
    printf("You have pressed  '%c'\n",c);
    switch(toupper(putchar(c)))
    {
       case 'R':
       printf("Red\n");
       break;

       case 'G':
       printf("Green\n");
       break;

       case 'B':
       printf("Blue\n");
       break;
    }


}
getch();

