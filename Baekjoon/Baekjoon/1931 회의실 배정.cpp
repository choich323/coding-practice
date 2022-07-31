/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N, result = 0;
	cin >> N;

	// 풀이 1이 풀이 2보다 메모리 사용이나 처리 시간이 더 효율적이다

	// 풀이 2
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

	// 풀이 1
	pair<int, int> times[100000]; // 전역변수로 설정해야 스택 메모리 사용을 힙으로 돌릴 수 있다.
	 
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