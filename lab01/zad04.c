// Co wydrukuje następujący fragment programu:
// n=0;
// if (n=0)   printf("rowne\n");
// else   printf("nierowne\n");
// Należy zwrócić uwagę, że w warunku powyższej instrukcji if występuje przypisanie = a nie porównanie ==.

#include <stdio.h>
int main(){
  int n=0;
  if (n=0) printf("rowne\n");
  else printf("nierowne\n");
}

// Program wypisze slowo "nierowne".
// if przyjmuje wartosci logiczne pradwa 1 fałsz 0
// przypisanie spowodowało że if nie sprawdza warunku 
// tylko działa na podanej wartości
