/*#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<double> num(n);  // double�� �ƴ� float�� �ϸ� Ʋ����. float���� double Ÿ���� ��Ȯ�� ǥ���� �� �ִ� �Ǽ��� ������ �� ũ�� �����̴�. �޸� ���� ������ �ƴ϶�� double�� ����. 
	vector<pair<int, int>> count(8001);
	double sum = 0; // ���
	int most = 0; // �ֺ�

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum += num[i];
		count[num[i] + 4000].first++; // �� ī����
		count[num[i] + 4000].second = num[i]; // pair ���¸� ���� ���ҿ� �󵵼��� ��Ī
	}

	sort(num.begin(), num.end()); // �߾Ӱ� �� �ִ�/�ּ� ���� ã�� ���� ����
	sort(count.begin(), count.end()); // ���� �󵵰� ���� �������� ã�� ���� ����

	vector<int> times; // �󵵰� �Ȱ��� ��츦 ó���ϱ� ���� ����
	times.push_back(count[8000].second); // �󵵼� ���� ���� �� ������ �������� ��ü �������� ��´�.
	most = times[0];
	for (int j = 0; j < 8000; j++) {
		if (count[8000].first == count[j].first) { // �󵵼��� ���� �������� ���Ϳ� �ִ´�.
			times.push_back(count[j].second);
		}
	}
	sort(times.begin(), times.end()); // �󵵼� ���� �����۵��� ����
	if (times.size() > 1) // �������� ������ ��� ���� ó��
		most = times[1]; // �ֺ� ����

	sum = round(sum / n); // �ݿø�
	if (sum == -0)
		sum = 0;

	cout << sum << '\n' << num[n / 2] << '\n' << most << '\n' << num[n - 1] - num[0];

	return 0;
}*/