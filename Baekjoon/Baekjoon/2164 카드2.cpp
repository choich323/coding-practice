/*#include <iostream>
#include <queue>
using namespace std;

int main() {

	int N;
	cin >> N;
	queue<int> queue;
	for (int i = 1; i <= N; i++) {
		queue.push(i);
	}
	while (queue.size() != 1) {
		queue.pop();
		int sec = queue.front();
		queue.pop();
		queue.push(sec);
	}
	
	cout << queue.front();

	return 0;
}*/