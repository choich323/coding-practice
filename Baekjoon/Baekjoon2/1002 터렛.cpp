/*#include <iostream>
#include <cmath>
using namespace std;

void scale(int r1, int r2, int& small, int& large) {
	if (r1 < r2) {
		small = r1;
		large = r2;
	}
	else {
		small = r2;
		large = r1;
	}
}

int main() {

	int T;
	int x1, y1, r1, x2, y2, r2;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (distance == 0) {
			if (r1 == r2) {
				cout << -1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			int small, large;
			scale(r1, r2, small, large);

			if (small + distance < large || small + large < distance) {
				cout << 0 << '\n';
			}
			else if (small + distance == large || small + large == distance) {
				cout << 1 << '\n';
			}
			else {
				cout << 2 << '\n';
			}
		}
	}

	return 0;
}*/