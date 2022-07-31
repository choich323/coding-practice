/*#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b, int c) {
	int min1 = a <= b ? a : b;
	return min1 <= c ? min1 : c;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> one(N + 1, vector<int>(4));

	// 0. 최솟값, 1. 3으로 나눌 때, 2. 2로 나눌 때, 3. 1을 뺄 때
	one[1][0] = 0;
	
	if(N > 1)
		one[2][0] = 1;
	
	if(N > 2)
		one[3][0] = 1;

	for (int i = 4; i <= N; i++) {
		if (i % 3 == 0)
			one[i][1] = 1 + one[i / 3][0];
		else
			one[i][1] = i;
		if (i % 2 == 0)
			one[i][2] = 1 + one[i / 2][0];
		else
			one[i][2] = i;

		one[i][3] = 1 + one[i - 1][0];

		one[i][0] = min(one[i][1], one[i][2], one[i][3]);
	}

	cout << one[N][0];

	return 0;
}*/