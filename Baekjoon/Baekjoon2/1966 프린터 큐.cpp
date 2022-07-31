/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	int N, M;

	while (n--) {
		cin >> N >> M;
		
		vector<pair<int, int>> num(N);
		vector<int> sol(N);
		for (int i = 0; i < N; i++) {
			cin >> num[i].first;
			num[i].second = i;
		}

		int idx = 0;
		if (N > 1) {
			for (int j = 0; j < num.size(); j++) {
				for (int k = j + 1; k < num.size(); k++) {
					if (num[j].first < num[k].first) {
						num.push_back(num[j]);
						num[j].first = 0;
						break;
					}
				}

				if (num[j].first != 0) {
					sol[idx] = num[j].second;
					idx++;
				}
			}

			for (int p = 0; p < N; p++) {
				if (sol[p] == M) {
					cout << p + 1<< '\n';
				}
			}
		}
		else {
			cout << 1 << '\n';
		}

	}

	return 0;
}*/