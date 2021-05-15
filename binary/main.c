#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct my
    {
        char na[50];
    };

    FILE *fil;
    struct my m;
    char n[50];

    printf("Enrer character to be written:\n");
    scanf("%s",&m.na);

    fil=fopen("C:\my.dat","w+b");
    fwrite(&m,sizeof(m),1,fil);
    getch();
    fclose(fil);
}
