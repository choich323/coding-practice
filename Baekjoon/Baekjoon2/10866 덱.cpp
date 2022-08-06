/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string str;
	vector<int> d;

	while (n--) {
		int num;
		cin >> str;
		if (str == "push_front") {
			cin >> num;
			d.insert(d.begin(), num);
		}
		else if (str == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		else if (str == "pop_front") {
			if (!d.empty()) {
				num = d.front();
				cout << num << '\n';
				d.erase(d.begin());
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (str == "pop_back") {
			if (!d.empty()) {
				num = d.back();
				cout << num << '\n';
				d.pop_back();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (str == "size") {
			cout << d.size() << '\n';
		}
		else if (str == "empty") {
			if (d.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (str == "front") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
			}
		}
		else if (str == "back") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
			}
		}
	}

	return 0;
}*/