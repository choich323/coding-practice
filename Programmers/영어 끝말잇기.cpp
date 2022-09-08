/*#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    int round = 0;
    int size = words.size();
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (i % n == 0) {
            round++;
        }
        if (i > 0) {
            if (words[i - 1][words[i - 1].size() - 1] != words[i][0]) {
                answer[0] = i % n + 1;
                answer[1] = round;
                return answer;
            }
        }
        for (int j = 0; j < idx; j++) {
            if (words[i] == words[j]) {
                answer[0] = i % n + 1;
                answer[1] = round;
                return answer;
            }
        }
        idx++;
    }

    return answer;
}*/