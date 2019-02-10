#include <stdio.h>
int main()
{
  char v;
  scanf("%c",&v);
 if(v=='?'||v=='@'||v=='#'||v=='$')
  {
    printf("no");
  }
  else
  {
    printf("Alphabet");
  }
  return 0;
}
