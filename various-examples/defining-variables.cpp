#include <stdio.h>

int main(void) {
  char character;
  int integer;
  float floating;

  character = "Hello World";
  integer = 0;
  floating = 9.8;

  printf("%c is typeof character and it charges 1 byte.\n", character);
  printf("%d is typeof integer and it charges 4 bytes.\n", integer);
  printf("%f is typeof float and it charges 4 bytes.\n", floating);

  return 0;
}
