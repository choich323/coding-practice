/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> num(N);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if (num[j] < num[k]) {
				int tmp = num[k];
				num[k] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int p = 0; p < N; p++) {
		cout << num[p] << '\n';
	}

	return 0;
}*/