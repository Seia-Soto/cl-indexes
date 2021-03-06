/*
오일러는 제국의 모든 시민들을 제2의 오일러(Euler)로 만드는 오일러 프로젝트(Euler Project)를 시작하기로 하였다.

1부터 N(1≤N≤1,000) 미만의 정수 중에서 3의 배수이거나 5의 배수인 모든 정수들의 총합을 구하여라. 만일 N이 10 미만이라면 3 또는 5의 배수인 수들은 3, 5, 6, 9가 있고, 이 수들의 합은 23이 된다.

입력형식
첫째 줄에 한 개의 양의 정수 N이 주어진다.

출력형식
N 미만의 3 또는 5의 배수인 모든 정수들의 총합을 첫째 줄에 출력하여라.

입력과 출력의 예
입력
10

출력
23
*/

#include <stdio.h>

int main(void) {
  int n=0, s=0, i;

  scanf("%d", &n);

  for (i=1; i<n; i++)
    if (i%5 == 0 || i%3 == 0)
      s+=i;

  printf("%d", s);
}
