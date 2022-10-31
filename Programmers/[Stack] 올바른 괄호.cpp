/*#include<string>
#include<vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> vec;
    for (auto c : s) {
        if (c == '(') {
            vec.push_back(c);
        }
        else {
            if (vec.empty()) {
                answer = false;
                break;
            }
            else {
                vec.pop_back();
            }
        }
    }
    if (!vec.empty()) {
        answer = false;
    }

    return answer;
}*/