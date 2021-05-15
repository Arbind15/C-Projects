#include<stdio.h>

void main()
{
    int ar[10]={26,2,8,9,0,7,3,8,100,63},i,j,a;
    printf("The unsorted array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",ar[i]);
}

   printf("\nThe sorted array is:\n");

   for(i=0;i<10-1;i++)
   {
       for(j=i+1;j<10;j++)
    {
           if(ar[i]>ar[j])
           {
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
           }
           }
   }
        for(i=0;i<10;i++)
            printf("%d\t",ar[i]);

getch();
}
