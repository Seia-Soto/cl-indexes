#include <stdio.h>

int main(void) {
  char example;

  example = "Hello World";

  printf("%c, %% is special character but attributes were escaped.\n", example);
  printf("%c, \" is special character but attributes were escaped.\n", example);

  return 0;
}
