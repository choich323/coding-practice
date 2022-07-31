/*#include <iostream>
#include <vector>
using namespace std;

vector<int> answer(10);
int N, M;

void Find(int value, int level) {

	answer[level] = value;

	if (level == M) {
		for (int i = 1; i <= M; i++) {
			cout << answer[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = value; i <= N; i++) {
			Find(i, level + 1);
		}
	}
}

int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		Find(i, 1);
	}

	return 0;
}*/