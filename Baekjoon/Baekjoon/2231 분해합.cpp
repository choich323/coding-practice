/*#include <iostream>
using namespace std;

int Min(int n, int num) {

	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num = num / 10;
	}
	if (sum == n) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	int n;
	cin >> n;
	int min = 0;
	for (int i = 1; i < n; i++) {
		min = Min(n, i);
		if (min > 0) {
			min = i;
			break;
		}
	}
	cout << min;

	return 0;
}*/