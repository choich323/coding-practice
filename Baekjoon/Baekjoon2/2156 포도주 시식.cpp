/*#include <iostream>
#include <vector>
using namespace std;

int max(int x, int y, int z) {
	int max1 = x >= y ? x : y;
	return max1 >= z ? max1 : z;
}

int main() {

	int n;
	cin >> n;

	vector<int> wine(n);

	for (int i = 0; i < n; i++) {
		cin >> wine[i];
	}

	vector<vector<int>> graph(n + 1, vector<int> (3));

	for (int j = 1; j <= n; j++) {
		for (int k = 0; k < 3; k++) {
			if (k == 0) {
				graph[j][k] = max(graph[j - 1][0], graph[j - 1][1], graph[j - 1][2]);
			}
			else if (k == 1) {
				graph[j][k] = graph[j - 1][0] + wine[j - 1];
			}
			else if (k == 2) {
				graph[j][k] = graph[j - 1][1] + wine[j - 1];
			}
		}
	}

	cout << max(graph[n][0], graph[n][1], graph[n][2]);

	return 0;
}*/