#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef union student       //using union
{
    char nam[50];
    int rol,mar;
}st;

int main()
{
    st s1;

    enum students{Arbind=1, Anil, Zagir, Manish=10, Rahul, Prasant};     //declaring enum

    strcpy(s1.nam,"Arbind Kumar Mehta");    //assigment operation only one at a time
    printf("Student name is: %s\n",s1.nam);

    s1.rol=017;
    printf("Roll number of student is: %d\n",s1.rol);

    s1.mar=213;
    printf("Obtained mark(s) is: %d\n",s1.mar);
    getch();

    printf("The index of Arbind is\t%d\n",Arbind);
    printf("The index of Anil is\t%d\n",Anil);
    printf("The index of Zagir is\t%d\n",Zagir);
    printf("The index of Manish is\t%d\n",Manish);
    printf("The index of Rahul is\t%d\n",Rahul);
    printf("The index of Prasant is\t%d\n",Prasant);

    getch();

    return 0;
}
