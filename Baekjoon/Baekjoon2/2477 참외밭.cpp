/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int K;
	cin >> K;

	int rowMax = 0, colMax = 0;
	vector<pair<int, int>> fruit(6);
	for (int i = 0; i < 6; i++) {
		cin >> fruit[i].first >> fruit[i].second;

		switch (fruit[i].first) {
		case 1:
		case 2:
			if (rowMax < fruit[i].second)
				rowMax = fruit[i].second;
			break;
		case 3:
		case 4:
			if (colMax < fruit[i].second)
				colMax = fruit[i].second;
			break;
		}
	}

	int minBox = 0;
	for (int j = 0; j < 6; j++) {
		int next2= j + 2;
		int next = j + 1;
		int next3 = j + 3;

		if (j == 3) {
			next3 = 0;
		}
		else if (j == 4) {
			next2 = 0;
			next3 = 1;
		}
		else if (j == 5) {
			next3 = 2;
			next2 = 1;
			next = 0;
		}

		if (fruit[j].first == fruit[next2].first) {
			if (fruit[next].first == fruit[next3].first)
				minBox = fruit[next].second * fruit[next2].second;
			else
				minBox = fruit[j].second * fruit[next].second;
			break;
		}
	}
	cout << (rowMax * colMax - minBox) * K;

	return 0;
}*/