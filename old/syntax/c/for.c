#include <stdio.h>

int main(void) {
  int i;

  for (i = 1; i <= 100; i++) {
    /* This runs 100 times */
    printf("%d of 100\n", i);
  }

  return 0;
}
