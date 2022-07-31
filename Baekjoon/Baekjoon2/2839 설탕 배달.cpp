/*#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	int result = N / 5;
	int three = (N % 5) % 3;
	if (three == 0) {
		cout << result + (N % 5 / 3);
	}
	else {
		bool possible = false;
		int n = N % 5;
		int i;
		for (i = 0; i <= N / 5; i++) {
			if (n % 3 == 0) {
				possible = true;
				break;
			}
			n += 5;
		}
		if(possible)
			cout << n / 3 + (N - n) / 5;
		else {
			cout << -1;
		}
	}

	return 0;
}*/