/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int V, E, R;
vector<int> graph[100001];
vector<int> visit(100001);
vector<int> sol(100001);
vector<int> queue;
int Qindex = 0;

int pop() {
	int result = queue[Qindex];
	Qindex++;
	return result;
}

void BFS(int key) {

	visit[key] = 1;
	queue.push_back(key);
	int order = 1;

	while (queue.size() > Qindex) {

		int x = pop();
		sol[x] = order;
		order++;

		for (int i = 0; i < graph[x].size(); i++) {
			if (visit[graph[x][i]] == 0) {
				queue.push_back(graph[x][i]);
				visit[graph[x][i]] = 1;
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> V >> E >> R;

	int u, v;
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int j = 0; j <= V; j++) {
		sort(graph[j].begin(), graph[j].end(), greater<>());
	}

	BFS(R);

	for (int k = 1; k <= V; k++) {
		cout << sol[k] << '\n';
	}

	return 0;
}*/