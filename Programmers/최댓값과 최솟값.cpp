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

            int num = stoi(tmp); // ����ȭ

            if (!plus) {// ������ -1���ϱ�
                num *= -1;
            }

            if (pri) { //���ʰ� ����
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

            // �ּ� �ִ� ����
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

            plus = true; // �ʱ�ȭ
            tmp.clear();
        }
        else if (c == '-') {
            plus = false; // ����
        }
        else {
            tmp.push_back(c); // ���� �ֱ�
        }
    }

    answer = m + ' ' + M;

    return answer;
}*/