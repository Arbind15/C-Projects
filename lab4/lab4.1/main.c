#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nam[30];
    int rank;
    float per,py,ch,ma,eng,bio;

    printf("Enter the name of student:");
    gets(nam);
    printf("Enter the marks in physics, chemistry, math, english and biology respectively:\n");
    scanf("%f%f%f%f%f",&py,&ch,&ma,&eng,&bio);

    per=((py+ch+ma+eng+bio)/500.00)*100.00;

    if(per<40.00)
    printf("Mr.%s is fialed. His percentage is:%f%%\n",nam,per);
    if(per>40.00&&per<55.00)
    printf("Mr.%s obtain third division. His percentage is:%f%%\n",nam,per);
    if(per>55.00&&per<65.00)
    printf("Mr.%s obtain second division. His percentage is:%f%%\n",nam,per);
    if(per>65.00&&per<80.00)
    printf("Mr.%s obtain first division. His percentage is:%f%%\n",nam,per);
    if(per>80.00&&per<95.00)
    printf("Mr.%s obtain Distinction. His percentage is:%f%%\n",nam,per);
    if(per>95.00&&per<100.00)
    printf("Mr.%s obtain extraordinary rank. His percentage is:%f%%\n",nam,per);
    getch();
    return 0;
}
