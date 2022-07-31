/*#include <iostream>
#include <vector>
using namespace std;

int _plus, zero, _minus;

void Paper(int x, int y, int n, vector<vector<int>>& paper) {

	int start = paper[x][y];
	bool same = true;

	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (start != paper[i][j]) {
				same = false;
			}
		}
		if (!same)
			break;
	}

	if (same) {
		if (start == 1)
			_plus++;
		else if (start == 0)
			zero++;
		else
			_minus++;
	}
	else {
		Paper(x, y, n / 3, paper);
		Paper(x, y + n / 3, n / 3, paper);
		Paper(x, y + n / 3 * 2, n / 3, paper);
		Paper(x + n / 3, y, n / 3, paper);
		Paper(x + n / 3, y + n / 3, n / 3, paper);
		Paper(x + n / 3, y + n / 3 * 2, n / 3, paper);
		Paper(x + n / 3 * 2, y, n / 3, paper);
		Paper(x + n / 3 * 2, y + n / 3, n / 3, paper);
		Paper(x + n / 3 * 2, y + n / 3 * 2, n / 3, paper);
	}
}

int main() {
	int n;
	cin >> n;

	vector<vector<int>> paper(n + 1, vector<int> (n + 1));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> paper[i][j];
		}
	}

	Paper(1, 1, n, paper);

	cout << _minus << '\n' << zero << '\n' << _plus;

	return 0;
}*/