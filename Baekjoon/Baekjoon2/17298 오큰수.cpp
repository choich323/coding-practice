/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> stack;
	vector<int> seq(n);
	vector<int> sol(n, -1);

	for (int i = 0; i < n; i++) {
		cin >> seq[i];
	}

	stack.push_back(seq[n - 1]);

	for (int j = n - 2; j >= 0; j--) {

		while (!stack.empty()) {
			if (stack.back() > seq[j]) {
				sol[j] = stack.back();
				break;
			}
			else {
				stack.pop_back();
			}
		}

		stack.push_back(seq[j]);
	}

	for (auto a : sol) {
		cout << a << ' ';
	}

	return 0;
}*/