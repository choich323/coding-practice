/*#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tree(65, vector<int>(65));

void Quad(int startX, int startY, int len) {

	int start = tree[startX][startY];
	bool same = true;

	for (int i = startX; i < startX + len; i++) {
		for (int j = startY; j < startY + len; j++) {
			if (start != tree[i][j]) {
				same = false;
			}
		}
		if (!same) {
			break;
		}
	}
	
	if (same) {
		if (start == 49)
			cout << 1;
		else if(start == 48)
			cout << 0;
	}
	else {
		cout << '(';
		Quad(startX, startY, len / 2);
		Quad(startX, startY + len / 2, len / 2);
		Quad(startX + len / 2, startY, len / 2);
		Quad(startX + len / 2, startY + len / 2, len / 2);
		cout << ')';
	}
}

int main() {

	int n;
	cin >> n;
	char num;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> num;
			tree[i][j] = num;
		}
	}
	
	Quad(1, 1, n);

	return 0;
}*/