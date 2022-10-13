/*#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<int> weight(n + 1);
    queue<int> q;

    q.push(1);
    weight[1] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto& arr : edge) { // &를 써야 시간을 절약할 수 있다.(레퍼런스로 인한 데이터 로딩 속도의 이점인듯)
            if (arr[0] != node && arr[1] != node) { // 현재 노드와 연결X
                continue;
            }

            int other;
            if (arr[0] == node) {
                other = arr[1];
            }
            else {
                other = arr[0];
            }
            if (weight[node] == 0 || weight[other] != 0) { // 1번 노드거나 이미 방문한 노드면
                continue;
            }
            q.push(other);
            weight[other] = weight[node] + 1;
        }
    }

    int max = *max_element(weight.begin(), weight.end());
    for (auto& elem : weight) {
        if (elem == max) {
            answer++;
        }
    }

    return answer;
}*/