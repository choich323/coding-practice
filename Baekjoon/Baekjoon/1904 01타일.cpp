/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> zero(N);

	zero[0] = 1;
	if (N > 1) {
		zero[1] = 2;
	}
	for (int i = 2; i < N; i++) {
		zero[i] = (zero[i - 1] + zero[i - 2]) % 15746;
	}
	cout << zero[N - 1]; // ��¿��� % ������ �ϸ� ���� for������ ���ڰ� �ʹ� Ŀ���� ���� ���� �� ����.

	return 0;
}*/