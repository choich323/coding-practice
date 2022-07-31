/*#include <iostream>
#include <vector>
using namespace std;

bool IsEmpty(vector<int>& queue, int front, int back) {
	if (( front - 1 == back && queue[back] == 0 ) || back == -1) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int front = 0;
	int back = -1;
	cin >> N;
	vector<int> queue(N);
	string str;

	while (N--) {
		cin >> str;
		if (str == "push") {
			int X;
			cin >> X;
			back++;
			queue[back] = X;
		}
		else if (str == "pop") {
			if (IsEmpty(queue, front, back))
				cout << -1 << '\n';
			else {
				cout << queue[front] << '\n';
				queue[front] = 0;
				front++;
			}
		}
		else if (str == "size") {
			cout << back - front + 1 << '\n';
		}
		else if (str == "empty") {
			int empty = IsEmpty(queue, front, back) ? 1 : 0;
			cout << empty << '\n';
		}
		else if (str == "front") {
			if (IsEmpty(queue, front, back))
				cout << -1 << '\n';
			else
				cout << queue[front] << '\n';
		}
		else if (str == "back") {
			if (IsEmpty(queue, front, back))
				cout << -1 << '\n';
			else
				cout << queue[back] << '\n';
		}
	}
	return 0;
}*/