#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float t,r,p,ci,i,x,y,n;

    printf("Enter pinciple, time, rate, number of period:\n");
    scanf("%f%f%f%f",&p,&t,&r,&n);

    i=((p*t*r)/100);
    x=pow((1+r),n);
    ci=(p*(x-1));
    printf("The interest is:%f\n",i);
    printf("The compoud interest is:%f",ci);


}
