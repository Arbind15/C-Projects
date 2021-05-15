#include <stdio.h>
#include <stdlib.h>

struct a
{
    char na[10];
    int rol;
};

int main()
{
    struct a *ptr,b;
    ptr=&b;

    printf("Enter name and roll:\n");
    scanf("%[^\n]s",ptr->na);
    scanf("%d",&ptr->rol);
    printf("The name is: %s\n The roll is: %d",b.na,b.rol);
    return 0;
}
