/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> minute(n);
	for (int i = 0; i < n; i++) {
		cin >> minute[i];
	}
	
	sort(minute.begin(), minute.end());

	vector<int> sum(n);
	sum[0] = minute[0];
	int max = sum[0];
	for (int j = 1; j < n; j++) {
		sum[j] = sum[j - 1] + minute[j];
		max += sum[j];
	}
	cout << max;

	return 0;
}*/