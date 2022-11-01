/*#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);

    while (s != "1") {
        answer[0]++;
        string tmp;
        for (auto c : s) {
            if (c == '1') {
                tmp.push_back(c);
            }
            else {
                answer[1]++;
            }
        }
        int len = tmp.length();
        tmp = "";
        while (len != 0) {
            if (len % 2 == 0) {
                tmp.push_back('0');
            }
            else if (len % 2 == 1) {
                tmp.push_back('1');
            }
            len /= 2;
        }
        s = tmp;
    }

    return answer;
}*/