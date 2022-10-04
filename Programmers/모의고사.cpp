/*#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> s1 = { 1, 2, 3, 4, 5 };
    vector<int> s2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> s3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    vector<int> score(3);

    int size = answers.size();
    for (int i = 0; i < size; i++) {
        if (answers[i] == s1[i % 5]) {
            score[0]++;
        }
        if (answers[i] == s2[i % 8]) {
            score[1]++;
        }
        if (answers[i] == s3[i % 10]) {
            score[2]++;
        }
    }

    int max = *max_element(score.begin(), score.end());
    for (int i = 0; i < 3; i++) {
        if (max == score[i]) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}*/