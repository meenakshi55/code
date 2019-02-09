#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("Even");
  }
  else if(a%2>0)
  {
    printf("Odd");
  }
  else(a<0)
  {
  printf("invalid");
  }
 return 0;
}
