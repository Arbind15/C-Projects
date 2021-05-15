#include<stdio.h>
main()
{
    char p,o,c,e,m;
    int a,b,n,i,j=2,k;

    printf("Press 'p' for prime, 'o' for odd, 'e' for even and 'm' for multiple of number:");
    scanf("%c",&c);
    printf("From:");
    scanf("%d",&a);
    printf("To:");
    scanf("%d",&b);

    switch(toupper(c))
    {
        case 'P':
        {

            for(i=a;i<=b;i++)
            {
            while(j<b)
            {
                k=(i%j);
                j++;

             {
                 if(k!=0)
                 printf("%d  ",i);
                 if(k==0)
                 break;
             }
            }






            }

    }

}
   getch();
   return 0;
   }


