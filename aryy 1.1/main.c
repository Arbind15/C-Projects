#include<stdio.h>

int main()
/*using arayy*/
{
    int n,i;

    printf("Hi!!!\nEnter number of character:");
    scanf("%d",&n);
    char a[n];
    printf("Enter your character:\n");
    for(i=0;i<n;i++)
    {scanf("%c",&a[i]);}
    printf("You have entered:");
    for(i=0;i<n;i++)
    {printf("%c",a[i]);}

}
getch();
