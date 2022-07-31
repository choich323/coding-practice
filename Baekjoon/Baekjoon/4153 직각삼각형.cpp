/*#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	bool tri = false;
	int max = 0;
	int minA, minB;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a <= b) {
			minA = a;
			if (b >= c) {
				max = b;
				minB = c;
			}
			else {
				max = c;
				minB = b;
			}
		}
		else {
			minA = b;
			if (a >= c) {
				max = a;
				minB = c;
			}
			else {
				max = c;
				minB = a;
			}
		}


		tri = (minA * minA + minB * minB == max * max) ? true : false;

		if(tri)
			cout << "right" << '\n';
		else {
			cout << "wrong" << '\n';
		}
	}

	return 0;
}*/