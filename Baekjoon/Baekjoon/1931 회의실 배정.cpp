/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N, result = 0;
	cin >> N;

	// Ǯ�� 1�� Ǯ�� 2���� �޸� ����̳� ó�� �ð��� �� ȿ�����̴�

	// Ǯ�� 2
	vector<pair<int, int>> time;

	for (int i = 0; i < N; i++) {
		int start, end;
		cin >> start >> end;
		time.push_back({ end, start });
	}

	sort(time.begin(), time.end());

	int preEnd = 0;
	for (int j = 0; j < N; j++) {
		if (time[j].second >= preEnd) {
			preEnd = time[j].first;
			result++;
		}
	}

	// Ǯ�� 1
	pair<int, int> times[100000]; // ���������� �����ؾ� ���� �޸� ����� ������ ���� �� �ִ�.
	 
	for (int i = 0; i < N; i++) {
		cin >> times[i].second >> times[i].first;
	}

	sort(times, times + N);
	
	int preEnd = 0;
	for (int j = 0; j < N; j++)
	{
		if (times[j].second >= preEnd) {
			result++;
			preEnd = times[j].first;
		}
	}
	
	cout << result;	

	return 0;
}*/