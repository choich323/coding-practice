/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, k; // n: 물건의 갯수, k: 요구하는 총 무게
	cin >> n >> k;
	
	vector<int> w(n + 1);
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	vector<vector<int>> answer(n + 1, vector<int> (k + 1));
	for (int i = 1; i <= n; i++) { // 각 물건마다
		for (int j = 1; j <= k; j++) { // 무게 리미트를 조정해보면서 비교
			if (w[i] > j) { // 기준 무게보다 무거운 물건이면
				answer[i][j] = answer[i - 1][j]; // 넣지 않고 이제까지의 합을 그대로 저장
			}
			else { // 물건을 넣을 수 있는 상태면
				answer[i][j] = max(answer[i - 1][j], v[i] + answer[i - 1][j - w[i]]); // 이제까지의 합과 물건을 넣었을 때를 비교. 현재 가치를 총 무게에서 j를 제외했을 때 값에 더한다.
			}
		}
	}
	cout << answer[n][k];

	return 0;
}*/