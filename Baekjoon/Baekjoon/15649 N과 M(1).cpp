/*
#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> answer(8);
vector<bool> used(8);

void Find(int curN, int node) {
	answer[node] = curN;   // 현재 N의 값을 현재 레벨에 적용
	used[curN - 1] = true; // 현재 N의 값을 사용한 것으로 체크

	if (node == M - 1) { // 최대 레벨에 도달하면
		for (int i = 0; i < M; i++) {
			cout << answer[i] << ' '; // 출력
		}
		cout << '\n'; // endl은 출력 내용을 출력 스트림에 반드시 넘어가게끔 만드는 과정이 있어서 더 느려진다.
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (used[i - 1] == false) { // 사용하지 않은 값이라면
				Find(i, node + 1);      // 재귀함수 실행
			}
		}
	}
	used[curN - 1] = false;
}

int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) { // N번 실행
		Find(i, 0);
	}
	
	return 0;
}*/