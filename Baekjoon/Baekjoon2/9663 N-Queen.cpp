/*#include <iostream>
#include <vector>
using namespace std;

vector<int> col(15);
vector<int> cross(28);
vector<int> cross2(28);
int result, n;

void Queen(int row) {

	if (row == n + 1) {
		result++;
	}
	else {
		for (int column = 1; column <= n; column++) {
			if (col[column] == 0 && cross[row + column - 1] == 0 &&	cross2[row - column + n] == 0) {
				col[column] = 1;	// 열
				cross[row + column - 1] = 1; // 대각선 '\'
				cross2[row - column + n] = 1; // 대각선 /

				Queen(row + 1);

				col[column] = 0;
				cross[row + column - 1] = 0;
				cross2[row - column + n] = 0;
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	Queen(1);

	cout << result;

	return 0;
}*/