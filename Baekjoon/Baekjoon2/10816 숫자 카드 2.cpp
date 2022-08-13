/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	cin >> m;
	int target;
	for (int j = 0; j < m; j++) {
		cin >> target;
		cout << upper_bound(num.begin(), num.end(), target) - lower_bound(num.begin(), num.end(), target) << ' ';
	}

	return 0;
}*/