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

	while (start <= max) { // ������ �ּ�ȭ�� ������
		unsigned int mid = (start + max) / 2; // �ڸ��� ����
		unsigned int sum = 0;
		for (auto elem : line) {
			sum += elem / mid; // �� ����
		}

		if(sum < n) { // ��ǥ���� ������
			max = mid - 1; // �ִ� ����
		}
		else if(sum >= n) { // ��ǥ�� ���ų� ������
			start = mid + 1; // �������� ����: ���� ������ ���� +1
			answer = mid;    // �� ����
		}
	}
	cout << answer;
	return 0;
}*/