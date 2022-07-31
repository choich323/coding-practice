/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, order;
vector<int> answer(100001);
vector<int> used(100001);
vector<int> graph[100001];

void DFS(int curNode) {

	used[curNode] = 1;
	answer[curNode] = ++order;

	for (int i = 0; i < graph[curNode].size(); i++) {
		if (used[graph[curNode][i]] == 0) {
			DFS(graph[curNode][i]);
		}
	}
}

int main() {
	int R;
	cin >> N >> M >> R;

	int u, v;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 0; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(R);

	for (int i = 1; i <= N; i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}*/