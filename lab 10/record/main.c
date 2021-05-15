#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char nam[30],rem[10];
    int rol,ran;
    float mar,per;

}s,temp[100],t;

void read(struct student s, int n)
{
    int i;
    FILE *file;
    struct student temp1;

    file=fopen("D:\\record.dat","wb");
    for(i=0;i<n;i++)
    {
    printf("Enter the name of student(Max.30 char.):\n");
    scanf(" %[^\n]s",s.nam);
    printf("Enter the roll number:\n");
    scanf("%d",&s.rol);
    printf("Enter the marks:\n");
    scanf("%f",&s.mar);
    fwrite(&s,sizeof(s),1,file);
    }
    fclose(file);
    printf("Record has been created sucessfully!!!\n\n");

}

void sort1()
{
    FILE *file;
    int i=0,j=0,k=0;
    struct student temp1;

    file=fopen("D:\\record.dat","rb");
    while(fread(&temp[i],sizeof(s),1,file)==1)
    {
        i++;
    }
    fclose(file);

     //for rank
        for(j=0;j<i-1;j++)
        {
           for(k=j+1;k<i;k++)
           {
               if(temp[j].mar<=temp[k].mar)
                {
                    temp1=temp[j];
                    temp[j]=temp[k];
                    temp[k]=temp1;

                }
           }

        }

        for(j=0;j<i;j++)
     {
         temp[j].ran=(j+1);
     }


        for(j=0;j<i;j++)
        {
    temp[j].per=(temp[j].mar/500)*100.0;

    if(temp[j].per<40.00)
        strcpy(temp[j].rem,"Fail");
    else
        strcpy(temp[j].rem,"Pass");
        }


    file=fopen("D:\\record.dat","wb");
    for(j=0;j<i;j++)
    fwrite(&temp[j],sizeof(s),1,file);
    fclose(file);
    file=fopen("D:\\record.dat","rb");
    i=0;
    printf("The information of student according to roll number is:\n");
    printf("Roll Number\tName\t\t\tMarks\t\tPercent(%%)\t\tRank\t\tRemark\n");
    printf("************************************************************************************************************\n");
     while(fread(&temp[i],sizeof(s),1,file)==1)
    {
        printf("%d\t\t%s\t\t\t%.2f\t\t%.3f\t\t\t%d\t\t%s\n",temp[i].rol,temp[i].nam,temp[i].mar,temp[i].per,temp[i].ran,temp[i].rem);
        i++;
    }
    fclose(file);
    getch();
}

void edit()
{
    int i=0,n;
    FILE *file;

    printf("Enter roll number of student to be edited:\n");
    scanf("%d",&n);
    file=fopen("D:\\record.dat","r+b");
    while(fread(&temp[i],sizeof(s),1,file)==1)
    {
        if(temp[i].rol==n)
        {
            break;
            }
        i++;


    }
            fseek(file,-sizeof(s),SEEK_CUR);
            printf("Name of student is %s, mark(s) is %.2f and roll number is %d\n",temp[i].nam,temp[i].mar,temp[i].rol);
            printf("Enter new name:\n");
            scanf("%s",temp[i].nam);
            printf("Enter new roll number:\n");
            scanf("%d",&temp[i].rol);
            printf("Enter new mark(s):\n");
            scanf("%f",&temp[i].mar);
            fwrite(&temp[i],sizeof(s),1,file);
            printf("Saved sucessfully!!!\n");

    fclose(file);


}

void del()
{
    int roll,i=0;
    FILE *file, *tmp;

    printf("Enter roll number of student to deleted:\n");
    scanf("%d",&roll);
    file=fopen("D:\\record.dat","rb");
    tmp=fopen("D:\\temp.dat","wb");
    while(fread(&s,sizeof(s),1,file)==1)
    {
        if(s.rol==roll)
        {
             printf("\nThe record of %s has been deleted!!!\n",s.nam);

           }
        else
        {
            fwrite(&s,sizeof(s),1,tmp);
        }

    }
    fclose(file);
    fclose(tmp);
    tmp=fopen("D:\\temp.dat","rb");
    file=fopen("D:\\record.dat","wb");
    while(fread(&s,sizeof(s),1,tmp)==1)
    {
        fwrite(&s,sizeof(s),1,file);
    }
    fclose(file);
    fclose(tmp);
}

void append(struct student s, int n)
{
  int i,j;
  FILE *file;

    file=fopen("D:\\record.dat","ab");
    for(i=0;i<n;i++)
    {
    printf("Enter the name of student(Max.30 char.):\n");
    scanf(" %[^\n]s",s.nam);
    printf("Enter the roll number:\n");
    scanf("%d",&s.rol);
    printf("Enter the marks of:\n");
    scanf("%f",&s.mar);
    fwrite(&s,sizeof(s),1,file);
    }
    fclose(file);
    printf("Record has been appended sucessfully!!!\n\n");

}
int main()
{

    int ch1,n1,n2,n3;


    while(1)
    {


    printf("Please make a choice:\n\nPress '1' to make a new record.\nPress '2' to view stored record.\nPress '3' to add record.\nPress '4' to edit record.\nPress '5' to delete record.\nPress '6' to exit.\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 1 :
        {
            printf("Enter the total number of student(Max.100):\n");
            scanf("%d",&n1);
            read(s,n1);
            break;
        }
    case 2 :
        sort1();
        break;
    case 3 :
        printf("Enter number of student to be added:\n");
        scanf("%d",&n2);
        append(s,n2);
        break;

    case 4 :
        edit();
        break;

    case 5 :
            del();
            break;

    case 6 :
        exit(0);

        default: printf("Invalid choice!!!\n");
    }
    }
    return 0;
}
