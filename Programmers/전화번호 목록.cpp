/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    int size = phone_book.size() - 1;
    for (int i = 0; i < size; i++) {
        // 아래의 조건문만으로 통과 가능
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size())) {
            return false;
        }
        
        // 아래의 반복문으로도 가능(아주 아주 근소하게 빠른듯?)
        for (int j = 0; j < phone_book[i].size(); j++) {
            if (phone_book[i][j] != phone_book[i + 1][j]) {
                break;
            }
            if (j == phone_book[i].size() - 1) {
                return false;
            }
        }
    }

    return answer;
}*/