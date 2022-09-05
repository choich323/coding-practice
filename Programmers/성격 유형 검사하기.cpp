/*#include <string>
#include <vector>

using namespace std;
int R, T, C, F, J, M, A, N; // 성격별 점수를 매기기 위한 변수

string solution(vector<string> survey, vector<int> choices) {
    string answer = "RCJA";

    int size = survey.size();
    for (int i = 0; i < size; i++) { // 각 질문마다

        int points = 0;

        if (choices[i] < 4) {
            points = 4 - choices[i];
            if (survey[i][0] == 'R') { R += points; }
            else if (survey[i][0] == 'T') { T += points; }
            else if (survey[i][0] == 'C') { C += points; }
            else if (survey[i][0] == 'F') { F += points; }
            else if (survey[i][0] == 'J') { J += points; }
            else if (survey[i][0] == 'M') { M += points; }
            else if (survey[i][0] == 'A') { A += points; }
            else if (survey[i][0] == 'N') { N += points; }
        }
        else if (choices[i] > 4) {
            points = choices[i] - 4;
            if (survey[i][1] == 'R') { R += points; }
            else if (survey[i][1] == 'T') { T += points; }
            else if (survey[i][1] == 'C') { C += points; }
            else if (survey[i][1] == 'F') { F += points; }
            else if (survey[i][1] == 'J') { J += points; }
            else if (survey[i][1] == 'M') { M += points; }
            else if (survey[i][1] == 'A') { A += points; }
            else if (survey[i][1] == 'N') { N += points; }
        }
    }

    if (R < T) {
        answer[0] = 'T';
    }
    if (C < F) {
        answer[1] = 'F';
    }
    if (J < M) {
        answer[2] = 'M';
    }
    if (A < N) {
        answer[3] = 'N';
    }

    return answer;
}*/