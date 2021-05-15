#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char ch;
    int a;
    printf("Enter any from keyboard:\n");
    ch=getchar();
    a=ch;
    if((a>=48&&a<=57)||(a>=65&&a<=90)||(a>=97&&a<=122))    //comparing ASCII code of various characters
    {
        if((a>=65&&a<=90)||(a>=97&&a<=122))
        printf("%c is an alphabet.\n",ch);
        else
        printf("%c is a number.\n",ch);
    }
    else
    printf("%c is a special character.\n",ch);

    (isalnum(ch)>0)?printf("%c is an alphanumeric.\n",ch):EXIT_SUCCESS;  //EXIT_SUCCESS=>sucessfull termination
    (isalpha(ch)>0)?printf("%c is an alphabetic.\n",ch):EXIT_SUCCESS;
    (isblank(ch)>0)?printf("%c is Blank charactar.\n",ch):EXIT_SUCCESS;
    (iscntrl(ch)>0)?printf("%c is control character.\n",ch):EXIT_SUCCESS;
    (isdigit(ch)>0)?printf("%c is Number-digit.\n",ch):EXIT_SUCCESS;
    (isupper(ch)>0)?printf("%c is Upper case.\n",ch):EXIT_SUCCESS;
    (islower(ch)>0)?printf("%c is Lower case.\n",ch):EXIT_SUCCESS;
    (isxdigit(ch)>0)?printf("%c is Hechadecimal digit.\n",ch):EXIT_SUCCESS;
    (isgraph(ch)>0)?printf("%c is Graphical character.\n",ch):EXIT_SUCCESS;
    return 0;
}
