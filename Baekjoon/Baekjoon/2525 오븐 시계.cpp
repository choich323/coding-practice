/*#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int hour, min;
	hour = C / 60;
	min = C % 60;

	A = A + hour;
	B = B + min;
	if (B >= 60) {
		B = B % 60;
		A++;
	}
	if (A >= 24) {
		A = A % 24;
	}
	cout << A << ' ' << B;

	return 0;
}*/