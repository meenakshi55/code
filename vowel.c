#include<stdio.h>
int main()
{
  char v;
  scanf("%c",&v);
  if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
  {
    printf("Vowel");
  }
  else if(v=='b'||v=='c'||v=='d'||v=='f'||v=='g'||v=='h'||v=='j'||v=='k'||v=='l'||v=='m'||v=='n'||v=='p'||v=='q'||v=='r'||v=='s'||v=='t'||v=='v'||v=='w'||v=='x'||v=='y'||v=='z')
  {
    printf("consonant");
  }
  else
  {
    printf("invalid");
  }
  return 0;
}
