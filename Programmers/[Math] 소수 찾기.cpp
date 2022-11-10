/*#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    vector<int> num(n + 1);

    for (int i = 2; i <= n; i++) {
        if (num[i] == 0) {
            answer++;
            int mul = i;
            for (int j = 1; mul * j <= n; j++) {
                num[mul * j] = 1;
            }
        }
    }

    return answer;
}*/