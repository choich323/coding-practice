/*#include <iostream>
using namespace std;

int main() {
	int cardN;
	int maxM;
	int result = 0;
	int ary[100];
	
	cin >> cardN >> maxM;
	
	// ī�� ���� �Է�
	for (int i = 0; i < cardN; i++) {
		cin >> ary[i];
	}

	for (int a = 0; a < cardN; a++) {
		for (int b = a+1; b < cardN; b++) {
			for (int c = b+1; c < cardN; c++) {
				int sum = ary[a] + ary[b] + ary[c]; // ���� ������ ��
				if (sum > result && sum <= maxM) // ���� �ִ񰪺��� �� ũ�鼭 M���ϸ�
					result = sum; // ����� ����
			}
		}
	}

	cout << result;

	return 0;
}*/