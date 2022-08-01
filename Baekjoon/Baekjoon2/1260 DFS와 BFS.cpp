/*#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<int> num[1001];
vector<int> D_visit(1001);
vector<int> B_visit(1001);
vector<int> D_order;
vector<int> B_order;
queue<int> q;

void DFS(int node) {

	D_order.push_back(node);
	D_visit[node] = 1;

	for (unsigned int i = 0; i < num[node].size(); i++) {
		if (D_visit[num[node][i]] != 1) {
			DFS(num[node][i]);
		}
	}
}

void BFS(int node) {
	
	for (unsigned int i = 0; i < num[node].size(); i++) {
		int key = num[node][i];
		if (B_visit[key] != 1) {
			q.push(key);
			B_visit[key] = 1;
			B_order.push_back(key);
		}
	}

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		BFS(tmp);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;

	int a, b;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		num[a].push_back(b);
		num[b].push_back(a);
	}

	for (int j = 1; j <= n; j++) {
		sort(num[j].begin(), num[j].end());
	}
	
	// 아래의 경우도 정렬이 가능하지만, 실제 간선 갯수에 관계없이 모든 벡터의 원소를 정렬하므로 위의 정렬이 근소하게나마 효율적일 듯
	// 문제와 달리 최대 정점의 갯수가 없을 경우 2차원 벡터를 쓰고 아래의 정렬을 사용하는 것이 유리할 것으로 생각됨
	//for (auto& j : num) {
	//	sort(j.begin(), j.end());
	//}

	DFS(v);

	B_visit[v] = 1;
	B_order.push_back(v);
	BFS(v);

	for (unsigned int k = 0; k < D_order.size(); k++) {
		cout << D_order[k] << ' ';
	}
	cout << '\n';
	for (unsigned int k = 0; k < B_order.size(); k++) {
		cout << B_order[k] << ' ';
	}

	return 0;
}*/