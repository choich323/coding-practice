/*#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2, 3);
    brown -= 4; // 꼭짓점 차감
    if (brown % 2 == 1) {
        brown--; // brown을 항상 짝수로 가정
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