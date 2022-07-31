/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max(int x, int y) {
	return x >= y ? x : y;
}

int main() {

	int n;
	cin >> n;

	int level = 1;
	vector<vector<int>> tri(n, vector<int> (n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < level; j++) {
			cin >> tri[i][j];
		}
		level++;
	}

	vector<vector<int>> sum(n, vector<int> (n));
	sum[0][0] = tri[0][0];
	level = 2;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < level; j++) {
			
			if (j == 0) {
				sum[i][j] = tri[i][j] + sum[i - 1][j];
			}
			else if (j == level - 1) {
				sum[i][j] = tri[i][j] + sum[i - 1][j - 1];
			}
			else {
				sum[i][j] = tri[i][j] + max(sum[i - 1][j], sum[i - 1][j - 1]);
			}
		}
		level++;
	}

	sort(sum[n - 1].begin(), sum[n - 1].end());
	cout << sum[n - 1][n - 1];

	return 0;
}*/