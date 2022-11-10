/*#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer(strings.size());

    vector<pair<int, string>> v(strings.size());

    for (int i = 0; i < strings.size(); i++) {
        v[i].first = strings[i][n];
        v[i].second = strings[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < strings.size(); i++) {
        answer[i] = v[i].second;
    }

    return answer;
}*/