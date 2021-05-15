
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
printf("Hi! Welcome to age checker\nPlease enter your age(in year)\n");
scanf("%d",&a);
if(a<=5&&a>0)
printf("you are Infant.");
else
if(a<=18&&a>5)
printf("you are adolcence.");
else
if(a>18&&a<40)
printf("you are young man.");
else
if(a>=40)
printf("you are an old man");
else
printf("Please enter valid age!!!");


getch();
return 0;
}
