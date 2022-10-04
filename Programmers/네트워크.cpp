/*#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    int size = computers.size();
    vector<int> visit(size);
    for (int i = 0; i < size; i++) { // 모든 컴퓨터에 대해
        if (visit[i] == 1) {
            continue;
        }
        queue<int> q;
        q.push(i);
        visit[i] = 1;
        int com;
        answer++;
        //bfs과정
        while (true) {
            if (q.empty()) {
                break;
            }
            com = q.front();
            q.pop();

            for (int j = 0; j < size; j++) {
                if (computers[com][j] == 1 && visit[j] == 0) {
                    q.push(j);
                    visit[j] = 1;
                }
            }
        }
    }

    return answer;
}*/