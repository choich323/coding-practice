/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sol, n, cnt;
vector<vector<int>> house(26, vector<int>(26));
vector<vector<int>> used(26, vector<int>(26));
vector<int> num;

void DFS(int x, int y) {

	used[x][y] = 1;
	cnt++;

	if (y + 1 <= n) {
		if (house[x][y + 1] == 1 && used[x][y + 1] == 0) {
			DFS(x, y + 1);
		}
	}
	if (y - 1 > 0) {
		if (house[x][y - 1] == 1 && used[x][y - 1] == 0) {
			DFS(x, y - 1);
		}
	}
	if (x + 1 <= n) {
		if (house[x + 1][y] == 1 && used[x + 1][y] == 0) {
			DFS(x + 1, y);
		}
	}
	if (x - 1 > 0) {
		if (house[x - 1][y] == 1 && used[x - 1][y] == 0) {
			DFS(x - 1, y);
		}
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			char tmp;
			cin >> tmp;
			house[i][j] = tmp - 48;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (used[i][j] == 0 && house[i][j] == 1) {
				sol++;
				DFS(i, j);
				num.push_back(cnt);
				cnt = 0;
			}
		}
	}

	cout << sol << '\n';
	if (!num.empty()) {
		sort(num.begin(), num.end());
		for (int k = 0; k < num.size(); k++) {
			cout << num[k] << '\n';
		}
	}

	return 0;
}*/