/*#include <iostream>
#include <vector>
using namespace std;

int main() {

	int humanN; // 전체 사람의 수
	cin >> humanN;

	int w;
	int h;
	vector<int> weight;
	vector<int> height;
	vector<int> rank;

	for (int i = 0; i < humanN; i++) {
		cin >> w >> h;
		weight.push_back(w);
		height.push_back(h);
		rank.push_back(1);
	}

	for (int j = 0; j < humanN; j++)
		for (int k = 0; k < humanN; k++)
			if (weight[j] < weight[k] && height[j] < height[k] && j != k)
				rank[j]++;

	for (int a = 0; a < humanN; a++) 
		cout << rank[a] << " ";

	return 0;
}*/