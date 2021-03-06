/*
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

규칙(1) 같은 눈이 3개가 나오면 10,000원 + (같은 눈) * 1,000원의 상금을 받게 된다.
규칙(2) 같은 눈이 2개만 나오는 경우에는 1,000원 + (같은 눈) * 100원의 상금을 받게 된다.
규칙(3) 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈) * 100원의 상금을 받게 된다.

예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000 + 3 * 100으로 계산되어 1,300원을 받게 된다. 또 3개의 눈이 2, 2, 2로 주어지면 10,000 + 2 * 1,000으로 계산되어 12,000원을 받게 된다. 3개의 눈이 6, 2, 5로 주어지면 그 중 가장 큰 값이 6이므로 6 * 100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

입력형식
첫째 줄에 3개의 눈이 빈 칸을 사이에 두고 각각 주어진다.

출력형식
첫째 줄에 게임의 상금을 출력한다.

입력과 출력의 예(1)
입력
3 3 6

출력
1300

입력과 출력의 예(2)
입력
2 2 2

출력
12000

입력과 출력의 예(3)
입력
6 2 5

출력
600
*/

#include <stdio.h>

int main(void) {
	int cubes[3] = {
	  0
	}, i, j, same = 0, numberic = 0, prize = 0;

	scanf("%d %d %d", &cubes[0], &cubes[1], &cubes[2]);

	for (i = 0; i <= 2; i++) {
		for (j = i; j <= 2; j++) {
			if (cubes[i] == cubes[j]) {
				same++;
				if (i != j) {
					numberic = cubes[i];
				}
			}
		}
	}
	same = same / 2;

	switch (same) {
	case 3:
		prize = 10000 + (numberic * 1000);
		break;
	case 2:
		prize = 1000 + (numberic * 100);
	}

	if (same == 1) {
		for (i = 0; i <= 2; i++) {
			for (j = i; j <= 2; j++) {
				if (cubes[i] < cubes[j]) {
					int temporal = cubes[i];

					cubes[i] = cubes[j];
					cubes[j] = temporal;
				}
			}
		}

		prize = cubes[0] * 100;
	}
	printf("%d", prize);

	return 0;
}
