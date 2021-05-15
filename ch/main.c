#include<stdio.h>
int main()
{
    char a,c,R,G;

    printf("Press 'R' for Red and 'G' for Green:\t");
    scanf("%c",&c);

    switch(toupper(c))
    {
        case 'R':
        printf("RED\n");
        break;

        case 'G':
        printf("GREEN\n");
        break;

        default:
        printf("Invalid choice!!!\a\n");

}
printf("%c",toupper(c));
}
   getch();

