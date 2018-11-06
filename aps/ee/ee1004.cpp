/*
1부터 N까지 "홀수2 - 짝수2"을 구하는 프로그램을 작성하시오.

예를 들어 입력으로 5가 입력되면 12 - 22 + 32 - 42 + 52 의 값을 출력한다.

입력형식
첫째 줄에 한 개의 양의 정수 N이 주어진다. N은 1 이상 1,000 이하의 양의 정수이다.

출력형식
첫째 줄에 결과를 출력한다.

입력과 출력의 예
입력
10

출력
-55
*/

#include <stdio.h>

int main(void) {
  int n=0, i;

  scanf("%d", &n);

  for (i=0; i<=n; i++)
    if (i%2)
      n+=i*i;
    else
      n-=i*i;

  printf("%d", n);
}
