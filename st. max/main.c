#include<stdio.h>



void main()
{
    char name[5][3];
    int i,j,marks[5];

    printf("Enter the name of students:\n");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%c",&name[i][j]);
    }
    }


    printf("Enter the marks of students:\n");
    for(i=0;i<=4;i++)
    {
            scanf("%d",&marks[i]);
    }

    printf("Name\t\t\t\tMarks\n");
    for(i=0;i<=4;i++)
    {
       {
           for(j=0;j<=2;j++)
        {
            printf("%c",name[i][j]);
        }
       }
            printf("\t\t\t\t");
            printf("%d",marks[i]);
            printf("\n");
    }



}
getch;
