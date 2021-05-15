#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct company
{
    char nam[30],rem[20],add[50],ph[10];
    int empno;

}*e;

void read(struct company *s)
{
    char c;

    printf("Enter the name of company(Max.30 char.):\n");
    scanf(" %[^\n]s",s->nam);
    printf("Enter the address of %s:\n",s->nam);
    scanf("%s",s->add);
    printf("Enter the employee number number of %s:\n",s->nam);
    scanf("%d",&s->empno);
    printf("Enter the phone number of %s:\n",s->nam);
    scanf("%s",&s->ph);
    printf("Enter remark (if any):\n");
    c=getch();

    while(c!="\n")
    {
        gets(s->rem);
        break;
    }
        printf("\nRecord has been created sucessfully!!!\n\n");
        getch();
}

void display(struct company *s)
{

    printf("The information of company is:\n");
    printf(" Name\t\tAddress\t\tPhone Number\t\tNumber of Employee\t\tRemark\n");
    printf("*****************************************************************************************************************\n");


    printf(" %s\t%s\t\t%s\t\t%d\t\t\t\t%s\n",s->nam, s->add, s->ph, s->empno, s->rem);

}

int main()
{

read(&e);
display(&e);

}
