#include<conio.h>
int main()
{
char a[20];

 printf("Please enter your name!\n");
 scanf("%s",&a);
 printf("Hi! %s .\n \t Your name is %s.\n",a,a);
 printf("Memory Address of your name is:%d\n",&a);

 getch();
 return 0;
}
