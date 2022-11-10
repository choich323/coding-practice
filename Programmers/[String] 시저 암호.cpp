/*#include <string>

using namespace std;

string solution(string s, int n) {

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + n <= 90 ? s[i] + n : 64 + (n + s[i] - 90);
        }
        else if (s[i] <= 122 && s[i] >= 97) {
            s[i] = s[i] + n <= 122 ? s[i] + n : 96 + (n + s[i] - 122);
        }
    }

    return s;
}*/