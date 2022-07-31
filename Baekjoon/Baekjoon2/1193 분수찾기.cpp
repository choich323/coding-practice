/*#include <iostream>
using namespace std;

int main() {
	int x, a, b;
	cin >> x;

	int total = 1;
	int next = 1;
	while (x > total) {
		next++;
		total += next;
	}
	if ((next + 1) % 2 == 0) {
		a = next;
		b = 1;
	}
	else {
		a = 1;
		b = next;
	}

	int step = x - (total - next) - 1;
	for (int i = 0; i < step; i++) {
		if ((next + 1) % 2 == 0) {
			a--;
			b++;
		}
		else {
			a++;
			b--;
		}
	}

	/* 이건 모든 단계를 거치지만 위의 풀이는 중간 단계를 대거 생략할 수 있다.
	int step = 1;
	int a = 1, b = 1;

	int next = 1;
	int total = next;

	while (step != x) {
		int sum = a + b;
		
		if (total == step) {
			next++;
			total += next;

			if (sum % 2 == 0) {
				b++;
			}
			else {
				a++;
			}
		}
		else {
			if (sum % 2 == 0) {
				a--;
				b++;
			}
			else {
				b--;
				a++;
			}
		}
		step++;
	}

	cout << a << '/' << b;

	return 0;
}*/