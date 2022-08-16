/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> used(101, vector<int> (101));
vector<vector<int>> sol(101, vector<int>(101));

int bfs(vector<vector<int>>& maze) {

	queue<pair<int, int>> q;
	q.push({ 1,1 });
	sol[1][1] = 1;
	used[1][1] = 1;

	while (true) {
		int x = q.front().first; int y = q.front().second; // 좌표 설정
		if (x == n && y == m) {
			break;
		}
		q.pop(); // 앞의 값 제거

		if (y + 1 <= m) {
			if (maze[x][y + 1] == 1 && used[x][y + 1] == 0) {
				q.push({ x, y + 1 });
				used[x][y + 1] = 1;
				sol[x][y + 1] = sol[x][y] + 1;
			}
		}
		if (y - 1 > 0) {
			if (maze[x][y - 1] == 1 && used[x][y - 1] == 0) {
				q.push({ x, y - 1 });
				used[x][y - 1] = 1;
				sol[x][y - 1] = sol[x][y] + 1;
			}
		}
		if (x + 1 <= n) {
			if (maze[x + 1][y] == 1 && used[x + 1][y] == 0) {
				q.push({ x + 1, y });
				used[x + 1][y] = 1;
				sol[x + 1][y] = sol[x][y] + 1;
			}
		}
		if (x - 1 > 0) {
			if (maze[x - 1][y] == 1 && used[x - 1][y] == 0) {
				q.push({ x - 1, y });
				used[x - 1][y] = 1;
				sol[x - 1][y] = sol[x][y] + 1;
			}
		}
	}
	return sol[n][m];
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	char tmp;
	vector<vector<int>> maze(n + 1, vector<int> (m + 1));
	// creating maze
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> tmp;
			maze[i][j] = tmp - 48;
		}
	}

	cout << bfs(maze);

	return 0;
}*/