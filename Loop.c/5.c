// wap to print a table

#include<stdio.h>
int main()
{
  int i,t;
  printf("Enter Which Table You Print");
  scanf("%d",&t);

  for(i=1 ; i<=10 ; i++)
  {
    printf("%d \n", t*i);
  }
  return 0;
} 