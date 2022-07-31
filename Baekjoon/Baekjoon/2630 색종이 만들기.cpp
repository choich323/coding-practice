/*#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> square(128, vector<int>(128));
int blue = 0, white = 0;

void Divide(int startX, int startY, int n) {

	bool same = true;
	int start = square[startX][startY];
	for (int i = startX; i < startX + n; i++) {
		for (int j = startY; j < startY + n; j++) {
			if (square[i][j] != start) {
				same = false;
				break;
			}
		}
		if (same == false)
			break;
	}

	if (same) {
		if (start == 1)
			blue++;
		else
			white++;
	}
	else {
		Divide(startX, startY, n/2);
		Divide(startX, startY + n / 2, n/2);
		Divide(startX + n / 2, startY, n/2);
		Divide(startX + n / 2, startY + n / 2, n/2);
	}
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> square[i][j]; // mapping
		}
	}

	Divide(0, 0, N);

	cout << white << '\n' << blue;

	return 0;
}*/