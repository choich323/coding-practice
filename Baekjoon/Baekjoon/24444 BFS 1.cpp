/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> answer(100001); // 방문 순서
vector<int> visit(100001);   // 방문했는지 체크
queue<int> q;
vector<int> vertex[100001]; 

void BFS(int R) {

	// 노드 순서가 아니라 각 노드가 몇 번째로 방문하는 곳인지를 출력해야 함

	visit[R] = 1;
	q.push(R);

	int order = 1;
	answer[R] = order;

	while (!q.empty()) {

		int x = q.front();
		q.pop();
		answer[x] = order++;

		for (int i = 0; i < vertex[x].size(); i++) {
			int next = vertex[x][i];
			if (visit[next] == 1)
				continue;
			q.push(next);
			visit[next] = 1;
		}
	}


	/*
	visit[R] = 1;
	queue.push_back(R);
	answer[0] = R;
	int order = 1;

	while (order != queue.size()) {
		R = queue[order];
		answer[order] = R;
		order++;
		for (int i = 0; i < vertex[R].size(); i++) {
			if (visit[vertex[R][i]] == 0) {
				visit[vertex[R][i]] = 1;
				queue.push_back(vertex[R][i]);
			}
		}
	}*/


	/*
	answer[order] = R; // 방문한 노드 넣기

	for (int i = 0; i < vertex[R].size(); i++) { // vertex[1] 2 4 ...
		if (visit[vertex[R][i]] == 0) {				//  큐에 넣은적이 없으면
			queue.push_back(vertex[R][i]);     //   큐에 노드 값을 넣는다
			visit[vertex[R][i]] = 1;			//  넣은 기록을 남기기
		}
	}

	order++;	// [ 1, 2, 4       ]
	
	if(order != queue.size())
		BFS(queue[order]);
	
}

int main(){
	int N, M, R;
	cin >> N >> M >> R;
	int u, v;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		vertex[u].push_back(v);
		vertex[v].push_back(u);
	}

	for (int j = 0; j <= N; j++) {
		sort(vertex[j].begin(), vertex[j].end());
	}
	
	//queue.push_back(R);
	//visit[R] = 1;
	BFS(R);

	for (int i = 1; i <= N; i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}*/