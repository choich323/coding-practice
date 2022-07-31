/*#include <iostream>
#include <vector>
using namespace std;

int min(int x, int y) {
	return x <= y ? x : y;
}

int main() {

	int N;
	cin >> N;

	vector<vector<int>> color(N, vector<int> (3));

	for (int i = 0; i < N; i++) {
		cin >> color[i][0] >> color[i][1] >> color[i][2];
	}

	vector<vector<int>> sum(N, vector<int>(3));
	//초기값 설정
	sum[0][0] = color[0][0];
	sum[0][1] = color[0][1];
	sum[0][2] = color[0][2];

	for (int j = 1; j < N; j++) {
		for (int k = 0; k < 3; k++) {
			if (k == 0) {
				sum[j][0] = color[j][0] + min(sum[j - 1][1], sum[j - 1][2]);
			}
			else if (k == 1) {
				sum[j][1] = color[j][1] + min(sum[j - 1][0], sum[j - 1][2]);
			}
			else if (k == 2) {
				sum[j][2] = color[j][2] + min(sum[j - 1][0], sum[j - 1][1]);
			}
		}
	}

	cout << min(min(sum[N - 1][0], sum[N - 1][1]), sum[N - 1][2]);

	return 0;
}*/