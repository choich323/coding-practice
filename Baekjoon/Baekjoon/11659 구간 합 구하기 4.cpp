/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, i, j;
	cin >> N >> M;
	vector<int> num(N);
	vector<int> sum(N);
	int add = 0;

	for (int k = 0; k < N; k++) {
		cin >> num[k];
		add = add + num[k];
		sum[k] = add;
	}
	while (M--) {
		cin >> i >> j;
		cout << sum[j - 1] - sum[i - 1] + num[i - 1] << '\n';
	}

	return 0;
}*/