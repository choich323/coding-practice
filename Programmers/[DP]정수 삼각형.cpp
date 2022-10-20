/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> tri) {
    int answer = 0;
    int depth = tri.size();

    for (int i = 0; i < depth - 1; i++) {
        int size = tri[i].size();
        tri[i + 1][0] += tri[i][0];
        for (int j = 1; j < size; j++) {
            tri[i + 1][j] += tri[i][j - 1] > tri[i][j] ? tri[i][j - 1] : tri[i][j];
        }
        tri[i + 1][size] += tri[i][size - 1];
    }
    answer = *max_element(tri[depth - 1].begin(), tri[depth - 1].end());
    return answer;
}*/