/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N, K;
	cin >> N >> K;

	vector<int> queue(N);
	vector<int> order;

	int person = 0;
	int i = K - 1;
	int step = 0;
	while (person != N) {

		if (queue[i] == 0 && step == 0) {
			person++;
			order.push_back(i + 1);
			queue[i] = 1;
			if (i > N - 1) {
				i = i % N;
			}
			step = K;
		}
		else if (queue[i] == 1 && step != K) {
			i++;
			if (i > N - 1) {
				i = 0;
			}
		}
		else {
			i++;
			step--;
			if (i > N - 1) {
				i = 0;
			}
		}
	}

	cout << '<';
	for (int j = 0; j < N - 1; j++) {
		cout << order[j] << ", ";
	}
	cout << order[N - 1] << '>';

	return 0;
}*/