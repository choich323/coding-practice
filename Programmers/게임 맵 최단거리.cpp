/*#include<vector>
#include<queue>
using namespace std;

int n, m;

int bfs(vector<vector<int>>& maps) {

    queue<pair<int, int>> q;
    vector<vector<int>> visit(n, vector<int>(m));
    vector<vector<int>> step(n, vector<int>(m));
    q.push({ 0, 0 });
    step[0][0] = 1;
    visit[0][0] = 1;
    pair<int, int> pos = { 0, 0 };
    while (pos.first != n - 1 || pos.second != m - 1) {
        if (q.empty()) {
            return -1;
        }
        pos = q.front();
        int x = pos.first;
        int y = pos.second;
        q.pop();
        if (x + 1 < n && visit[x + 1][y] == 0 && maps[x + 1][y] == 1) {
            q.push({ x + 1, y });
            visit[x + 1][y] = 1;
            step[x + 1][y] = step[x][y] + 1;
        }
        if (x - 1 >= 0 && visit[x - 1][y] == 0 && maps[x - 1][y] == 1) {
            q.push({ x - 1, y });
            visit[x - 1][y] = 1;
            step[x - 1][y] = step[x][y] + 1;
        }
        if (y + 1 < m && visit[x][y + 1] == 0 && maps[x][y + 1] == 1) {
            q.push({ x, y + 1 });
            visit[x][y + 1] = 1;
            step[x][y + 1] = step[x][y] + 1;
        }
        if (y - 1 >= 0 && visit[x][y - 1] == 0 && maps[x][y - 1] == 1) {
            q.push({ x, y - 1 });
            visit[x][y - 1] = 1;
            step[x][y - 1] = step[x][y] + 1;
        }
    }
    return step[n - 1][m - 1];
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    n = maps.size();
    m = maps[0].size();

    answer = bfs(maps);

    return answer;
}*/