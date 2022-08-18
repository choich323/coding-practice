/*#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int n, k;
vector<int> sol(100001);
vector<int> visit(100001);

int bfs() {

	int x;
	queue<int> q;
	q.push(n);
	sol[n] = 0;
	visit[n] = 1;

	while (true) {

		x = q.front();
		q.pop();

		if (x == k) {
			break;
		}
		else {
			if (x + 1 <= 100000) {
				if (visit[x + 1] != 1) {
					sol[x + 1] = sol[x] + 1;
					q.push(x + 1);
					visit[x + 1] = 1;
				}
			}

			if (x > 0) {
				if (visit[x - 1] != 1) {
					sol[x - 1] = sol[x] + 1;
					q.push(x - 1);
					visit[x - 1] = 1;
				}
			}

			if (x * 2 <= 100000) {
				if (visit[x * 2] != 1) {
					sol[x * 2] = sol[x] + 1;
					q.push(x * 2);
					visit[x * 2] = 1;
				}
			}
		}
	}
	return sol[k];
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >> n >> k;

	cout << bfs();

	return 0;
}*/