/*#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    string tmp;
    bool plus = true;
    int max, min, len = s.length();
    string M = "", m = "";
    bool pri = true;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == ' ' || i == len - 1) {
            if (i == len - 1) {
                tmp.push_back(c);
            }

            int num = stoi(tmp); // 정수화

            if (!plus) {// 음수면 -1곱하기
                num *= -1;
            }

            if (pri) { //최초값 설정
                max = num;
                min = num;
                if (max < 0) {
                    M.push_back('-');
                }
                M += tmp;
                if (min < 0) {
                    m.push_back('-');
                }
                m += tmp;
                pri = false;
            }

            // 최소 최대 갱신
            if (max < num) {
                max = num;
                M = "";
                if (max < 0) {
                    M.push_back('-');
                }
                M += tmp;
            }
            else if (min > num) {
                min = num;
                m = "";
                if (min < 0) {
                    m.push_back('-');
                }
                m += tmp;
            }

            plus = true; // 초기화
            tmp.clear();
        }
        else if (c == '-') {
            plus = false; // 음수
        }
        else {
            tmp.push_back(c); // 숫자 넣기
        }
    }

    answer = m + ' ' + M;

    return answer;
}*/