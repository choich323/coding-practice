/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, string>> str(n);
	pair<int, string> tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp.second;
		bool in = false;
		for (int j = 0; j < i; j++) {
			if (tmp.second == str[j].second) {
				in = true;
				break;
			}
		}
		if (!in) {
			tmp.first = tmp.second.size();
			str[i] = tmp;
		}
	}
	sort(str.begin(), str.end());

	for (int i = 0; i < n; i++) {
		if(str[i].first != 0)
			cout << str[i].second << '\n';
	}

	return 0;
}*/