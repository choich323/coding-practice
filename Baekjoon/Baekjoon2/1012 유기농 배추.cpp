/*#include <iostream>
#include <vector>
using namespace std;

int t, m, n, k, result;

void DFS(int x, int y, vector<vector<int>>& pos, vector<vector<int>>& used) {

	used[x][y] = 1;

	if (y + 1 < n) {
		if (pos[x][y + 1] == 1 && used[x][y + 1] == 0) {
			DFS(x, y + 1, pos, used);
		}
	}
	if (y - 1 >= 0) {
		if (pos[x][y - 1] == 1 && used[x][y - 1] == 0) {
			DFS(x, y - 1, pos, used);
		}
	}
	if (x + 1 < m) {
		if (pos[x + 1][y] == 1 && used[x + 1][y] == 0) {
			DFS(x + 1, y, pos, used);
		}
	}
	if (x - 1 >= 0) {
		if (pos[x - 1][y] == 1 && used[x - 1][y] == 0) {
			DFS(x - 1, y, pos, used);
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t; 
	while (t--) {
		cin >> m >> n >> k;

		vector<vector<int>> pos(m, vector<int> (n));
		vector<vector<int>> used(m, vector<int> (n));

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			pos[x][y] = 1;
		}

		for (int a = 0; a < m; a++) {
			for (int b = 0; b < n; b++) {
				if (pos[a][b] == 1 && used[a][b] == 0) {
					DFS(a, b, pos, used);
					result++;
				}
			}
		}

		cout << result << '\n';
		result = 0;
	}
	return 0;
}*/