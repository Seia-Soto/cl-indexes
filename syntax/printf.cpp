#include <stdio.h>

int main(void) {
  char character;
  int integer;
  float floating;

  float outer, inner;
  outer = 128.1024;
  inner = 256.4096;

  character = "Hello World";
  integer = 0;
  floating = 9.8;

  printf("%c is typeof character.\n", character);
  printf("%d is typeof integer.\n", integer);
  printf("%f is typeof float.\n", floating);

  printf("\n\n");
  printf("%f + %f = %f\n", outer, inner, outer + inner);
  printf("%f - %f = %f\n", inner, outer, inner - outer);

  printf("\n\n");
  printf("%16.2f refers %f\n", outer, outer);
  printf("%-16.2f refers %f\n", inner, inner);

  return 0;
}
