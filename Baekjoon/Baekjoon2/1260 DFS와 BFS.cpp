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
	
	// �Ʒ��� ��쵵 ������ ����������, ���� ���� ������ ������� ��� ������ ���Ҹ� �����ϹǷ� ���� ������ �ټ��ϰԳ��� ȿ������ ��
	// ������ �޸� �ִ� ������ ������ ���� ��� 2���� ���͸� ���� �Ʒ��� ������ ����ϴ� ���� ������ ������ ������
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