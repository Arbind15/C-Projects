#include<stdio.h>
#include<conio.h>

void main()
{


    int rollno;
    char name[30];
    float msub1,msub2,msub3,msub4,msub5,msum,score;

    printf("Enter name of student:\n");
    scanf("%[^\n]s",&name);
    printf("Enter the roll number of student:\n");
    scanf("%d",&rollno);
    printf("Enter marks of five subjects:\n");
    scanf("%f%f%f%f%f",&msub1,&msub2,&msub3,&msub4,&msub5);
    msum=(msub1+msub2+msub3+msub4+msub5);
    score=((msum/500)*100);
    printf("Name of student is:%s\nRoll number is:%d\nscore is:%f",name,rollno,score);

    getch();

}
