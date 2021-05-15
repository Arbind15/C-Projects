#include <stdio.h>
#include <stdlib.h>


typedef struct info
{
    char nam[20];
    int ag;
}info;

info read(info i)
{
    info d;
    printf("Enter your name:\n");
    gets(i.nam);
    printf("Enter your age:\n");
    scanf("%d",&i.ag);

    return i;
};


void display(info j)
{
    printf("Your name is: %s\nYour age is: %d",j.nam,j.ag);
}
int main()
{
    info s1;

    display(read(s1));

    return 0;
}
