/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	vector<int> up(n, 1);
	vector<int> down(n, 1);
	for (int j = 1; j < n; j++) {
		for (int k = 0; k < j; k++) {
			if (num[j] > num[k] && up[j] < up[k] + 1) {
				up[j] = up[k] + 1;
			}
		}
	}

	for (int j = n - 2; j >= 0; j--) {
		for (int k = n - 1; k > j; k--) {
			if (num[j] > num[k] && down[j] < down[k] + 1) {
				down[j] = down[k] + 1;
			}
		}
	}

	int max = 0;
	for (int p = 0; p < n; p++) {
		max = up[p] + down[p] - 1 > max ? up[p] + down[p] - 1 : max;
	}
	cout << max;

	return 0;
}*/