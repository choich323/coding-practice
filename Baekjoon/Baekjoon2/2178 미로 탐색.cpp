/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n , m, sol;

int bfs(vector<vector<int>>& maze) {

	
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