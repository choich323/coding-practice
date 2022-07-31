/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> counting(10001);

	int x, max = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (max < x)
			max = x;
		counting[x]++;
	}
	
	for (int j = 1; j <= max; j++) {
		if (counting[j] != 0) {
			for (int k = 0; k < counting[j]; k++) {
				cout << j << '\n';
			}
		}
	}

	return 0;
}*/