/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    int size = phone_book.size() - 1;
    for (int i = 0; i < size; i++) {
        // �Ʒ��� ���ǹ������� ��� ����
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size())) {
            return false;
        }
        
        // �Ʒ��� �ݺ������ε� ����(���� ���� �ټ��ϰ� ������?)
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