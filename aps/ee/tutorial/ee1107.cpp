/*
어렸을 적에 오일러는 방바닥에 성냥을 쏟아버렸다.

어머니는 그다지 좋아하지 않으셨고 오일러에게 방에 흩어진 성냥을 조그마한 상자 안에 주워 담으라고 명령하였다. 하지만 오일러는 성냥의 길이가 상자에 맞지 않아 모든 성냥이 상자에 들어갈 수 없다는 것을 알아차렸다. 그래서 오일러는 상자에 들어갈 수 없는 성냥은 이웃집 쓰레기통에 버리기로(어머니가 이러한 사실을 알아차리지 못하길 바라면서) 결심하였다.

바닥에 쏟아진 성냥이 상자에 들어가기에 적합한지 결정할 수 있도록 오일러를 도와주어라. 성냥이 상자에 들어가기 위해서는 상자의 바닥에 성냥을 완전히 눞힐 수 있어야만 한다. 오일러는 성냥을 한 개씩 검사하여 상자에 들어가기에 적합한 성냥을 찾아야만 한다.

입력형식
첫째 줄에 세 개의 정수가 주어진다. 첫 번째 정수는 바닥에 쏟아진 성냥의 개수 N(1≤N≤50)을 나타내고 나머지 두 개의 정수는 상자의 바닥의 가로, 세로 크기를 나타내는 두 개의 정수 W와 H가 주어진다. (1≤W≤100, 1≤H≤100) 둘째 줄부터 성냥의 길이를 나타내는 1 이상 1,000 이하의 N개의 정수가 각 줄에 걸쳐서 주어진다.

출력형식
각각의 성냥을 상자에 담을 수 있으면 "YES"를, 만일 상자에 담을 수 없다면 "NO"를 각 줄에 걸쳐서 입력의 순서대로 출력한다.

입력과 출력의 예(1)
입력
5 3 4
3
4
5
6
7

출력
YES
YES
YES
NO
NO

입력과 출력의 예(2)
입력
2 12 17
21
20

출력
NO
YES
*/

#include <stdio.h>
#include <math.h>

struct Box {
	int width,
		height,
		crossline;
} box;

int toCollect;

int main(void) {
	int i, l, s;
	char resultTable[2][4] = {
		"NO",
		"YES"
	};

	scanf("%d %d %d", &toCollect, &box.width, &box.height);
	box.crossline = sqrt(
		box.width * box.width +
		box.height * box.height);

	for (i = 0; i <= toCollect - 1; i++) {
		scanf("%d", &l);
		s = 0;

		if (l <= box.width) {
			s = 1;
		}
		else if (l <= box.height) {
			s = 1;
		}
		else if (l <= box.crossline) {
			s = 1;
		}

		printf("%s\n", resultTable[s]);
	}
}
