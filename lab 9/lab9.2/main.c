#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct company
{
    char nam[30],rem[20],add[50],ph[10];
    int empno;

}s[100];

void read(struct company s[],int sn)
{
    int i;
    char c[20];

    for(i=0;i<sn;i++)
    {
    printf("Enter the name of company(Max.30 char.):\n");
    scanf(" %[^\n]s",s[i].nam);
    printf("Enter the address of %s:\n",s[i].nam);
    scanf("%s",s[i].add);
    printf("Enter the employee number number of %s:\n",s[i].nam);
    scanf("%d",&s[i].empno);
    printf("Enter the phone number of %s:\n",s[i].nam);
    scanf("%s",&s[i].ph);
    fflush(stdin);
    printf("Enter remark (if any):\n");
    gets(c);

    if(c!="\n")
    {
        strcpy(s[i].rem,c);;
    }

    }
        printf("\nRecord has been created sucessfully!!!\n\n");
        getch();
}

void display(struct company s[],int sn)
{
    int i;

    printf("The information of company is:\n");
    printf("S.No.\tName\t\tAddress\t\tPhone Number\t\tNumber of Employee\t\tRemark\n");
    printf("*****************************************************************************************************************\n");

    for(i=0;i<sn;i++)
    {
    printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t\t\t%s\n",(i+1),s[i].nam, s[i].add, s[i].ph, s[i].empno, s[i].rem);
    }
}

int main()
{

    int ch1,sn;


    while(1)
    {

    printf("Please make a choice:\n\nPress '1' to make a new record.\nPress '2' to view stored record.\nPress '3' to exit.\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
            case 1 :
        {
            printf("Enter the total number of company(Max.100):\n");
            scanf("%d",&sn);
            read(s,sn);
            break;
        }

            case 2 :
                {
                    display(s,sn);
                    getch();
                    break;
                }

            case 3 :
                {
                   exit(0);
                }
            default:
                {
                    printf("Invalid choice!!!\n");
                    getch();
                    break;
                }
    }
    }

    return 0;
}
