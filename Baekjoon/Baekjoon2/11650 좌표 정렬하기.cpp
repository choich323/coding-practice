/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<pair<int, int>> cor(n);
	
	for (int i = 0; i < n; i++) {
		cin >> cor[i].first >> cor[i].second;
	}

	sort(cor.begin(), cor.end());

	for (int j = 0; j < n; j++) {
		cout << cor[j].first << ' ' << cor[j].second << '\n';
	}

	return 0;
}*/