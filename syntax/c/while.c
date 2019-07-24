#include <stdio.h>

int main(void) {
  int i=0;

  /* In only-while statement, first check statement and execute. */
  while (i=0) {
    printf("Printing message because the variable 'i' is declared as zero and the condition is while statement is 'i=0'\n");
  }

  /* In do-while statement, first run and check statement. */
  do {
    printf("Printing message because this is in do-while statement\n");
    /* Infinity loop */
  } while(i=1);
}
