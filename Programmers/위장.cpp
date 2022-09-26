/*#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool second(vector<string> v1, vector<string> v2) {
    return v1[1] < v2[1];
}

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    vector<int> v; // 중복이 제거된 벡터
    sort(clothes.begin(), clothes.end(), second); // 정렬

    int size = clothes.size();
    if (size == 1) {
        return 1;
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        count++;
        if (i == size - 1) { // 마지막 아이템이면 저장
            v.push_back(count);
        }
        else if (clothes[i][1] != clothes[i + 1][1]) { // 다른 종류의 옷이면
            v.push_back(count); // 이제까지 쌓은 카운트를 저장
            count = 0; // 카운트 초기화
        }
    }

    int mul = 1;
    for (int i = 0; i < v.size(); i++) {  // x^3 + (a + b + c)x^2 + (ab + bc + ca)x + (abc)  이런 수학 공식을 이용한다 (이 때 x^3의 계수를 제외하기 위해 아래에서 1을 빼주는 것)
        mul *= 1 + v[i];
    }

    answer = mul - 1;

    return answer;
}*/