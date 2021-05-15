#include<stdio.h>

int main()
{
  int list[10],k[10],i,j=0;
  float x;

  for(i=0;i<3;i++)
  {scanf("%d",&list[i]);
  scanf("%d",&k[i]);
  }
  for(i=0;i<3;i++)
  {
      if(list[i]==k[i])
      printf("1\t");
      else
      break;
  }
}
getch();
