#include <stdio.h>
#include <stdlib.h>

typedef struct com
{
    float rel[2];
    float img[2];

}com;

void read(com n)
{
    int i;
    float sumr=0;
    float sumi=0;
    float diffr=0;
    float diffi=0;
    printf("Enter (x1,j1i) and (x2,j2i):\n");
    for(i=0;i<2;i++)
    {
        scanf("%f%f",&n.rel[i],&n.img[i]);
        sumr+=n.rel[i];
        sumi+=n.img[i];
    }
    i=0;
    diffr=n.rel[i]-n.rel[i+1];
    diffi=n.img[i]-n.img[i+1];

    printf("The sum is: (%.1f,%.1fi) and difference is: (%.1f,%.1fi)",sumr,sumi,diffr,diffi);
    getch();
}

int main()
{
    com s;
    read(s);
    return 0;
}
