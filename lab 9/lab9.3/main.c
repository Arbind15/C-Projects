#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d;

    printf("Please enter (x1,y1) and (x2,y2) respectively:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is: %.2f units.",x1,y1,x2,y2,d);
    getch();
    return 0;
}
