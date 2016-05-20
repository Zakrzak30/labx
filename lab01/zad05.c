// Co wydrukuje następujący fragment programu:
// int a, b;
// a=2; b=4;
// if ((a=2) & (b=4))   printf(" TAK\n");
// else   printf(" NIE\n");
// Należy zwrócić uwagę, że w warunku powyższej instrukcji if występuje koniunkcja bitowa & a nie koniunkcja logiczna &&.

#include <stdio.h>
int main(){
  int a=2, b=4, c;
  if ((a=2) & (b=4)) printf("TAK\n");
  else printf("NIE\n");
  c=(a=2) & (b=4);
  printf("%d\n",c);
}

// Program wypisze slowo "NIE".
// Ponieważ (a=2) & (b=4)=0

