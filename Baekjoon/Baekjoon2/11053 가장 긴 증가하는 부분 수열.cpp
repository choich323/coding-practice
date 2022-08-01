/*#include <iostream>
#include <vector>
using namespace std;

int max(int x, int y) {
	return x >= y ? x : y;
}

int main() {

	int n;
	cin >> n;
	
	vector<int> num(n);
	vector<int> sol(n, 1);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int result = 0;
	for (int j = 0; j < n; j++) {
		for (int k = 0; k < j; k++) {
			if (num[j] > num[k] && sol[j] < sol[k] + 1) {
				sol[j] = sol[k] + 1;
			}
		}
		result = max(result, sol[j]);
	}
	cout << result;

	return 0;
}*/