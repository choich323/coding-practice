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

	sum[n - 1][0] = 0; // �������� �ȹ�� ���� �����Ƿ�
	sum[n - 1][1] = score[n - 1]; // �������� ��� ��� 2����
	sum[n - 1][2] = score[n - 1];

	for (int j = n - 2; j >= 0; j--) {
		for (int k = 0; k < 3; k++) {
			if (k == 0) { // ���� ����� �ȹ�� ���
				sum[j][k] = Max(sum[j + 1][1], sum[j + 1][2]);
			}
			else if (k == 1) {
				if (j == n - 2) { // ������ �� ����� ���� 1������ ��� ���� �������� �ȹ�� ��쿡 �ش��ϹǷ� ���� 0ó���ؼ� �������ش�.
					sum[j][k] = 0;
				}
				else {
					sum[j][k] = score[j] + sum[j + 1][0];
				}
			}
			else if (k == 2) { // ���� ����� 2�������� ��� ���
				sum[j][k] = score[j] + sum[j + 1][1];
			}
		}
	}

	sort(sum[0].begin(), sum[0].end()); // ù ��° ����� �����鼭 ������ ���
	
	if (n > 1) { // n�� 1�ΰ�� �ε��� ������ �� �� �����Ƿ�
		sort(sum[1].begin(), sum[1].end()); // �� ��° ����� �����鼭 ������ ���
		cout << Max(sum[0][2], sum[1][2]);
	}
	else {
		cout << sum[0][2];
	}

	return 0;
}*/