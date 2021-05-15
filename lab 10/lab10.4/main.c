#include <stdio.h>
#include <stdlib.h>

struct per
{
    char nam[30];
    float ag,ht;
}p1;

int main()
{
    FILE *fptr;
    int n,i;

    fptr=fopen("D:\\person.txt","w");
    printf("Enter number of person:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name age and height of person:\n");
        scanf("%s%f%f",p1.nam,&p1.ag,&p1.ht);
        fflush(stdin);
        fprintf(fptr,"%s\t\t%.2f\t%.2f\n ",p1.nam,p1.ag,p1.ht);
    }
    fclose(fptr);
    printf("Enter any key to view record.\n");
    getch();
    printf("Name\t\tAge\tHeight\n*******************************************************************\n");
    fptr=fopen("D:\\person.txt","r");
    while(!feof(fptr))
    {
        fscanf(fptr,"%s%f%f",p1.nam,&p1.ag,&p1.ht);
        printf("%s\t\t%.2f\t%.2f\n",p1.nam,p1.ag,p1.ht);
    }
    fclose(fptr);

    return 0;
}
