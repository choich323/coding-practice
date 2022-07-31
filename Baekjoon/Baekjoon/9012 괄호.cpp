/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int T;
	cin >> T;

	vector<string> str;
	for (int i = 0; i < T; i++) {
		string PS;
		cin >> PS;
		str.push_back(PS);
		int count = 0;
		for (int j = 0; j < str[i].size(); j++) {
			if (str[i][j] == '(') {
				count++;
			}
			else if (str[i][j] == ')') {
				count--;
			}
			if (count < 0) {
				break;
			}
		}
		if (count == 0) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}*/