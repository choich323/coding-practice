/*#include <iostream>
using namespace std;

int six(int num) {

	int con = 0;
	while (num != 0) {
		if (num % 10 == 6) {
			con++;
		}
		else {
			con = 0;
		}
		num = num / 10;
		if (con == 3) {
			return 1;
		}
	}
	return 0;
}

int main() {

	int n;
	cin >> n;
	long sum = 0;
	int i;
	for (i = 666; sum != n; i++) {
		sum += six(i);
	}
	i--;
	cout << i;

	return 0;
}*/