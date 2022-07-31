/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int V, E, R;
	cin >> V >> E >> R;

	vector<vector<int>> graph(V + 1, vector<int>(V + 1));
	vector<int> visit(V + 1);
	vector<int> sol(V + 1);
	sol[R] = 1;
	visit[R] = 1;

	int order = 2;
	int u, v;

	// graph 만들기
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		graph[u][v] = 1;
		graph[v][u] = 1;

	}

	bool loop = true;
	int item = R;
	while (loop) {
		for (int j = V; j > 0; j--) {
			if (graph[item][j] == 1 && visit[j] == 0) {
				visit[j] = 1;
				item = j;
				sol[j] = order;
				order++;
				break;
			}
			if (j == 1)
				loop = false;
		}
	}

	for (int k = 1; k <= V; k++) {
		cout << sol[k] << '\n';
	}

	return 0;
}*/

/*
다른 풀이 (메모리 절약)

#include <iostream>
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
		sort(graph[i].begin(), graph[i].end(), greater<>());
	}

	DFS(R);

	for (int i = 1; i <= N; i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}


*/