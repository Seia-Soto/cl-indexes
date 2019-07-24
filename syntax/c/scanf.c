#include <stdio.h>

int main(void) {
  char alter;
  int native;

  printf("To see ASCII code of letter you typed, please write letter which you want to see below.\n> ");
  scanf("%c\n\n", &alter);

  printf("The letter %c refers %d in ASCII code.\n", alter, alter);

  int alpha, beta;

  printf("\n\n");
  printf("This function will sum each two integer you typed.\nInput alike: (alpha, beta) > ");
  scanf("(%d, %d)\n\n", &alpha, &beta);

  printf("%d\n", alpha + beta);

  return 0;
}
