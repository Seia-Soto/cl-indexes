/*
만일 S가 (R1 + R2) / 2와 같다면 우리는 S를 두 개의 정수 R1과 R2의 평균값이라고 부른다. 이번 오일러의 생일을 맞이하여 오일러는 두 개의 정수 R1과 R2를 선물 받았다. 오일러는 즉시 두 수의 평균을 계산하였지만, 며칠이 지난 후 그만 R2를 잃어버리고 말았다. 오일러가 R2를 찾을 수 있도록 도와주어라.

입력형식
첫째 줄에는 -1,000 이상 1,000 이하인 두 개의 정수 R1과 S가 입력으로 주어진다.

출력형식
R2의 값을 첫째 줄에 출력하여라.

입력과 출력의 예(1)
입력
11 15

출력
19

입력과 출력의 예(2)
입력
4 3

출력
2
*/

#include <stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  printf("%d", (b*2)-a);

  return 0;
}
