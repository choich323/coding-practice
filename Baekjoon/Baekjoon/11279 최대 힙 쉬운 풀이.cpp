/*#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int> heap;
	int N, x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 0) {
			if (heap.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << heap.top() << '\n';
				heap.pop();
			}
		}
		else {
			heap.push(x);
		}
	}

	return 0;
}*/