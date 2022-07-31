/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	vector<int> stack;
	vector<char> cal;
	int idx = 0;
	for (int j = 1; j <= n; j++) {
		stack.push_back(j);
		cal.push_back('+');

		if (!stack.empty()) {
			while (stack.back() == num[idx]) {
				stack.pop_back();
				idx++;
				cal.push_back('-');
				if (stack.empty())
					break;
			}
		}
	}

	if (stack.empty()) {
		for (int k = 0; k < cal.size(); k++) {
			cout << cal[k] << '\n';
		}
	}
	else
		cout << "NO";

	return 0;
}*/