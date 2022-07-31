/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge(vector<int>& num, vector<int>& sol, int start, int mid, int end) {

	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (num[i] <= num[j]) {
			sol[k] = num[i];
			i++;
		}
		else {
			sol[k] = num[j];
			j++;
		}
		k++;
	}

	if (i > mid) {
		for (int p = j; p <= end; p++) {
			sol[k] = num[p];
			k++;
		}
	}
	else {
		for (int p = i; p <= mid; p++) {
			sol[k] = num[p];
			k++;
		}
	}

	for (int q = start; q <= end; q++) {
		num[q] = sol[q];
	}
}

void mergeSort(vector<int>& num, vector<int>& sol, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(num, sol, start, mid);
		mergeSort(num, sol, mid + 1, end);
		merge(num, sol, start, mid, end);
	}
}

int main() {
	
	int n;
	cin >> n;

	vector<int> num(n);
	vector<int> sol(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	mergeSort(num, sol, 0, n - 1);

	// sort(num.begin(), num.end());

	for (int i = 0; i < n; i++) {
		cout << sol[i] << '\n';
	}

	return 0;
}*/