/*#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> have(n + 2);

    for (auto i : lost) {
        have[i]--;
    }
    for (auto i : reserve) {
        have[i]++;
    }

    for (int i = 1; i <= n; i++) {
        if (have[i] == -1) {
            if (have[i - 1] > 0) {
                have[i]++;
                have[i - 1]--;
            }
            else if (have[i + 1] > 0) {
                have[i]++;
                have[i + 1]--;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (have[i] > -1) {
            answer++;
        }
    }

    return answer;
}*/