/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> com[101];
vector<int> visit(101);
int worm = -1;

void Virus(int n) {

	worm++;
	visit[n] = 1;

	for (int i = 0; i < com[n].size(); i++) {
		if (visit[com[n][i]] == 0) {
			visit[com[n][i]] = 1;
			Virus(com[n][i]);
		}
	}
}

int main() {

	int n, line;
	cin >> n >> line;

	for(int i = 0; i < line; i++){
		int x, y;
		cin >> x >> y;
		com[x].push_back(y);
		com[y].push_back(x);
	}

	for (int j = 1; j <= n; j++) {
		sort(com[j].begin(), com[j].end());
	}
	Virus(1);
	cout << worm;

	return 0;
}*/