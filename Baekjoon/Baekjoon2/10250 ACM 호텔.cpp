/*#include <iostream>
using namespace std;

int main() {

	int T, H, W, N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int floor = N % H;
		int room = N / H + 1;
		if (N % H == 0) {
			floor = H;
			room = N / H;
		}
		cout << floor;
		if (room < 10)
			cout << 0;
		cout << room << '\n';
	}

	return 0;
}*/