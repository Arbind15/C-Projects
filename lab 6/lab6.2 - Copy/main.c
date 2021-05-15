#include <stdio.h>
#include <stdlib.h>
#define a 50    //global variable

int n_sum(int n)
{
    if(n==0)        //Here n is local variable for this function
        return 0;
    else
        return(n+n_sum(n-1));
}
void sum()
{
    here :
    printf("The sum is: %d\n",increment());
    if(increment()>=5)
        exit(1);
    goto here;
}
int increment()
{
    static int sum=0; //this is static variable
    sum++;
    return(sum);
}


int main()
{

    printf("The sum of first 50 natural number is:%d\n",n_sum(a));

    getch();
   sum();
return 0;
}
