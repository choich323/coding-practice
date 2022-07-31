/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	while(true){
		vector<int> world;
		string str;
		getline(cin, str, '\n');

		if (str == ".") {
			break;
		}
		
		bool balance = true;

		for (auto c : str) {
			if (c == '(' || c == '[') {
				world.push_back(c);
			}
			else if (c == ')') {
				if (world.empty()) {
					balance = false;
					break;
				}
				else if (world.back() != '(') {
					balance = false;
					break;
				}
				else {
					world.pop_back();
				}
			}
			else if (c == ']') {
				if (world.empty()) {
					balance = false;
					break;
				}
				else if (world.back() != '[') {
					balance = false;
					break;
				}
				else {
					world.pop_back();
				}
			}
		}

		if (!world.empty())
			balance = false;

		cout << (balance ? "yes" : "no") << '\n';
	}

	return 0;
}*/