
/* regex를 이용한 풀이
#include <string>
#include <vector>
#include <regex>

using namespace std;

vector<string> nums = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int solution(string s) {
    regex r;
    for (int i = 0; i < 10; i++) {
        r = nums[i];
        s = regex_replace(s, r, to_string(i));
    }

    return stoi(s);
}
*/


/* regex없이 조건문으로만 풀이
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    int len = s.length();
    int digit = 1;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] >= 48 && s[i] <= 57) { // 숫자면
            answer += digit * (s[i] - 48);
        }
        else {
            if (s[i] == 'o') {
                if (s[i - 1] == 'r') {
                    i -= 3;
                }
                else {
                    answer += 2 * digit;
                    i -= 2;
                }
            }
            else if (s[i] == 'e') {
                if (s[i - 1] == 'e') {
                    answer += 3 * digit;
                    i -= 4;
                }
                else if (s[i - 1] == 'v') {
                    answer += 5 * digit;
                    i -= 3;
                }
                else if (s[i - 2] == 'o') {
                    answer += 1 * digit;
                    i -= 2;
                }
                else if (s[i - 2] == 'i') {
                    answer += 9 * digit;
                    i -= 3;
                }
            }
            else if (s[i] == 'r') {
                answer += 4 * digit;
                i -= 3;
            }
            else if (s[i] == 'x') {
                answer += 6 * digit;
                i -= 2;
            }
            else if (s[i] == 'n') {
                answer += 7 * digit;
                i -= 4;
            }
            else if (s[i] == 't') {
                answer += 8 * digit;
                i -= 4;
            }
        }
        digit *= 10;
    }

    return answer;
}*/