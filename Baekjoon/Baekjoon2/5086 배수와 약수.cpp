/*#include <iostream>
using namespace std;

int main() {

	int n, m;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		bool b = false, y = false;
		if (n % m == 0) {
			b = true;
		}
		else if(m % n == 0) {
			y = true;
		}
		
		if (b)
			cout << "multiple" << '\n';
		else if (y)
			cout << "factor" << '\n';
		else
			cout << "neither" << '\n';
	}

	return 0;
}*/