/*#include <iostream>
#include <vector>
using namespace std;

int fib(int n);

int fibonacci(int n);

int main() {
	int n;
	cin >> n;

	cout << fib(n) << ' ' << fibonacci(n);

	return 0;
}

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	vector<int> f(n);
	f[0] = 1; f[1] = 1;
	int count = 0;
	for (int i = 2; i < n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		count++;
	}
	return count;
}*/