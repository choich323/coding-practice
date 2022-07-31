/*#include <iostream>
using namespace std;

int main() {
	int x, y, z, result;	
	cin >> x >> y >> z;
	
	bool xy, xz, yz, xyz;
	xyz = x == y && y == z;
	xy = x == y && y != z;
	xz = x == z && x != y;
	yz = y == z && x != y;

	if (xyz) {
		result = 10000 + x * 1000;
	}
	else if (xy || xz) {
		result = 1000 + x * 100;
	}
	else if (yz) {
		result = 1000 + y * 100;
	}
	else {
		int more = x >= y ? x : y;
		result = more >= z ? more * 100 : z * 100;
	}
	cout << result;

	return 0;
}*/