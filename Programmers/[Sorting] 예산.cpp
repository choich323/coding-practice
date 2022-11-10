/*#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;

    sort(d.begin(), d.end());
    for (auto elem : d) {
        if (budget - elem < 0) {
            break;
        }
        budget -= elem;
        answer++;
    }

    return answer;
}*/