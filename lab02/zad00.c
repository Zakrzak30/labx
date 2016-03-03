#include <stdio.h>
int main()
{
  printf("a). 5&3 = %i\n", 5&3);
  printf("b). 5|3 = %i\n", 5|3);
  printf("c). 7<<2&7 = %i\n", 7<<2&7);
  printf("d). 7<<(2&7) = %i\n", 7<<(2&7));
  printf("e). ((-1)<<8)>>16 = %i\n", ((-1)<<8)>>16);
  printf("f). 13^9 = %i\n", 13^9);
  return 0;
}
