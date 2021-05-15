#include<stdio.h>
int main()

{
    char c;
    int n,i,a,d,x,y,k;

    printf("\t\tWelcome to A.P generator!!!\n\n");
    printf("Enter first term of A.P:\t");
    scanf("%d",&a);
    printf("Enter common difference of A.P:\t");
    scanf("%d",&d);
    printf("Enter number of term(s):\t");
    scanf("%d",&n);
    printf("Choose how to view series i.e Press 'H' for horizontal view and 'V' for vertical view:");
    scanf(" %c",&c);
    printf("Required series is:\n");

    {
        switch(toupper(c))
    {
    case 'H':
         {
    for(i=1;i<=n;i++)
    {x=i-1;
    y=x*d;
    k=a+y;
    printf("%d\t",k);
    }
    }
    break;

    case 'V':
        {
    for(i=1;i<=n;i++)
    {x=i-1;
    y=x*d;
    k=a+y;
    printf("%d\n",k);
    }
    }
    break;

    default:
    printf("Invalid choice!!!\a\n");

}
}
getch();
return 0;
    }








