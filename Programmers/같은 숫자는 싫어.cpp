/*#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int arraySize = arr.size();
    int curNum = arr[0]; // 초기값 설정
    answer.push_back(arr[0]);
    for (int i = 1; i < arraySize; i++) {
        if (curNum != arr[i]) { // 현재 숫자와 비교하는 배열의 숫자가 다르면
            curNum = arr[i]; // 중복 값이 아니므로 기준 값을 갱신
            answer.push_back(arr[i]); // 중복 값이 아니므로 배열 갱신
        }
    }

    return answer;
}*/