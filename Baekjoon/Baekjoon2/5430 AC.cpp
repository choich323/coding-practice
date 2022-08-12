/*#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	
	while (t--) {

		string command;
		int size;
		char tmp;
		cin >> command >> size;
		deque<int> num(size);

		cin >> tmp; // '['
		if (size > 0) {
			cin >> num[0];
			for (int i = 1; i < size; i++) {
				cin >> tmp >> num[i];
			}
		}
		cin >> tmp; // ']'

		bool reverse = false;
		bool error = false;
		int comSize = command.size(); // size�Լ� ȣ�� ���� �ð��� �Һ��ϹǷ� for���� ���ǹ��� �ֱ⺸�� ������ ������ �Ҵ��Ͽ� �ð��� �̵��� ���
		for (int j = 0; j < comSize; j++) {
			if (command[j] == 'R') {
				if (reverse) {
					reverse = false;
				}
				else {
					reverse = true;
				}
			}
			else if (command[j] == 'D') {
				if (num.empty()) { // ��������� ����
					error = true;
					break;
				}
				if (reverse) { // ������ ����
					num.pop_back();
				}
				else { // ������ ����
					num.pop_front(); // vector�� erase�� ���� �ð��ʰ�. erase�� O(n)�� �ð����⵵�̱� ����. ó�� �������� �����ϰ� ������ �������� ������ ���� ������ O(n)�̴�.
					                 // �ݸ� deque�� ���� ��ũ�� ����Ʈ �����̱� ������ ������ �߰�/���ſ� O(1)������ ����ϴ�.
				}
				size--;
			}
		}
		if(error){
			cout << "error" << '\n';
		}
		else {
			cout << '[';
			if (!num.empty()) {
				if (!reverse) { // ������ ���
					cout << num[0];
					for (int k = 1; k < size; k++) {
						cout << ',' << num[k];
					}
				}
				else { // ������ ���
					cout << num[size - 1];
					for (int k = size - 2; k >= 0; k--) {
						cout << ',' << num[k];
					}
				}
			}
			cout << ']' << '\n';
		}
	}

	return 0;
}*/