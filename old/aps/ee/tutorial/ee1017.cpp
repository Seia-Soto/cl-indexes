/*
여러분은 방학을 맞아 아르바이트를 하기로 하였다. 일하기로 한 곳은 다른 곳과는 달리, 일당이 고정된 것이 아니고 다음과 같은 규칙을 따르고 있다.

① 첫 날의 일당은 1원
② 둘째 날의 일당은 1원
③ 2i번째 날의 일당은 i번째 날의 일당과 같다.
④ (2i + 1)번째 날의 일당은 i번째 날의 일당과 (i + 1)번째 날의 일당의 합과 같다.

여러분은 n일 동안 일하기로 계약을 했다. 그러나 불행히도 계약 기간 중 하루는 일할 수 없게 되었는데, 만약 그날의 일당이 일하기로 한 기간 중 가장 큰 날이라면 매우 억울할 것이다. 하지만, 일당이 별로 크지 않다면 억울함은 줄어들 것이다. 이 문제를 풀기 위해서, 일하기로 한 기간이 주어지면 가장 많이 일당을 받는 날의 일당을 구하는 프로그램을 작성하시오.

입력형식
첫째 줄에는 일하기로 한 날 수 N(1≤N≤99,999)이 주어진다.

출력형식
첫째 줄에 최대 일당을 출력한다.

입력과 출력의 예(1)
입력
5

출력
3

입력과 출력의 예(2)
입력
10

출력
4
*/

#include <stdio.h>

int main(void) {
	int i, pay[99999] = { 0, 1 }, maximumPayout = 0, daysForWork;

	scanf("%d", &daysForWork);

	for (i = 1; i <= daysForWork; i++) {
		pay[2 * i] = pay[i];
		pay[(2 * i) + 1] = pay[i] + pay[i + 1];

    if (2 * i > daysForWork)
      break;
	}
	for (i = 1; i <= daysForWork; i++) {
		if (pay[i] > maximumPayout) {
			maximumPayout = pay[i];
		}
	}

	printf("%d", maximumPayout);

	return 0;
}
