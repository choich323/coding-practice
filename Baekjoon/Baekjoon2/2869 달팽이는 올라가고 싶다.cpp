/*#include <iostream>
using namespace std;

int main() {

	int A, B, V;
	cin >> A >> B >> V;

	int total;
	int sub = V - A;
	int sub2 = A - B;
	if (V == A)
		total = 0;
	else if (sub < sub2)
		total = 1;
	else {
		if (sub % sub2 == 0)
			total = sub / sub2;
		else
			total = sub / sub2 + 1;
	}
	cout << total + 1;

	return 0;
}*/