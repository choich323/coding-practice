/*#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 에라토스 테네스의 체 활용; 소수 집합 생성
	int T;
	cin >> T;
	vector<int> che;
	che.push_back(2);
	for (int i = 3; i <= 10000; i++) {
		bool sosu = true;
		for (int j = 3; j <= sqrt(i); j++) {
			if (i % j == 0) {
				sosu = false;
				break;
			}
		}
		if (sosu)
			che.push_back(i);
		i++;
	}

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		int half = n / 2;
				
		int j, k = 0;
		bool correct = false;
		// 입력받은 값의 절반에서 소수 조합을 찾아감
		for (j = 0; j < che.size(); j++) {
			if (half <= che[j]) {
				for (k = j; k >= 0; k--) {
					if (che[j] + che[k] == n) {
						correct = true;
						break;
					}
				}
			}
			if (correct)
				break;
		}
		cout << che[k] << ' ' << che[j] << '\n';
	}

	return 0;
}*/