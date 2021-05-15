#include<stdio.h>
//Declaring function
int sum(int a,int b)
{
    int c;
    c=a+b;
    return(c);

}

void main()
{
    int a,b,ans;

  printf("Enter two number to be added:\n");
  scanf("%d%d",&a,&b);
  ans=sum(a,b);
  printf("The sum is:%d",ans);



}
getch;
