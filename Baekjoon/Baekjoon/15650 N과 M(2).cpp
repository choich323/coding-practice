/*#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> num(8);
vector<bool> used(8);
void Find(int level, int curN);

int main() {
	cin >> N >> M;

	for(int i = 0; i <= N - M; i++)
		Find(0, i + 1);

	return 0;
}

void Find(int level, int curN) {
	
	num[level] = curN;
	used[curN - 1] = true;

	if (level == M - 1) {
		for (int i = 0; i < M; i++) {
			cout << num[i] << ' ';
		}
		cout << '\n';
	}
	else {
		// 반복문 넣기
		for (int i = curN; i <= N; i++) {
			if (used[i - 1] == false) {

				Find(level + 1, i);
			}
		}
	}
	used[curN - 1] = false;
}*/