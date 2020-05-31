/*
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.

입력형식
첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100보다 작다.

출력형식
첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.

입력과 출력의 예
입력
3
29
38
12
57
74
40
85
61

출력
85
8
*/

#include <stdio.h>

int main(void) {
  int i, k, max[2];

  scanf("%d", &max[1]);
  max[0] = 1;

  for (i = 2; i <= 9; i++) {
    scanf("%d", &k);

    if (k > max[1]) {
      max[0] = i;
      max[1] = k;
    }
  }

  printf("%d\n%d", max[1], max[0]);

  return 0;
}