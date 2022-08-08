/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<long long> distance (n - 1);
	vector<long long> price (n);

	for (int i = 0; i < n - 1; i++) {
		cin >> distance[i];
	}
	long long min = 1000000000;
	for (int j = 0; j < n; j++) {
		cin >> price[j];
		if (min > price[j] && j != n - 1) // 마지막 주유소는 의미가 없다
			min = price[j];
	}

	int idx = 0;
	long long result = 0; // 최종 가격
	long long now = price[0]; // 이제까지 가장 합리적인 주유소 가격
	long long sum = 0; // 다음 주유까지 이동할 거리
	while (price[idx] != min) { // 가장 저렴한 주유소에 도착할때까지
		
		sum += distance[idx];

		if (now > price[idx + 1]) { // 다음 주유소가 더 저렴하다면
			result += now * sum;
			sum = 0;
			now = price[idx + 1];
		}
		
		idx++;
	}

	sum = 0;
	for (int k = idx; k < n - 1; k++) {
		 sum += distance[k];
	}
	result += price[idx] * sum;
	cout << result;

	return 0;
}*/