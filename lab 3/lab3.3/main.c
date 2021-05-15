#include <stdio.h>
#include<conio.h>


void main()
{
    char nam[30], add[50],wt[5],ht[5],ag[3];


    puts("Enter your name:");
    gets(nam);
    puts("Enter your address:");
    gets(add);
    puts("Enter your height:");
    gets(ht);
    puts("Enter your weight:");
    gets(wt);
    puts("Enter your age:");
    gets(ag);

    puts("your details is:\n---------------------------------------------------------------\n");
    puts("Name:");
    puts(nam);
    puts("Address:");
    puts(add);
    puts("Height(ft.):");
    puts(ht);
    puts("Weight(kg):");
    puts(wt);
    puts("Age(year):");
    puts(ag);


}
