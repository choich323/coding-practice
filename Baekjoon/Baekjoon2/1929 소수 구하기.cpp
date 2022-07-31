/*#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		bool so = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				so = false;
				break;
			}
		}
		if (so && i != 1) {
			cout << i << '\n';
		}
	}

	return 0;
}*/