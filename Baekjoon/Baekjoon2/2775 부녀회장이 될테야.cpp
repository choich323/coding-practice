/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int T, k, n;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;

		vector<vector<int>> aprt(k + 1, vector<int>(n));
		for (int a = 1; a <= n; a++) {
			aprt[0][a - 1] = a;
		}
		for (int b = 1; b <= k; b++) {
			aprt[b][0] = 1;
		}
		for (int j = 1; j < k + 1; j++) {
			for (int p = 1; p < n; p++) {
				aprt[j][p] = aprt[j - 1][p] + aprt[j][p - 1];
			}
		}
		cout << aprt[k][n - 1] << '\n';
	}

	return 0;
}*/