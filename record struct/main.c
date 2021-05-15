#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char nam[30],rem[10];
    int rol,ran;
    float mar,per;

}s[100];

void read(struct student s[],int sn)
{
    int i,j;

    for(i=0;i<sn;i++)
    {
    printf("Enter the name of student(Max.30 char.):\n");
    scanf(" %[^\n]s",s[i].nam);
    printf("Enter the roll number of %s:\n",s[i].nam);
    scanf("%d",&s[i].rol);
    printf("Enter the marks of %s:\n",s[i].nam);
    scanf("%f",&s[i].mar);
    }
        printf("Record has been created sucessfully!!!\n\n");

}

void display(struct student s[],int sn)
{
    int i,j,x,flag=1;
    float temp;


     //for rank
     for(i=0;i<sn;i++)
     {
         s[i].ran=(i+1);
     }
        for(i=0;i<sn-1;i++)
        {
           for(j=i+1;j<sn;j++)
           {
               if(s[i].mar<s[j].mar)
                {
                    temp=s[i].ran;
                    s[i].ran=s[j].ran;
                    s[j].ran=temp;

                }
           }

        }





    printf("The information of student according to roll number is:\n");
    printf("S.No.\tRoll Number\tName\t\t\tMarks\t\tPercent(%%)\t\tRank\t\tRemark\n");
    printf("*****************************************************************************************************************\n");
    for(i=0;i<sn;i++)
    {
    s[i].per=(s[i].mar/500)*100.0;

    if(s[i].per<40.00)
        strcpy(s[i].rem,"Fail");
    else
        strcpy(s[i].rem,"Pass");

    printf("%d\t%d\t\t%s\t\t%.2f\t\t%.3f\t\t\t%d\t\t%s\n",(i+1),s[i].rol, s[i].nam, s[i].mar, s[i].per, s[i].ran, s[i].rem);
    }
}

int main()
{

    int ch1,ch2,ch3,sn,temp1,i;

    here :
    printf("Please make a choice:\n\nPress '1' to make a new record.\nPress '2' to edit record.\nPress '3' to view stored record.\nPress '4' to exit.\n");
    scanf("%d",&ch1);

    switch(ch1)
    {
    case 1 :
        {
            printf("Enter the total number of student:\n");
            scanf("%d",&sn);
            read(s,sn);
            goto here;
        }

    case 2 :
        {
            printf("Press '1' to edit name of student.\nPress '2' to edit roll number of student.\nPress '3' to edit marks of student\nPress '4' to go to main menu.\n");
            scanf("%d",&ch2);
            printf("Enter the roll number of student to be edited.");
            scanf("%d",&ch3);
                for(i=0;i<sn;i++)
                {
                    if(s[i].rol==ch3)
                    {
                        temp1=i;

                }
                }
            switch(ch2)
            {

            case 1 :
            {

                printf("The name of student is %s\nEnter new name:",s[temp1].nam);
                scanf(" %[^\n]s",&s[temp1].nam);
                printf("Changed sucessfully!!!\n\n");
                goto here;

            }
            case 2 :
                {

                printf("The roll number of student is %d and name is %s\nEnter new roll number:",s[temp1].rol, s[temp1].nam);
                scanf("%d",&s[temp1].rol);
                printf("Changed sucessfully!!!\n\n");
               goto here;
                }
            case 3 :
                {

                printf("The name of student is %s and mark(s) is %.3f\nEnter new mark(s):",s[temp1].nam, s[temp1].mar);
                scanf("%f",&s[temp1].mar);
                printf("Changed sucessfully!!!\n\n");
                goto here;
                }
            case 4 :
                {
                    goto here;
                }
            default:
                {
                    printf("Invalid choice!!!\n");
                    goto here;
        }
            }

            case 3 :
                {
                    display(s,sn);
                    getch();
                    goto here;
                }

            case 4 :
                {
                   exit(0);
                }
            default:
                {
                    printf("Invalid choice!!!\n");
                    getch();
                    goto here;
                }
    }
    }


    return 0;
}
