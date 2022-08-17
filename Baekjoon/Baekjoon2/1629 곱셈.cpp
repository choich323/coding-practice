/*#include <iostream>
using namespace std;

int A, B, C;

int Pow(int b) {

	if (b == 0) {
		return 1;
	}
	
	long tmp = Pow(b / 2);
	tmp = tmp * tmp % C;
	if (b % 2 == 0) {
		return tmp;
	}
	return A * tmp % C;
}

int main() {

	cin >> A >> B >> C;

	cout << Pow(B);

	return 0;
}*/