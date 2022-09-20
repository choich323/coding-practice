/*#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int L;

void BFS(int startX, int startY, int endX, int endY) {

	int move[8][2] = { {2, 1}, {2,-1}, {1, 2}, {1,-2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1} };
	vector<vector<int>> visit(L, vector<int> (L));
	vector<vector<int>> answer(L, vector<int> (L));
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	while (true) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x == endX && y == endY) {
			cout << answer[x][y] << '\n';
			break;
		}
		else {
			for (int i = 0; i < 8; i++) {
				int X = x + move[i][0];	int Y = y + move[i][1];
				if (X < L && X >= 0 && Y < L && Y >= 0 && visit[X][Y] == 0) {
					q.push({ X, Y });
					visit[X][Y] = 1;
					answer[X][Y] = answer[x][y] + 1;
				}
			}
		}
	}
}

int main() {

	int n;
	cin >> n;

	int startX, startY, endX, endY;
	for (int i = 0; i < n; i++) {
		cin >> L >> startX >> startY >> endX >> endY;
		BFS(startX, startY, endX, endY);
	}

	return 0;
}*/