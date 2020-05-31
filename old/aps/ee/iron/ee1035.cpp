/*
오일러 마법 학교의 학생들 N(1≤N≤100)명의 점수 M(1≤M≤100)을 입력받아 등수를 구하는 프로그램을 작성하시오.

- 점수가 같을 경우는 같은 등수로 인정한다.
- 등수는 본인의 점수보다 큰 점수가 있을 경우 등수는 "학생수+1"등으로 한다.

예를 들어 100점, 80점, 80점, 50점, 40점이 있다면 100점은 1등이고, 80점 2명은 2등이고, 50점은 4등이고, 40점은 5등이 된다. (2등이 2명이기 때문에 3등은 없다.)

입력형식
첫째 줄에는 학생의 수 N(1≤N≤100)이 주어지고 둘째 줄에는 N명의 학생에 대한 점수를 한 개의 공백으로 분리되어 주어진다. 점수는 양의 정수로 주어진다.

출력형식
첫째 줄에 해당 학생의 등수를 입력의 순서대로 한 개의 공백으로 분리하여 출력하도록 한다.

입력과 출력의 예
입력
5
100 80 80 50 40

출력
1 2 2 4 5
*/

#include <stdio.h>

int main(void) {
  int count, data[100], result[100], i, j, k;

  scanf("%d", &count);

  for (i = 0; i <= count - 1; i++)
    scanf("%d", &data[i]);

  for (i = 0; i <= count - 1; i++) {
    k = 0;

    for (j = 0; j <= count - 1; j++) {
      if (data[i] < data[j])
        k++;
    }
    result[i] = k;
  }
  for (i = 0; i <= count - 1; i++)
    printf("%d ", result[i] + 1);

  return 0;
}