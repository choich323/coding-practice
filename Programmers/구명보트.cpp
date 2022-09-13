/*#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    int person = people.size();
    sort(people.begin(), people.end(), greater<>());
    int idx = person - 1;

    for (int i = 0; i < person; i++) {
        int sub = limit - people[i];
        if (sub >= 40) {
            for (int j = idx; j >= i; j--) {
                if (i == j) {
                    answer++;
                    break;
                }
                if (people[j] <= sub) {
                    answer++;
                    person--;
                    idx--;
                    break;
                }
            }
        }
        else {
            answer++;
        }
    }

    return answer;
}*/