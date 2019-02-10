#include <stdio.h>
int main()
{
  char v;
  scanf("%c",&v);
  if(v=='a'||v=='b'||v=='c'||v=='d'||v=='e'||v=='f'||v=='g'||v=='h'||v=='i'||v=='j'||v=='k'||v=='l'||v=='m'||v=='n'||v=='o'||v=='p'||v=='q'||v=='r'||v=='s'||v=='t'||v=='u'||v=='v'||v=='w'||v=='x'||v=='y'||v=='z')
  {
    printf("Alphabet");
  }
  else if(v=='?'||v=='@'||v=='#'||v=='$')
  {
    printf("no");
  }
  return 0;
}
