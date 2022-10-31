/*#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    bool space = true;

    for (auto& c : s) {
        if (space && c >= 97 && c <= 122) {
            c -= 32;
            space = false;
        }
        else if (!space && c >= 65 && c <= 90) {
            c += 32;
        }
        else if (c == ' ') {
            space = true;
        }
        else {
            space = false;
        }
    }
    answer = s;
    return answer;
}*/