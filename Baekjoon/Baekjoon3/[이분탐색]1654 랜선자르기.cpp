/*#include <iostream>
#include <vector>

using namespace std;

int main() {
	int answer = 0;
	unsigned int n;
	int k;
	cin >> k >> n;
	unsigned int start = 1;
	unsigned int max = 0;

	vector<unsigned int> line(k);
	for (auto i = 0; i < k; i++) {
		cin >> line[i];
		if (max < line[i]) {
			max = line[i];
		}
	}

	while (start <= max) { // 범위가 최소화될 때까지
		unsigned int mid = (start + max) / 2; // 자르는 길이
		unsigned int sum = 0;
		for (auto elem : line) {
			sum += elem / mid; // 선 갯수
		}

		if(sum < n) { // 목표보다 적으면
			max = mid - 1; // 최댓값 감소
		}
		else if(sum >= n) { // 목표와 같거나 많으면
			start = mid + 1; // 시작지점 증가: 종료 조건을 위해 +1
			answer = mid;    // 값 조정
		}
	}
	cout << answer;
	return 0;
}*/