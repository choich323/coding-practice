/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, k; // n: ������ ����, k: �䱸�ϴ� �� ����
	cin >> n >> k;
	
	vector<int> w(n + 1);
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	vector<vector<int>> answer(n + 1, vector<int> (k + 1));
	for (int i = 1; i <= n; i++) { // �� ���Ǹ���
		for (int j = 1; j <= k; j++) { // ���� ����Ʈ�� �����غ��鼭 ��
			if (w[i] > j) { // ���� ���Ժ��� ���ſ� �����̸�
				answer[i][j] = answer[i - 1][j]; // ���� �ʰ� ���������� ���� �״�� ����
			}
			else { // ������ ���� �� �ִ� ���¸�
				answer[i][j] = max(answer[i - 1][j], v[i] + answer[i - 1][j - w[i]]); // ���������� �հ� ������ �־��� ���� ��. ���� ��ġ�� �� ���Կ��� j�� �������� �� ���� ���Ѵ�.
			}
		}
	}
	cout << answer[n][k];

	return 0;
}*/