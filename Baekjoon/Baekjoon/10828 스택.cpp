/*#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> stack;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int X;
			cin >> X;
			stack.push_back(X);
		}
		else if (str == "pop") {
			if (stack.size() == 0) {
				cout << -1;
			}
			else {
				cout << stack.back();
				stack.pop_back();
			}
			cout << '\n';
		}
		else if (str == "size") {
			cout << stack.size() << '\n';
		}
		else if (str == "empty") {
			if (stack.size() == 0) {
				cout << 1;
			}
			else {
				cout << 0;
			}
			cout << '\n';
		}
		else if (str == "top") {
			if (stack.size() == 0) {
				cout << -1;
			}
			else {
				cout << stack.back();
			}
			cout << '\n';
		}
	}

	return 0;
}*/