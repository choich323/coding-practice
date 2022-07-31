/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Find(int num, vector<int>& nums) {

	int left = 0;
	int right = nums.size();
	int mid;

	while (left < right) {
		mid = (left + right) / 2;
		if (num == nums[mid]) {
			return true;
		}
		else if (num < nums[mid]) {
			right = mid;
		}
		else if (num > nums[mid]) {
			left = mid + 1;
		}
	}

	return false;
}

int main() {

	ios::sync_with_stdio(false); 
	cin.tie(NULL); 

	int N, M;
	cin >> N;
	vector<int> nums(N);

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());
	cin >> M;

	for (int j = 0; j < M; j++) {
		int find;
		cin >> find;
		cout << Find(find, nums) <<'\n';
	}

	return 0;
}*/