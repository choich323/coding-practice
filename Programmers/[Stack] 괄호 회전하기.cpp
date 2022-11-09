/*#include <string>
#include <vector>

using namespace std;

bool check(vector<char> str, int start) {
    bool right = true;
    vector<char> tmp;
    tmp.push_back(str[start]);
    int idx = start + 1;
    while (idx != str.size()) {
        if ((tmp.back() == '(' && str[idx] == ')') || (tmp.back() == '{' && str[idx] == '}') || (tmp.back() == '[' && str[idx] == ']'))
        {
            tmp.pop_back();
        }
        else {
            tmp.push_back(str[idx]);
        }
        idx++;
    }
    if (!tmp.empty()) {
        right = false;
    }
    return right;
}

int solution(string s) {
    int answer = 0;

    int size = s.size();
    vector<char> str;
    for (auto elem : s) {
        str.push_back(elem);
    }
    for (int i = 0; i < size; i++) {
        if (check(str, i)) {
            answer++;
        }
        str.push_back(str[i]);
    }

    return answer;
}*/