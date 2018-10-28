#include <stdio.h>

int main(void) {
  int a=0;

  printf("%d\n", a++); // 0
  printf("%d\n", ++a); // 1

  printf("%d\n", a--); // 0
  printf("%d\n", --a); // -1

  return 0;
}
