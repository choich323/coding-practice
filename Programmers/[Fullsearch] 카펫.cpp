/*#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2, 3);
    brown -= 4; // ������ ����
    if (brown % 2 == 1) {
        brown--; // brown�� �׻� ¦���� ����
    }
    for (int i = 1; i < yellow; i++) {
        if (yellow % i == 0) {
            if (yellow / i + i == brown / 2) {
                answer[0] = yellow / i + 2;
                answer[1] = i + 2;
                break;
            }
        }
    }

    return answer;
}*/