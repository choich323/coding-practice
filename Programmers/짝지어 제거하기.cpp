/*#include <vector>
#include<string>
using namespace std;

int solution(string s)
{
    vector<char> stack;
    stack.push_back(s[0]);
    int len = s.length();
    for (int i = 1; i < len; i++) {
        if (s[i] != stack.back()) {
            stack.push_back(s[i]);
        }
        else {
            stack.pop_back();
        }
    }

    if (stack.empty()) {
        return 1;
    }
    else {
        return 0;
    }
}*/