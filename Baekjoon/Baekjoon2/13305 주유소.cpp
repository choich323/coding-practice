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
		if (min > price[j] && j != n - 1) // ������ �����Ҵ� �ǹ̰� ����
			min = price[j];
	}

	int idx = 0;
	long long result = 0; // ���� ����
	long long now = price[0]; // �������� ���� �ո����� ������ ����
	long long sum = 0; // ���� �������� �̵��� �Ÿ�
	while (price[idx] != min) { // ���� ������ �����ҿ� �����Ҷ�����
		
		sum += distance[idx];

		if (now > price[idx + 1]) { // ���� �����Ұ� �� �����ϴٸ�
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