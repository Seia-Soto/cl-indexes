/*
두 개의 정수 A와 B의 합을 구하는 프로그램을 작성하여라.

입력형식
첫째 줄에 두 개의 정수 A와 B가 주어진다.(0≤A,B≤10)

출력형식
첫째 줄에 두 정수 a와 b의 합을 출력하여라.

입력과 출력의 예
입력
1 2

출력
3
*/

#include <stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  if (a < b) {
    printf("<");
  } else if (a == b) {
    printf("=");
  } else {
    printf(">");
  }

  return 0;
}
