#include<stdio.h>
main()
{
    float a,b,c,d;

    printf("\n\n\n\t\tWelcome to series checker!!!\n\nEnter any four consiqitive term of series:\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    if((b-a)==(d-c))
    printf("The series is in A.P!!!");
    else
    if((b/a)==(d/c))
    printf("The series is in G.P!!!");
    else
    if(((1/b)-(1/a))==((1/d)-(1/c)))
    printf("The series is in H.P!!!");
    else
    printf("Invalid series!!!\a");






    getch();
    return 0;



}
