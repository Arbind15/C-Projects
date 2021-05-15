#include <stdio.h>
#include<conio.h>

int main()
{
    float x,y,ans;
    char ch1;

    printf("Enter two numbers:\n");
    scanf("%f%f",&x,&y);
    printf("Press '+' to add,'-' to subtract, '*' to multiply and '/' to divide:\n");
    ch1=getch();
    switch(ch1)
    {
        case '+':
        ans=x+y;
        break;

        case '-':
        ans=x-y;
        break;

        case '*':
        ans=x*y;
        break;

        case '/':
        ans=x/y;
        break;

        default:
        printf("Invalid choice!!!");
    }

    printf("The result is:%f",ans);
    getch();
    return 0;
}
