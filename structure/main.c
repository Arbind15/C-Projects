#include<stdio.h>

struct stud{
             char name[30];
             int roll;
                    };a,b;

void main()
{
   struct stud a[3];
   int i;
   for(i=0;i<3;i++)
   {
    printf("Enter name and roll number:\n");
    scanf("%s%d",&a[i].name,&a[i].roll);
    printf("Name of student is:%s\n",a[i].name);
    printf("Roll number of student is:%d",a[i].roll);
   }


}
