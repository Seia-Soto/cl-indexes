#include <stdio.h>

int main(void) {
  int a=1, b=1;

  if (a == b)
    printf("A and B are same.\n"); // This is the short version of if statement
  else
    printf("A and B are not same.\n"); // You can also use else statement too.

  if (a++ == b++) {
    printf("1 added A and 1 added B are same.\n");
  } else if (a-- == b--) {
    printf("1 minused A and 1 minused B are same.\n");
  } else {
    printf("There are no matching variables.\n");
  }

  return 0;
}
