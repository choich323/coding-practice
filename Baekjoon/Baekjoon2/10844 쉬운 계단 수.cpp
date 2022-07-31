/*#include <iostream>
#include <vector>
#define big 1000000000
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<vector<int>> step(n + 1, vector<int>(10));

	for (int i = 1; i < 10; i++) {
		step[1][i] = 1;
	}

	for (int j = 2; j <= n; j++) {
		for (int k = 0; k < 10; k++) {
			if (k == 0) {
				step[j][k] = step[j - 1][1] % big;
			}
			else if (k == 9) {
				step[j][k] = step[j - 1][8] % big;
			}
			else {
				step[j][k] = (step[j - 1][k - 1] + step[j - 1][k + 1]) % big;
			}
		}
	}

	long long sol = 0;
	for (int p = 0; p < 10; p++) {
		sol += step[n][p] % big;
	}

	cout << sol % big;

	return 0;
}*/