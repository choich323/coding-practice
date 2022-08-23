/*include <iostream>
#include <vector>
using namespace std;

string str1, str2;
vector<vector<int>> sol(1001, vector<int> (1001));
int mx;

int Dp() {

	for (int i = 1; i <= str1.size(); i++) {
		for (int j = 1; j <= str2.size(); j++) {
			if (str1[i - 1] == str2[j - 1]) {
				sol[i][j] = sol[i - 1][j - 1] + 1;
				if (sol[i][j] > mx) {
					mx = sol[i][j];
				}
			}
			else {
				sol[i][j] = sol[i - 1][j] > sol[i][j - 1] ? sol[i - 1][j] : sol[i][j - 1];
			}
		}
	}

	return mx;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> str1 >> str2;

	cout << Dp();

	return 0;
}*/