/*
1994년 Microsoft Encarta(백과사전 프로그램)에 있는 수의 이론으로 부터 : 만일 a = bc인 세 정수 a, b, c가 주어진다면 a는 b또는 c의 배수이고 b 또는 c는 a의 약수이거나 소인수이다. 만일 c가 1 또는 -1이 아니라면 b를 a의 진약수라 부른다. -4, 0, 2, 10과 같이 0을 포함해서 2의 배수인 수를 짝수라 하고, -5, 1, 3, 9와 같이 짝수가 아닌 모든 수를 홀수라 한다. 어떤 양의 정수에서 양수로만 이루어진 진약수의 총합이 자기 자신과 같은 수를 완전수라 한다. 예를 들어서 6은 1 + 2 + 3이고, 28은 1 + 2 + 4 + 7 + 14이므로 6과 28은 완전수라 한다. 또한 진약수의 총합이 자기 자신보다 작은 수를 부족수라 하고 진약수의 총합이 자기 자신보다 큰 수를 과잉수라 한다. 따라서 9의 진약수는 1과 3이므로 부족수이고 12의 진약수는 1, 2, 3, 4, 6이므로 과잉수이다. 숫자들이 주어지면 그 수가 완전수인지, 부족수인지, 과잉수인지를 판별하여라.

입력형식
입력은 세 개의 테스트 케이스로 구성된다. 완전수인지, 부족수인지, 과잉수인지를 판별하기 위한 세 개의 양의 정수(60,000보다 크지 않는)가 첫째 줄에 한 개의 공백을 사이에 두고 주어진다.

출력형식
입력 받은 정수가 만일 완전수이면 "PERFECT"를 출력하고, 만일 부족수이면 "DEFICIENT"를 출력하고, 과잉수이면 "ABUNDANT"를 출력하여라. 입력 받은 첫 번째 정수는 첫 번째 줄에, 입력 받은 두 번째 정수는 두 번째 줄에, 입력 받은 세 번째 정수는 세 번째 줄에 출력한다.

입력과 출력의 예
입력
6 9 12

출력
PERFECT
DEFICIENT
ABUNDANT
*/

#include <stdio.h>
int getPrs(int toEvaluate);
int Evaluate(int toEvaluate);

int currentWorkflow;

int main(void) {
	int i, taskQueue[3];
	char resultSheets[3][10] = {
		"PERFECT",
		"DEFICIENT",
		"ABUNDANT"
	};

	scanf("%d %d %d", &taskQueue[0], &taskQueue[1], &taskQueue[2]);

	for (i = 0; i <= 2; i++) {
		currentWorkflow = taskQueue[i];

		printf("%s\n",
			resultSheets[Evaluate(getPrs(taskQueue[i]))]);
	}

	return 0;
}

int getPrs(int toEvaluate) {
	int i,
		prList[60000];

	for (i = 1; i <= toEvaluate - 1; i++) {
		prList[i] = 0;

		if (!(toEvaluate % i)) {
			prList[i] = 1;
		}
	}

	return prList;
}
int Evaluate(int *prList) {
	int i, sum = 0, status = 0;

	for (i = 1; i <= currentWorkflow - 1; i++) {
		if (prList[i]) {
			sum += i;
		}
	}

	if (sum > currentWorkflow) {
		status = 2;
	}
	else if (sum == currentWorkflow) {
		status = 0;
	}
	else if (sum < currentWorkflow) {
		status = 1;
	}

	return status;
}
