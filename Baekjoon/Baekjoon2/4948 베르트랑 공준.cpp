/*#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<int> che(246913);

	int count = 1;
	che[1] = 0;
	che[2] = 1;
	for (int i = 3; i <= 246912; i++) {
		bool sosu = true;
		if (i % 2 == 0) {
			che[i] = count;
			continue;
		}
		for (int j = 3; j <= sqrt(i); j++) {
			if (i % j == 0) {
				sosu = false;
				che[i] = count;
				break;
			}
			j++;
		}
		if (sosu) {
			count++;
			che[i] = count;
		}
	}

	while (true) {
		cin >> n;
		if (n == 0) {
			break;
		}
		cout << che[n * 2] - che[n] << '\n';
	}

	return 0;
}*/