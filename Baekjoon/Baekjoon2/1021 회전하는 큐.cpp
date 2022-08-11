/*#include <iostream>
#include <vector>
using namespace std;

int cnt, n;
vector<int> num;

void Q(int target) {

	if (target == num.front()) {
		return;
	}
	else {
		bool front = false;
		for (int i = 0; i < num.size() / 2 + 1; i++) {
			if (num[i] == target) {
				front = true;
				break;
			}
		}
		while (num.front() != target) {
			int tmp = 0;
			if (front) { // 앞에서 옮기기
				tmp = num.front();
				num.erase(num.begin());
				num.push_back(tmp);
			}
			else { // 뒤에서 옮기기
				tmp = num.back();
				num.pop_back();
				num.insert(num.begin(), tmp);
			}
			cnt++;
		}
	}
}

int main() {

	int m;
	cin >> n >> m;
	vector<int> want(m);
	for (int i = 0; i < m; i++) {
		cin >> want[i];
	}
	for (int i = 0; i < n; i++) {
		num.push_back(i + 1);
	}

	for (int j = 0; j < m; j++) {
		Q(want[j]);
		num.erase(num.begin());
	}
	cout << cnt;
	return 0;
}*/