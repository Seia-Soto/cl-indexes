/*
양의 정수 M(1000≤M≤29999)을 십의자리에서 반올림과 버림을 하는 프로그램을 작성하시오.

입력형식
첫째 줄은 테스트 케이스의 개수 N(1≤N≤100)이 주어지고 테스트 케이스의 개수만큼 입력 데이터가 각 줄에 주어진다.

출력형식
각각의 케이스에 해당하는 반올림 값과 그리고 버림 값을 각 줄에 출력하시오.

입력과 출력의 예
입력
4
12345
26789
7563
29999

출력
12300 12300
26800 26700
7600 7500
30000 29900
*/

#include <stdio.h>

int makeRound(int number);
int makeLoss(int number);

int main(void) {
  int i, k, sets[100];

  scanf("%d", &k);

  for (i = 0; i <= k - 1; i++) {
    scanf("%d", &sets[i]);
  }
  for (i = 0; i <= k - 1; i++) {
    printf("%d %d\n", makeRound(sets[i]), makeLoss(sets[i]));
  }

  return 0;
}

int makeRound(int number) {
  return ((number + 50) / 100) * 100;
}
int makeLoss(int number) {
  return (number / 100) * 100;
}
