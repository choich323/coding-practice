/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> nums(N);
	cin >> nums[0];
	int max = nums[0];
	int sum = nums[0];
	if (sum < 0)
		sum = 0;
	for (int i = 1; i < N; i++) {
		cin >> nums[i];
		sum += nums[i];
		if (max < sum) {
			max = sum;
		}
		if (sum < 0) {
			sum = 0;
		}
	}
	cout << max;

	return 0;
}*/