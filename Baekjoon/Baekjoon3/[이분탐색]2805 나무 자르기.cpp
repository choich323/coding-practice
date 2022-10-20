/*#include <iostream>
#include <vector>
using namespace std;

int main() {
	int answer = 0;
	int n, m;
	cin >> n >> m;
	int min = 0, max = 0;
	vector<int> tree(n);
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		if (tree[i] > max) {
			max = tree[i];
		}
	}

	while (min <= max) {
		int mid = (min + max) / 2;
		long long sum = 0;
		for (auto elem : tree) {
			if (elem - mid > 0) {
				sum += elem - mid;
			}
		}

		if (sum < m) {
			max = mid - 1;
		}
		else if (sum >= m) {
			min = mid + 1;
			answer = mid;
		}
	}
	cout << answer;
	return 0;
}*/