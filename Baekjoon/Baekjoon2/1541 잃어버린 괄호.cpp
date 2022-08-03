/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	string str;
	cin >> str;

	vector<char> idx;
	vector<int> num;
	vector<int> equation;
	int digit = 1;

	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == '+' || str[i] == '-') {
			idx.push_back(str[i]);
			num.push_back(-1);
			digit = 1;
		}
		else {
			num.push_back((str[i] - 48) * digit);
			digit *= 10;
		}
	}

	int sum = 0;
	for (int j = 0; j < num.size(); j++) {
		if (num[j] != -1) {
			sum += num[j];
		}
		else {
			equation.push_back(sum);
			sum = 0;
		}
	}

	if (!idx.empty()) {
		equation.push_back(sum);
		int result = 0;
		sum = 0;
		for (int k = 0; k < idx.size(); k++) {
			if (idx[k] == '-') {
				sum += equation[k];
				result -= sum;
				sum = 0;
			}
			else if (idx[k] == '+' && k == idx.size() - 1) {
				sum += equation[k];
				result += sum;
			}
			else {
				sum += equation[k];
			}
		}

		cout << result + equation[equation.size() - 1];
	}
	else {
		cout << sum;
	}

	return 0;
}*/