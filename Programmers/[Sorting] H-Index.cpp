/*#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> c) {
    int answer = 0;

    sort(c.begin(), c.end(), greater<>());
    int size = c.size();
    answer = size;

    for (int i = 0; i < size; i++) {
        if (i + 1 > c[i]) {
            answer = i;
            break;
        }
    }

    return answer;
}*/