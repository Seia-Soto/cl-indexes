/*
입력으로 주어지는 N개의 값들 중 가장 최댓값과 최솟값을 찾는 프로그램을 작성하시오. 입력으로 주어지는 N의 개수는 최대 100개이고 주어지는 값들은 -10,000부터 10,000 이하의 정수이다.

입력형식
첫째 줄은 데이터의 개수 N(1≤N≤100)이 주어진다. 둘째 줄에는 -10,000 이상 10,000 이하의 N개의 정수가 한 개의 공백으로 분리되어 주어진다.

출력형식
첫째 줄은 최댓값을 출력하고 둘째 줄은 최솟값을 출력하시오.

입력과 출력의 예
입력
12
567 455 333 678 245 333 15 444 333 678 879 321

출력
879
15
*/

#include <stdio.h>

int main(void) {
	int container[100], max, min, st, i, j;

	scanf("%d", &st);

	for (i = 0; i <= st - 1; i++) {
		scanf("%d", &container[i]);
	}

	max = min = container[0];

	for (i = 1; i <= st - 1; i++) {
		container[i] > max ? max = container[i] : container[i] < min ? min = container[i] : 0;
	}

	printf("%d\n%d", max, min);

	return 0;
}
