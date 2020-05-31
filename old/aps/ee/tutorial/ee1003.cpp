/*
1부터 N(1≤N≤1,000)까지의 짝수의 합과 홀수의 합을 출력하는 프로그램을 작성하시오.

입력형식
첫째 줄에 1 이상 1,000 이하의 양의 정수 N이 주어진다.

출력형식
첫째 줄에는 N까지의 짝수의 합을 출력하고 둘째 줄에는 N까지의 홀수의 합을 출력하시오.

입력과 출력의 예
입력
10

출력
30
25
*/

#include <stdio.h>

int main(void) {
  int n=0, even=0, odd=0, i;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i%2) {
      odd+=i;
    } else {
      even+=i;
    }
  }

  printf("%d\n%d", even, odd);

  return 0;
}
