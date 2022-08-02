/*#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<double> num(n);  // double이 아닌 float로 하면 틀린다. float보다 double 타입이 정확히 표현할 수 있는 실수의 범위가 더 크기 때문이다. 메모리 관리 목적이 아니라면 double을 쓰자. 
	vector<pair<int, int>> count(8001);
	double sum = 0; // 평균
	int most = 0; // 최빈값

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum += num[i];
		count[num[i] + 4000].first++; // 빈도 카운팅
		count[num[i] + 4000].second = num[i]; // pair 형태를 통해 원소와 빈도수를 매칭
	}

	sort(num.begin(), num.end()); // 중앙값 및 최대/최소 값을 찾기 위해 정렬
	sort(count.begin(), count.end()); // 가장 빈도가 높은 아이템을 찾기 위해 정렬

	vector<int> times; // 빈도가 똑같은 경우를 처리하기 위한 벡터
	times.push_back(count[8000].second); // 빈도수 기준 정렬 후 마지막 아이템을 전체 기준으로 잡는다.
	most = times[0];
	for (int j = 0; j < 8000; j++) {
		if (count[8000].first == count[j].first) { // 빈도수가 같은 아이템을 벡터에 넣는다.
			times.push_back(count[j].second);
		}
	}
	sort(times.begin(), times.end()); // 빈도수 같은 아이템들을 정렬
	if (times.size() > 1) // 아이템이 유일한 경우 예외 처리
		most = times[1]; // 최빈값 설정

	sum = round(sum / n); // 반올림
	if (sum == -0)
		sum = 0;

	cout << sum << '\n' << num[n / 2] << '\n' << most << '\n' << num[n - 1] - num[0];

	return 0;
}*/