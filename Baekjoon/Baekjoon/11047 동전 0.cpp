/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K, answer = 0;
	cin >> N >> K;
	vector<int> coins(N);

	for (int i = 0; i < N; i++) {
		cin >> coins[i];
	}

	for (int j = N - 1; j >= 0; j--) {
		if (K - coins[j] >= 0) {
			answer = answer + K / coins[j];
			K = K % coins[j];
		}
	}
	cout << answer;

	return 0;
}*/