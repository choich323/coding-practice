/*#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> answer(7);

void Find(int key, int level);

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		Find(i + 1, 0);
	}

	return 0;
}

void Find(int key, int level) {

	if (level == M) {
		for (int i = 0; i < M; i++) {
			cout << answer[i] << ' ';
		}
		cout << '\n';
	}
	else {
		answer[level] = key;
		for (int j = 1; j <= N; j++) {
			Find(j, level + 1);	
			if (level + 1 == M)
				break;
		}
	}
}*/