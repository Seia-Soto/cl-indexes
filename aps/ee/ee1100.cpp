#include <stdio.h>

int main(void) {
  int a, b, c, d;

  scanf("%d %d %d", &a, &b, &c);

  d = (a*b)-c;
  if (d < 0)
    d = 0;
  printf("%d", d);

  return 0;
}
