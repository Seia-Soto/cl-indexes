#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
  printf("%f\n", (float)a/(float)b);
  /*
  In integer, only the natural number canbe returned, so converting the out of variable only that time.
  */

	return 0;
}
