/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> line (n);

	for (int i = 0; i < n; i++) {
		cin >> line[i].first >> line[i].second;
	}

	sort(line.begin(), line.end());

	vector<int> num(n, 1);
	int remain = 0;
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < j; k++) {
			if (line[j].second > line[k].second && num[j] < num[k] + 1) {
				num[j] = num[k] + 1;
			}
		}
		remain = max(num[j], remain);
	}
	cout << n - remain;

	return 0;
}*/