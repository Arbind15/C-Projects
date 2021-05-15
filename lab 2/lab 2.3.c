#include<stdio.h>
#include<conio.h>

void main()
{
    int n1,n2,n3;

    printf("Enter three integer value:\n");
    scanf("%d\t%d\t%d",&n1,&n2,&n3);

    printf("You have entered:%d\t%d\t%d\n",n1,n2,n3);
    printf("And its reverse order is:%d\t%d\t%d",n3,n2,n1);

    getch();
}
