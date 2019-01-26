/*
오름차순으로 정렬(Sorting)하는 프로그램을 작성하시오. 오름차순이라는 것은 작은 것에서 큰 순서대로 나열하는 것이다.

예를 들어 3, 5, 1, 4, 2를 정렬하면 1, 2, 3, 4, 5가 된다.

입력형식
첫째 줄은 데이터의 개수 N(1≤N≤100)이 주어지고 두 번째 줄부터는 -100 이상 100 이하의 N개의 정수가 한 개의 공백으로 분리되어 주어진다.

출력형식
첫째 줄은 정렬하기 전의 데이터를 출력하고 둘째 줄은 정렬한 후의 데이터를 한 개의 공백으로 분리하여 출력하시오.

입력과 출력의 예
입력
10
9 6 5 4 3 0 2 1 1 7

출력
9 6 5 4 3 0 2 1 1 7
0 1 1 2 3 4 5 6 7 9
*/

/*
 * This APS is not ready
 */

#include <stdio.h>

int sort(int table[100]);
void print(int table[100]);

int main(void) {
  int cmx, table[100] = { 0 }, i, j, t;

  scanf("%d", &cmx);
  cmx--;

  for (i = 0; i <= cmx; i++) {
    scanf("%d", &table[i]);
  }

  for (i = 0; i <= cmx; i++) {
    printf("%d ", table[i]);
  }
  printf("\n");

  for (i = 0; i <= cmx; i++) {
    for (j = i; j <= cmx; j++) {
      if (j < i) {
        // NOTE: SWAP
        table[i] = t;
        table[j] = table[i];
        table[i] = table[j];
      }
    }
  }

  for (i = 0; i <= cmx; i++) {
    printf("%d ", table[i]);
  }
  printf("\n");

  return 0;
}
