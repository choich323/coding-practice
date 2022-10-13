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

        for (auto& arr : edge) { // &�� ��� �ð��� ������ �� �ִ�.(���۷����� ���� ������ �ε� �ӵ��� �����ε�)
            if (arr[0] != node && arr[1] != node) { // ���� ���� ����X
                continue;
            }

            int other;
            if (arr[0] == node) {
                other = arr[1];
            }
            else {
                other = arr[0];
            }
            if (weight[node] == 0 || weight[other] != 0) { // 1�� ���ų� �̹� �湮�� ����
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