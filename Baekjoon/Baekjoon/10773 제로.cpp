/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int K;
	cin >> K;
	int num;
	vector<int> stack;

	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			stack.pop_back();
		}
		else {
			stack.push_back(num);
		}
	}
	int sum = 0;
	for (int j = 0; j < stack.size(); j++) {
		sum += stack[j];
	}
	cout << sum;

	return 0;
}*/