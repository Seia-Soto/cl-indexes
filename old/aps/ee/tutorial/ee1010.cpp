/*
오일러는 세 개의 정수, 그리고 등호와 네 개의 사칙연산(덧셈, 뺄셈, 곱셈, 나눗셈) 부호를 가지고 그의 수학 노트에 하나의 수학식을 완성하였다. 다른 과목을 공부하는 동안에. 그의 친구 페르마가 완성된 수학식 중에서 연산부호와 등호를 지워버리고 말았다. 남아있는 세 개의 정수를 가지고 다시 수학식을 복원할 수 있도록 오일러를 도와주어라.

입력형식
100보다 작은 세 개의 정수가 한 개의 공백으로 분리되어 첫째 줄에 주어진다.

출력형식
세 개의 정수(입력과 같은 순서대로), 한 개의 등호 그리고 한 개의 사칙연산 기호를 포함한 유효한 방정식을 첫째 줄에 출력하여라. 만일 여러 가지 답안이 존재한다면 그 중에 어느 것을 출력하여도 무방하다.

입력과 출력의 예(1)
입력
5 3 8

출력
5+3=8

입력과 출력의 예(2)
입력
5 15 3

출력
5=15/3

참고
입력 데이터에 대한 정답은 유일하지는 않지만 언제나 정답이 존재한다는 것은 보장한다.
*/

#include <stdio.h>

int main(void) {
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);

  // Case 1, if 'x' is result
  if ((y + z) == x)
    printf("%d=%d+%d", x, y, z);
  else if ((y * z) == x)
    printf("%d=%d*%d", x, y, z);
  else if ((y / z) == x)
    printf("%d=%d/%d", x, y, z);
  else if ((y - z) == x)
    printf("%d=%d-%d", x, y, z);
  // Case 2, if 'z' is result
  else if ((x + y) == z)
    printf("%d+%d=%d", x, y, z);
  else if ((x * y) == z)
    printf("%d*%d=%d", x, y, z);
  else if ((x / y) == z)
    printf("%d/%d=%d", x, y, z);
  else if ((x - y) == z)
    printf("%d-%d=%d", x, y, z);

  return 0;
}
