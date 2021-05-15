#include <stdio.h>
#define plus +
#define minus -
#define mult *
#define div /

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
        ans=x plus y;
        break;

        case '-':
        ans=x minus y;
        break;

        case '*':
        ans=x mult y;
        break;

        case '/':
        ans=x div y;
        break;

        default:
        printf("Invalid choice!!!");
    }

    printf("The result is:%f",ans);

    return 0;
}
