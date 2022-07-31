/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Max(int x, int y) {
	return x >= y ? x : y;
}

int main() {

	int n;
	cin >> n;
	vector<int> score(n);
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	vector<vector<int>> sum(n, vector<int> (3));

	sum[n - 1][0] = 0; // 마지막을 안밟는 경우는 없으므로
	sum[n - 1][1] = score[n - 1]; // 마지막을 밟는 경우 2가지
	sum[n - 1][2] = score[n - 1];

	for (int j = n - 2; j >= 0; j--) {
		for (int k = 0; k < 3; k++) {
			if (k == 0) { // 현재 계단을 안밟는 경우
				sum[j][k] = Max(sum[j + 1][1], sum[j + 1][2]);
			}
			else if (k == 1) {
				if (j == n - 2) { // 마지막 전 계단을 연속 1번으로 밟는 것은 마지막을 안밟는 경우에 해당하므로 값을 0처리해서 제외해준다.
					sum[j][k] = 0;
				}
				else {
					sum[j][k] = score[j] + sum[j + 1][0];
				}
			}
			else if (k == 2) { // 현재 계단을 2스택으로 밟는 경우
				sum[j][k] = score[j] + sum[j + 1][1];
			}
		}
	}

	sort(sum[0].begin(), sum[0].end()); // 첫 번째 계단을 밟으면서 시작한 경우
	
	if (n > 1) { // n이 1인경우 인덱스 에러가 날 수 있으므로
		sort(sum[1].begin(), sum[1].end()); // 두 번째 계단을 밟으면서 시작한 경우
		cout << Max(sum[0][2], sum[1][2]);
	}
	else {
		cout << sum[0][2];
	}

	return 0;
}*/