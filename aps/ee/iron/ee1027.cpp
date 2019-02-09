/*
우박수(Hailstone Sequence)는 다음과 같은 계산 과정을 반복한다.

- 만일 N이 짝수이면, N을 2로 나눈다.
- 만일 N이 홀수이면, N에 3을 곱한 후 1을 더한다.

어떤 양의 정수 N이 주어졌을 때, 아직 증명은 되지 않았지만 위와 같은 과정을 반복한다면 언제나 사이클이 생길 것이며(4, 2, 1, 4, 2, 1, …), 마지막에는 1로 끝나리라 추측이 된다. 이것을 콜라츠 추측(Collatz Conjecture)라고 하며, 이러한 수들을 우박수(Hailstone Sequence)라 부르기도 한다.

입력형식
첫째 줄에 한 개의 양의 정수 N(1≤N≤100,000)이 주어진다.

출력형식
양의 정수 N을 포함하여 수열이 끝날 때까지 수열에 포함되었던 가장 큰 양의 정수가 어떤 수인지 구하여 첫째 줄에 출력하여라.

입력과 출력의 예(1)
입력
1

출력
1

입력과 출력의 예(2)
입력
3

출력
16
*/

#include <stdio.h>

int makeHailstone(int number);

int main(void) {
  int initd, max = 0, k;

  scanf("%d", &initd);
  max = initd;

  while (initd != 1) {
    initd = makeHailstone(initd);
    if (initd > max)
      max = initd;
  }

  printf("%d", max);

  return 0;
}

int makeHailstone(int number) {
  if (number % 2) {
    number = (number * 3) + 1;
  } else {
    number = number / 2;
  }
  return number;
}
