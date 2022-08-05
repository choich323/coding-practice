/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<pair<int, int>> cor(n);

	for (int i = 0; i < n; i++) {
		cin >> cor[i].second >> cor[i].first;
	}

	sort(cor.begin(), cor.end());

	for (int j = 0; j < n; j++) {
		cout << cor[j].second << ' ' << cor[j].first << '\n';
	}

	return 0;
}*/