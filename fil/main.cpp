#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{



    FILE *fil;
    struct info
    {
        char name[30];
        int roll;
    };
    struct info s1;

    printf("\tFiling student infomation!!!\n-------------------------------------------\n");
    printf("Enter name and roll number of student:\n");
    scanf("%s\n%d",&s1.name,&s1.roll);
    fil=fopen("C:\stud.txt","w");
    fprintf(fil,"%s\t%d",s1.name,s1.roll);
    fclose(fil);
    rewind(fil);
    fil=fopen("C:\stud.txt","r");
    printf("info are:\n%d\t%s",s1.roll,s1.name);

}


