/*
#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> answer(8);
vector<bool> used(8);

void Find(int curN, int node) {
	answer[node] = curN;   // ���� N�� ���� ���� ������ ����
	used[curN - 1] = true; // ���� N�� ���� ����� ������ üũ

	if (node == M - 1) { // �ִ� ������ �����ϸ�
		for (int i = 0; i < M; i++) {
			cout << answer[i] << ' '; // ���
		}
		cout << '\n'; // endl�� ��� ������ ��� ��Ʈ���� �ݵ�� �Ѿ�Բ� ����� ������ �־ �� ��������.
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (used[i - 1] == false) { // ������� ���� ���̶��
				Find(i, node + 1);      // ����Լ� ����
			}
		}
	}
	used[curN - 1] = false;
}

int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) { // N�� ����
		Find(i, 0);
	}
	
	return 0;
}*/